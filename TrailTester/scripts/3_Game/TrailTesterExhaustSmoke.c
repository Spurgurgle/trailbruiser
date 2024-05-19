modded class ParticleList
{
	static const int TrailTester_IDLE_EXHAUST_SMOKE = RegisterParticle( "TrailTester/vehicles/trailtester/data/" , "TBidle_exhaust");
	static const int TrailTester_EXHAUST_SMOKE 		= RegisterParticle( "TrailTester/vehicles/trailtester/data/" , "TrailTester_exhaust");
}

class EffBruiserExhaustSmoke : EffVehicleSmoke
{
	override void SetParticleStateLight()
	{
		SetParticleState( ParticleList.TrailTester_EXHAUST_SMOKE );
		
		Car parent = Car.Cast( GetAttachmentParent() );
		Particle p = GetParticle();
	}
}

class EffBruiserIdleExhaustSmoke : EffVehicleSmoke
{
	override void SetParticleStateLight()
	{
		SetParticleState( ParticleList.TrailTester_IDLE_EXHAUST_SMOKE );
		
		Car parent = Car.Cast( GetAttachmentParent() );
		Particle p = GetParticle();
		
		if (parent  &&  p)
		{
			int id = p.GetParticleID();
			p.Stop();
			
			SetParticleState( id );
			p = GetParticle();
			if (p)
			{
				float speed = parent.GetSpeedometer();
				float lifetime_scale;
				
				if (speed < 100)
					lifetime_scale = (100 - speed) / 100;
				else
					lifetime_scale = 0.1;
				
				float birthrate_scale = 1 + (speed * 0.1 );

				p.ScaleParticleParamFromOriginal( EmitorParam.LIFETIME, lifetime_scale );
				p.ScaleParticleParamFromOriginal( EmitorParam.LIFETIME_RND, lifetime_scale );
				p.ScaleParticleParamFromOriginal( EmitorParam.BIRTH_RATE, birthrate_scale );
				p.ScaleParticleParamFromOriginal( EmitorParam.BIRTH_RATE_RND, birthrate_scale );
			}
		}
	}
}

