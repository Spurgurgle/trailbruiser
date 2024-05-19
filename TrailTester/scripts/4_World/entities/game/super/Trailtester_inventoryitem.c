class TrailTesterdoors_driver extends CarDoor {};
class TrailTesterdoors_codriver extends CarDoor {};
class TrailTesterdoors_cargo1 extends CarDoor {};
class TrailTesterdoors_cargo2 extends CarDoor {};
class TrailTesterHood extends CarDoor {};
class TrailTesterTrunk extends CarDoor {};

modded class SeaChest extends Container_Base
{
	override void SetActions()
	{
		super.SetActions();

		AddAction(ActionAttachOnSelection);
		AddAction(ActionDetach);
	}
};
modded class Barrel_ColorBase extends Container_Base
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionAttachOnSelection);
		//AddAction(ActionAttach);
		AddAction(ActionDetach);
	}
};
modded class CanisterGasoline extends Bottle_Base
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionAttachOnSelection);
		AddAction(ActionDetach);
	}
};
//bags
modded class TaloonBag_ColorBase extends Clothing
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionAttachOnSelection);
		AddAction(ActionDetach);
	}
};
modded class AliceBag_ColorBase extends Clothing
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionAttachOnSelection);
		AddAction(ActionDetach);
	}
};
modded class CoyoteBag_ColorBase extends Clothing
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionAttachOnSelection);
		AddAction(ActionDetach);
	}
};
modded class AssaultBag_ColorBase extends Clothing
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionAttachOnSelection);
		AddAction(ActionDetach);
	}
};
modded class LeatherSack_ColorBase extends Clothing
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionAttachOnSelection);
		AddAction(ActionDetach);
	}
};
modded class ChildBag_ColorBase extends Clothing
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionAttachOnSelection);
		AddAction(ActionDetach);
	}
};
modded class SmershBag extends Clothing
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionAttachOnSelection);
		AddAction(ActionDetach);
	}
};
modded class MountainBag_ColorBase extends Clothing
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionAttachOnSelection);
		AddAction(ActionDetach);
	}
};
modded class HuntingBag extends Clothing
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionAttachOnSelection);
		AddAction(ActionDetach);
	}
};
modded class DryBag_ColorBase extends Clothing
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionAttachOnSelection);
		AddAction(ActionDetach);
	}
};
modded class TortillaBag extends Clothing
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionAttachOnSelection);
		AddAction(ActionDetach);
	}
};
modded class CourierBag extends Clothing
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionAttachOnSelection);
		AddAction(ActionDetach);
	}
};
modded class FurCourierBag extends Clothing
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionAttachOnSelection);
		AddAction(ActionDetach);
	}
};
modded class ImprovisedBag extends Clothing
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionAttachOnSelection);
		AddAction(ActionDetach);
	}
};
modded class FurImprovisedBag extends Clothing
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionAttachOnSelection);
		AddAction(ActionDetach);
	}
};


class TrailTesterWheel extends CarWheel {
	override void EEKilled(Object killer)
	{
		string newWheel = "";
		switch( GetType() )
		{
			case "TrailTesterWheel":
				newWheel = "TrailTesterWheel_Ruined";
			break;
		}
		if ( newWheel != "" )
		{
			ReplaceWheelLambda lambda = new ReplaceWheelLambda ( this, newWheel, NULL);
			lambda.SetTransferParams(true, true, true);
			GetInventory().ReplaceItemWithNew(InventoryMode.SERVER, lambda);
		}
	}

	override int GetMeleeTargetType()
	{
		return EMeleeTargetType.NONALIGNABLE;
	}
	
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionDetach);
		AddAction(ActionAttachOnSelection);
	}
};
class TrailTesterWheel_Ruined extends ItemBase {};

class Bruiser_Armour extends ItemBase {
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionAttachOnSelection);
		//AddAction(ActionAttach);
		AddAction(ActionDetach);
	}
};
class BruiserTrunkArmour extends ItemBase {
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionAttachOnSelection);
		//AddAction(ActionAttach);
		AddAction(ActionDetach);
	}
};
class Bruiser_ArmourDD extends ItemBase {
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionAttachOnSelection);
		//AddAction(ActionAttach);
		AddAction(ActionDetach);
	}
};
class Bruiser_ArmourCDD extends ItemBase {
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionAttachOnSelection);
		//AddAction(ActionAttach);
		AddAction(ActionDetach);
	}
};
class Bruiser_ArmourC1 extends ItemBase {
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionAttachOnSelection);
		//AddAction(ActionAttach);
		AddAction(ActionDetach);
	}
};
class Bruiser_ArmourC2 extends ItemBase {
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionAttachOnSelection);
		//AddAction(ActionAttach);
		AddAction(ActionDetach);
	}
};
class Bruiser_ArmourRR extends ItemBase {
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionAttachOnSelection);
		//AddAction(ActionAttach);
		AddAction(ActionDetach);
	}
};
class Bruiser_ArmourRL extends ItemBase {
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionAttachOnSelection);
		//AddAction(ActionAttach);
		AddAction(ActionDetach);
	}
};
class BruiserHoodArmour extends ItemBase {
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionAttachOnSelection);
		//AddAction(ActionAttach);
		AddAction(ActionDetach);
	}
};
class Bruiser_BullBars extends ItemBase {
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionAttachOnSelection);
		//AddAction(ActionAttach);
		AddAction(ActionDetach);
	}
};
class Bruiser_Skull extends ItemBase {
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionAttachOnSelection);
		//AddAction(ActionAttach);
		AddAction(ActionDetach);
	}
};



