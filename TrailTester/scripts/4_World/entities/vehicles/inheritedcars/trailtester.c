class TrailTester extends CarScript
{
	protected ref EffVehicleSmoke m_exhaustFxArr[4];
	protected ref EffVehicleSmoke m_exhaustFxHbArr[4];
	protected int m_exhaustPtcFxArr[4];
	protected int m_exhaustPtcFxHbArr[4];

	protected int engineRpmFire;

	protected vector m_exhaustPtcPosArr[4];
	protected vector m_exhaustPtcDirArr[4];

	void CreateExhaustParticle ( int i )
	{
		m_exhaustPtcPosArr[i] = GetMemoryPointPos("ptcExhaust"+i+"_end");
		if ( MemoryPointExists("ptcExhaust"+i+"_start") )
		{
			vector exhaustStart = GetMemoryPointPos("ptcExhaust"+i+"_start");

			m_exhaustPtcDirArr[i] = vector.Direction( exhaustStart,  m_exhaustPtcPosArr[i]).Normalized().VectorToAngles();
			m_exhaustPtcDirArr[i][1] = m_exhaustPtcDirArr[i][1] - 90;
			float Temp1 = m_exhaustPtcDirArr[i][1];
			if ( Temp1 == 0 || Temp1 == 90) {
				m_exhaustPtcDirArr[i][1] = m_exhaustPtcDirArr[i][1] + 180;
			}
		}
	}
	
	void TrailTester()
	{
		m_dmgContactCoef = 0.0450;
		
		m_EngineStartOK = "Hatchback_02_engine_start_SoundSet";
		m_EngineStartBattery = "Hatchback_02_engine_failed_start_battery_SoundSet";
		m_EngineStartPlug = "Hatchback_02_engine_failed_start_sparkplugs_SoundSet";
		m_EngineStartFuel = "Hatchback_02_engine_failed_start_fuel_SoundSet";
		m_EngineStopFuel = "offroad_engine_stop_fuel_SoundSet";
		
		m_CarDoorOpenSound = "offroad_door_open_SoundSet";
		m_CarDoorCloseSound = "offroad_door_close_SoundSet";

		for (int i = 0; i < 4 ; i++) {
			m_exhaustPtcFxArr[i] = -1;
			m_exhaustPtcFxHbArr[i] = -1;
			if 	( MemoryPointExists("ptcExhaust"+i+"_end") )
				CreateExhaustParticle( i );
		}
	}
	
	override void EEDelete(EntityAI parent)
	{
		if ( !GetGame().IsMultiplayer() || GetGame().IsClient() )
		{
			for (int i = 0; i < 4 ; i++) {
				if ( SEffectManager.IsEffectExist( m_exhaustPtcFxArr[i] ) )
					SEffectManager.Stop( m_exhaustPtcFxArr[i] );
				if ( SEffectManager.IsEffectExist( m_exhaustPtcFxHbArr[i] ))
					SEffectManager.Stop( m_exhaustPtcFxHbArr[i] );
			}
		}
	}
	
	
	override void EOnPostSimulate(IEntity other, float timeSlice)
	{
		ExhaustsSimulate(other, timeSlice);
		super.EOnPostSimulate(other, timeSlice);
	}
	
	protected void ExhaustsSimulate(IEntity other, float timeSlice)
	{
		m_Time += timeSlice;
		engineRpmFire = EngineGetRPMRedline() - 550;
		if ( m_Time >= GameConstants.CARS_FLUIDS_TICK )
		{
			m_Time = 0;
			
			if ( EngineIsOn() )
			{
				if ( !GetGame().IsMultiplayer() || GetGame().IsClient() )
				{
					for (int i = 0; i < 4 ; i++) {
						if ( SEffectManager.IsEffectExist( m_exhaustPtcFxHbArr[i]) && EngineGetRPM() < engineRpmFire ) {
							SEffectManager.Stop( m_exhaustPtcFxHbArr[i] );
							m_exhaustFxArr[i].SetParticleStateLight();
						} 
						else if ( SEffectManager.IsEffectExist( m_exhaustPtcFxArr[i] ) && EngineGetRPM() >= engineRpmFire ) {
							SEffectManager.Stop( m_exhaustPtcFxArr[i] );
							m_exhaustFxHbArr[i].SetParticleStateLight();
						}

						if ( !SEffectManager.IsEffectExist( m_exhaustPtcFxHbArr[i] ) ) {
							Print("Created FxHB");
							m_exhaustFxHbArr[i] = new EffBruiserExhaustSmoke();
							m_exhaustPtcFxHbArr[i] = SEffectManager.PlayOnObject( m_exhaustFxHbArr[i], this, m_exhaustPtcPosArr[i], m_exhaustPtcDirArr[i] );
						}

						if ( !SEffectManager.IsEffectExist( m_exhaustPtcFxArr[i] ) ) {
							Print("Created Fx");
							m_exhaustFxArr[i] 	= new EffBruiserIdleExhaustSmoke();
							m_exhaustPtcFxArr[i] = SEffectManager.PlayOnObject( m_exhaustFxArr[i], this, m_exhaustPtcPosArr[i], m_exhaustPtcDirArr[i] );
						}
					}
				}
			}
			else
			{
				//FX only on Client and in Single
				if ( !GetGame().IsMultiplayer() || GetGame().IsClient() )
				{
					for (int x = 0; x < 4 ; x++) {
						if ( SEffectManager.IsEffectExist( m_exhaustPtcFxArr[x] ) )
							SEffectManager.Stop(m_exhaustPtcFxArr[x]);
						if ( SEffectManager.IsEffectExist( m_exhaustPtcFxHbArr[x] ))
							SEffectManager.Stop( m_exhaustPtcFxHbArr[x] );
					}
				}
			}
		}
	}
//all exhaust stuff is above here ^^^
	override int GetAnimInstance()
	{
		return VehicleAnimInstances.SEDAN;
	}
	override int GetSeatAnimationType( int posIdx )
	{
		switch( posIdx )
		{
		case 0:
			return DayZPlayerConstants.VEHICLESEAT_DRIVER;
		case 1:
			return DayZPlayerConstants.VEHICLESEAT_CODRIVER;
		case 2:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_L;
		case 3:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_R;
		}

		return 0;
	}

	override bool CanReleaseAttachment( EntityAI attachment )
	{
		if( !super.CanReleaseAttachment( attachment ) )
			return false;
		
		string attType = attachment.GetType();
		
		switch( attType )
		{
			case "CarBattery": 
				if ( GetCarDoorsState("TrailTesterHood") == CarDoorState.DOORS_CLOSED || EngineIsOn() )
					return false;
			break;
			
			case "SparkPlug":
				if ( GetCarDoorsState("TrailTesterHood") == CarDoorState.DOORS_CLOSED || EngineIsOn() )
					return false;
			break;
			case "CarRadiator":
				if ( GetCarDoorsState("TrailTesterHood") == CarDoorState.DOORS_CLOSED || EngineIsOn() )
					return false;
			break;
			
			case "TrailTesterSpareWheel":
				if ( GetCarDoorsState("TrailTesterTrunk") == CarDoorState.DOORS_CLOSED )
					return false;
			break;
			case "JerryCan":
				if ( GetCarDoorsState("TrailTesterTrunk") == CarDoorState.DOORS_CLOSED )
					return false;
			break;
			
			case "TrailTesterTrunk":
                if ( FindAttachmentBySlotName("BruiserTrunkArmour") )
                    return false;
            break;
			
			case "TrailTesterdoors_driver":
                if ( FindAttachmentBySlotName("Bruiser_ArmourDD") )
                    return false;
            break;
			
			case "TrailTesterdoors_codriver":
                if ( FindAttachmentBySlotName("Bruiser_ArmourCDD") )
                    return false;
            break;
			
			case "TrailTesterdoors_cargo1":
                if ( FindAttachmentBySlotName("Bruiser_ArmourC1") )
                    return false;
            break;
			
			case "TrailTesterdoors_cargo2":
                if ( FindAttachmentBySlotName("Bruiser_ArmourC2") )
                    return false;
            break;
			
			case "TrailTesterHood":
                if ( FindAttachmentBySlotName("BruiserHoodArmour") || FindAttachmentBySlotName("Bruiser_Skull"))
                    return false;
            break;
			
			case "TrailTesterTrunk_black":
                if ( FindAttachmentBySlotName("BruiserTrunkArmour") )
                    return false;
            break;
			
			case "TrailTesterdoors_driver_black":
                if ( FindAttachmentBySlotName("Bruiser_ArmourDD") )
                    return false;
            break;
			
			case "TrailTesterdoors_codriver_black":
                if ( FindAttachmentBySlotName("Bruiser_ArmourCDD") )
                    return false;
            break;
			
			case "TrailTesterdoors_cargo1_black":
                if ( FindAttachmentBySlotName("Bruiser_ArmourC1") )
                    return false;
            break;
			
			case "TrailTesterdoors_cargo2_black":
                if ( FindAttachmentBySlotName("Bruiser_ArmourC2") )
                    return false;
            break;
			
			case "TrailTesterHood_black":
                if ( FindAttachmentBySlotName("BruiserHoodArmour") || FindAttachmentBySlotName("Bruiser_Skull"))
                    return false;
            break;
			
			}
			
		return true;
		
	}
	
	override int GetCarDoorsState( string slotType )
	{
		CarDoor carDoor;

		Class.CastTo( carDoor, FindAttachmentBySlotName( slotType ) );
		if ( !carDoor )
			return CarDoorState.DOORS_MISSING;
	
		switch( slotType )
		{
			case "TrailTesterdoors_driver":
				if ( GetAnimationPhase("DoorsDriver") > 0.5 )
					return CarDoorState.DOORS_OPEN;
				else
					return CarDoorState.DOORS_CLOSED;

			break;
			
			case "TrailTesterdoors_codriver":
				if ( GetAnimationPhase("DoorsCoDriver") > 0.5 )
					return CarDoorState.DOORS_OPEN;
				else
					return CarDoorState.DOORS_CLOSED;

			break;
			
			case "TrailTesterdoors_cargo1":
				if ( GetAnimationPhase("DoorsCargo1") > 0.5 )
					return CarDoorState.DOORS_OPEN;
				else
					return CarDoorState.DOORS_CLOSED;

			break;
			
			case "TrailTesterdoors_cargo2":
				if ( GetAnimationPhase("DoorsCargo2") > 0.5 )
					return CarDoorState.DOORS_OPEN;
				else
					return CarDoorState.DOORS_CLOSED;
			break;
			
			case "TrailTesterTrunk":
				if ( GetAnimationPhase("DoorsTrunk") > 0.5 )
					return CarDoorState.DOORS_OPEN;
				else
					return CarDoorState.DOORS_CLOSED;

			break;
			
			case "TrailTesterHood":
				if ( GetAnimationPhase("DoorsHood") > 0.5 )
					return CarDoorState.DOORS_OPEN;
				else
					return CarDoorState.DOORS_CLOSED;

			break;
			
		}

		return CarDoorState.DOORS_MISSING;
	}
	

	override bool CrewCanGetThrough( int posIdx )
	{
		switch( posIdx )
		{
			case 0:
				if ( GetCarDoorsState( "TrailTesterdoors_driver" ) == CarDoorState.DOORS_CLOSED )
					return false;

				return true;
			break;
			
			case 1:
				if ( GetCarDoorsState( "TrailTesterdoors_codriver" ) == CarDoorState.DOORS_CLOSED )
					return false;

				return true;
			break;
			case 2:
				if ( GetCarDoorsState( "TrailTesterdoors_cargo1" ) == CarDoorState.DOORS_CLOSED )
					return false;

				return true;
			break;
			
			case 3:
				if ( GetCarDoorsState( "TrailTesterdoors_cargo2" ) == CarDoorState.DOORS_CLOSED )
					return false;

				return true;
			break;
		}

		return false;
	}
	
	override string GetDoorSelectionNameFromSeatPos(int posIdx)
	{
		switch( posIdx )
		{
		case 0:
			return "doors_driver";
		break;
		case 1:
			return "doors_codriver";
		break;
		case 2:
			return "doors_cargo1";
		break;
		case 3:
			return "doors_cargo2";
		break;
		}
		
		return super.GetDoorSelectionNameFromSeatPos(posIdx);
	}

	override string GetDoorInvSlotNameFromSeatPos(int posIdx)
	{
		switch( posIdx )
		{
		case 0:
			return "TrailTesterdoors_driver";
		break;
		case 1:
			return "TrailTesterdoors_codriver";
		break;
		case 2:
			return "TrailTesterdoors_cargo1";
		break;
		case 3:
			return "TrailTesterdoors_cargo2";
		break;
		}
		
		return super.GetDoorInvSlotNameFromSeatPos(posIdx);
	}
	override float OnSound( CarSoundCtrl ctrl, float oldValue )
	{
		switch ( ctrl )
		{
			case CarSoundCtrl.DOORS:
				float newValue = 0;
				
				//-----
				if ( GetCarDoorsState( "TrailTesterdoors_driver" ) == CarDoorState.DOORS_CLOSED )
					newValue += 0.25;

				//-----
				if ( GetCarDoorsState( "TrailTesterdoors_codriver" ) == CarDoorState.DOORS_CLOSED )
					newValue += 0.25;
			
				//-----
				if ( GetCarDoorsState( "TrailTesterdoors_cargo1" ) == CarDoorState.DOORS_CLOSED )
					newValue += 0.25;

				//-----
				if ( GetCarDoorsState( "TrailTesterdoors_cargo2" ) == CarDoorState.DOORS_CLOSED )
					newValue += 0.25;
			
				//-----
				if ( GetHealthLevel( "WindowFront") == GameConstants.STATE_RUINED )
					newValue -= 0.6;

				//-----
				if ( GetHealthLevel( "WindowRL") == GameConstants.STATE_RUINED )
					newValue -= 0.6;

				//-----
				if ( GetHealthLevel( "WindowRR") == GameConstants.STATE_RUINED )
					newValue -= 0.6;
			
				if ( newValue > 1 )
					newValue = 1;
			
				if ( newValue < 0 )
					newValue = 0;
			
				return newValue;
			break;
		}

		return oldValue;
	}

	override string GetAnimSourceFromSelection( string selection )
	{
		switch( selection )
		{
		case "doors_driver":
			return "DoorsDriver";
		case "doors_codriver":
			return "DoorsCoDriver";
		case "doors_cargo1":
			return "DoorsCargo1";
		case "doors_cargo2":
			return "DoorsCargo2";
		case "doors_hood":
			return "DoorsHood";
		case "doors_trunk":
			return "DoorsTrunk";
		}

		return "";
	}

	override bool IsVitalTruckBattery()
	{
		return false;
	}

	override bool IsVitalGlowPlug()
	{
		return false;
	}
	override CarLightBase CreateFrontLight()
	{
		return CarLightBase.Cast( ScriptedLightBase.CreateLight(TrailtesterFrontLight) );
	}
	
	override CarRearLightBase CreateRearLight()
	{
		return CarRearLightBase.Cast( ScriptedLightBase.CreateLight(TrailtesterRearLight) );
	}
	override bool CanReachSeatFromSeat( int currentSeat, int nextSeat )
	{
		switch( currentSeat )
		{
		case 0:
			if ( nextSeat == 1 )
				return true;
			break;
		case 1:
			if ( nextSeat == 0 )
				return true;
			break;
		case 2:
			if ( nextSeat == 3 )
				return true;
			break;
		case 3:
			if ( nextSeat == 2 )
				return true;
			break;
		}
		
		return false;
	}

	override bool CanReachDoorsFromSeat( string pDoorsSelection, int pCurrentSeat )
	{
		switch( pCurrentSeat )
		{
		case 0:
			if (pDoorsSelection == "DoorsDriver")
			{
				return true;
			}
		break;
		case 1:
			if (pDoorsSelection == "DoorsCoDriver")
			{
				return true;
			}
		break;
		case 2:
			if (pDoorsSelection == "DoorsCargo1")
			{
				return true;
			}
		break;
		case 3:
			if (pDoorsSelection == "DoorsCargo2")
			{
				return true;
			}
		break;
		}
		
		return false;		
	}
	 override bool IsVitalCarBattery()
		{
			return true;
		}

		
	override bool CanReceiveAttachment (EntityAI attachment, int slotId)
	{
		if( !super.CanReceiveAttachment ( attachment, slotId ) )
			return false;
		
		string attType = attachment.GetType();
		
		switch ( attType )
		{
				case "BruiserTrunkArmour":
					if ( GetCarDoorsState( "TrailTesterTrunk" ) == CarDoorState.DOORS_MISSING )
						return false;
				break;
				case "Bruiser_ArmourDD":
					if ( GetCarDoorsState( "TrailTesterdoors_driver" ) == CarDoorState.DOORS_MISSING )
						return false;
				break;
				case "Bruiser_ArmourCDD":
					if ( GetCarDoorsState( "TrailTesterdoors_codriver" ) == CarDoorState.DOORS_MISSING )
						return false;
				break;
				case "Bruiser_ArmourC1":
					if ( GetCarDoorsState( "TrailTesterdoors_cargo1" ) == CarDoorState.DOORS_MISSING )
						return false;
				break;
				case "Bruiser_ArmourC2":
					if ( GetCarDoorsState( "TrailTesterdoors_cargo2" ) == CarDoorState.DOORS_MISSING )
						return false;
				break;
				case "BruiserHoodArmour":
					if ( GetCarDoorsState( "TrailTesterHood" ) == CarDoorState.DOORS_MISSING )
						return false;
				break;
				case "Bruiser_Skull":
					if ( GetCarDoorsState( "TrailTesterHood" ) == CarDoorState.DOORS_MISSING )
						return false;
				break;
		}
		
		return true;
	}
		
		
		
	override void OnDebugSpawn()
	{
		EntityAI entity;
		
		if ( Class.CastTo(entity, this) )
		{


			entity.GetInventory().CreateInInventory( "CarBattery" );
			entity.GetInventory().CreateInInventory( "SparkPlug" );
			entity.GetInventory().CreateInInventory( "CarRadiator" );

			entity.GetInventory().CreateInInventory( "TrailTesterdoors_driver" );
			entity.GetInventory().CreateInInventory( "TrailTesterdoors_codriver" );
			entity.GetInventory().CreateInInventory( "TrailTesterdoors_cargo1" );
			entity.GetInventory().CreateInInventory( "TrailTesterdoors_cargo2" );
			entity.GetInventory().CreateInInventory( "TrailTestertrunk" );
			entity.GetInventory().CreateInInventory( "TrailTesterhood" );
			
			entity.GetInventory().CreateInInventory( "Bruiser_Armour" );


			entity.GetInventory().CreateInInventory( "HeadlightH7" );
			entity.GetInventory().CreateInInventory( "HeadlightH7" );

			entity.GetInventory().CreateInInventory( "SeaChest" );
			entity.GetInventory().CreateInInventory( "Barrel_Green" );
			entity.GetInventory().CreateInInventory( "Barrel_Yellow" );
			entity.GetInventory().CreateInInventory( "Back" );			
		};

		Fill( CarFluid.FUEL, 70 );
		Fill( CarFluid.COOLANT, 6.0 );
		Fill( CarFluid.OIL, 4.0 );
	};
}

class TrailTester_black extends TrailTester
{};
class TrailTester_winter extends TrailTester
{};