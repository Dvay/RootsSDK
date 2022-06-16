#include "pch.h"
#include "RootsSDK.h"


  
orbwalker_instance* orbwalker = nullptr;
localplayer_instance* myhero = nullptr;
targetselector_instance* targetselector = nullptr;
sdk_manager* sdk = nullptr;
spell_manager* spellmanager = nullptr;
settings_instance* settings = nullptr;
ImGuiContext* imgui_ctx = nullptr;


void link_globals(sdk_manager* a_sdk)
{
	myhero = a_sdk->myhero;
	orbwalker = a_sdk->orbwalker;
	targetselector = a_sdk->targetselector;
	spellmanager = a_sdk->spellmanager;
	settings = a_sdk->settings;
	sdk = a_sdk->sdk;
	imgui_ctx = a_sdk->imgui_ctx;

	ImGui::SetCurrentContext(imgui_ctx);

}