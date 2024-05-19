modded class DayZPlayerCamera3rdPersonVehicle extends DayZPlayerCameraBase
{
    void DayZPlayerCamera3rdPersonVehicle (DayZPlayer pPlayer, HumanInputController pInput)
    {
		if (pPlayer.GetCommand_Vehicle().GetTransport().GetType() == "TrailTester")
		{
		//Print("new camera: DayZPlayerCamera3rdPersonVehicle");
		m_fDistance         = 5.5; 
		m_CameraOffsetMS    = "0.0 1.5 0.0";
		}
		if (pPlayer.GetCommand_Vehicle().GetTransport().GetType() == "TrailTester_black")
		{
		//Print("new camera: DayZPlayerCamera3rdPersonVehicle");
		m_fDistance         = 5.5; 
		m_CameraOffsetMS    = "0.0 1.5 0.0";
		}
		if (pPlayer.GetCommand_Vehicle().GetTransport().GetType() == "TrailTester_winter")
		{
		//Print("new camera: DayZPlayerCamera3rdPersonVehicle");
		m_fDistance         = 5.5; 
		m_CameraOffsetMS    = "0.0 1.5 0.0";
		}
    }
}