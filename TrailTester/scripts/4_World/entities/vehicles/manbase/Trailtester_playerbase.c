modded class ModItemRegisterCallbacks
{
    override void RegisterHeavy(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    {
        super.RegisterHeavy(pType, pBehavior);
			pType.AddItemInHandsProfileIK("TrailTesterdoors_driver", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior,	"dz/anims/anm/player/ik/vehicles/hatchback_02/hatchback_02_door_driver.anm");
			pType.AddItemInHandsProfileIK("TrailTesterdoors_codriver", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/vehicles/hatchback_02/hatchback_02_door_codriver.anm");
			pType.AddItemInHandsProfileIK("TrailTesterdoors_cargo1", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior,	"dz/anims/anm/player/ik/vehicles/hatchback_02/hatchback_02_door_passengerl.anm");
			pType.AddItemInHandsProfileIK("TrailTesterdoors_cargo2", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/vehicles/hatchback_02/hatchback_02_door_passengerr.anm");
			pType.AddItemInHandsProfileIK("TrailTesterTrunk", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/vehicles/hatchback_02/hatchback_02_trunk.anm");
			pType.AddItemInHandsProfileIK("TrailTesterHood", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/vehicles/hatchback_02/hatchback_02_hood.anm");
			pType.AddItemInHandsProfileIK("TrailTesterWheel", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/vehicles/hatchback_02/hatchback_02_wheel.anm");
			pType.AddItemInHandsProfileIK("Bruiser_Armour", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/vehicles/hatchback_02/hatchback_02_trunk.anm");
			pType.AddItemInHandsProfileIK("BruiserTrunkArmour", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/vehicles/hatchback_02/hatchback_02_trunk.anm");
			pType.AddItemInHandsProfileIK("Bruiser_ArmourDD", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/vehicles/hatchback_02/hatchback_02_wheel.anm");
			pType.AddItemInHandsProfileIK("Bruiser_ArmourCDD", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/vehicles/hatchback_02/hatchback_02_wheel.anm");
			pType.AddItemInHandsProfileIK("Bruiser_ArmourC1", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/vehicles/hatchback_02/hatchback_02_wheel.anm");
			pType.AddItemInHandsProfileIK("Bruiser_ArmourC2", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/vehicles/hatchback_02/hatchback_02_wheel.anm");
			pType.AddItemInHandsProfileIK("BruiserHoodArmour", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/vehicles/hatchback_02/hatchback_02_hood.anm");
			pType.AddItemInHandsProfileIK("Bruiser_BullBars", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/vehicles/hatchback_02/hatchback_02_trunk.anm");
			pType.AddItemInHandsProfileIK("Bruiser_Skull", 	"dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/vehicles/hatchback_02/hatchback_02_wheel.anm");
			

    };
};