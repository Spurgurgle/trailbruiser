modded class PluginRecipesManager
{
    override void RegisterRecipies()
	{
        super.RegisterRecipies();

		
		RegisterRecipe(new CraftBruiser_Armour);
		RegisterRecipe(new CraftBruiser_Trunk_Armour);
		RegisterRecipe(new CraftBruiser_ArmourDD);
		RegisterRecipe(new CraftBruiser_ArmourCDD);
		RegisterRecipe(new CraftBruiser_ArmourRR);
		RegisterRecipe(new CraftBruiser_ArmourRL);
		RegisterRecipe(new CraftBruiser_ArmourC1);
		RegisterRecipe(new CraftBruiser_ArmourC2);
		RegisterRecipe(new CraftBruiser_Hood_Armour);
		RegisterRecipe(new CraftBruiser_BullBars);
		
    }
}