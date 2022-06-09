#pragma once
#include <vector>
#include <string>
#include <windows.h>
#include <functional> 
#include <variant>


#ifdef EXPORTS_API
#define ROOTS_API_EXPORT __declspec (dllexport)
#else
#define ROOTS_API_EXPORT __declspec (dllimport)
#endif

//#define SHOW_IMAGES


class vector2 {

public:

	vector2() {}
	vector2(int x, int y) : x(x), y(y) {}
	int x;
	int y;

};

struct COLOR {
	int R, G, B, A;


	COLOR(int R, int G, int B, int A = 255) : R(R), G(G), B(B), A(A) {};
};

struct NUMBER {
	int x, y, width, height;
	std::vector<COLOR>  color;
	NUMBER() = default;;
	NUMBER(int x, int y, int width, int height, std::vector<COLOR> color) : x(x), y(y), width(width), height(height), color(
		std::move(color)) {};
};



struct ENTITY_PROPERTIES {
	int R, G, B, OffsetX, OffsetY, x, y = 0;
	ENTITY_PROPERTIES() {};
	ENTITY_PROPERTIES(int R, int G, int B, int OffsetX, int OffsetY, int x, int y) : R(R), G(G), B(B), OffsetX(OffsetX), OffsetY(OffsetY), x(x), y(y) {};
};

struct  LEVEL_HASHS {
	std::vector<int> values;


};

struct  STATS_HASHS {

	int ZERO = 0;
	int ONE = 0;
	int TWO = 0;
	int THREE = 0;
	int FOUR = 0;
	int FIVE = 0;
	int SIX = 0;
	int SEVEN = 0;
	int EIGHT = 0;
	int NINE = 0;

};

enum class HERO
{
	NONE = -1,
	AATROX,
	AHRI,
	AKALI,
	ALISTAR,
	AMUMU,
	ANIVIA,
	ANNIE,
	APHELIOS,
	ASHE,
	AURELIONSOL,
	AZIR,
	BARD,
	BLITZCRANK,
	BRAND,
	BRAUM,
	CAITLYN,
	CAMILLE,
	CASSIOPEIA,
	CHOGATH,
	CORKI,
	DARIUS,
	DIANA,
	DRMUNDO,
	DRAVEN,
	EKKO,
	ELISE,
	EVELYNN,
	EZREAL,
	FIDDLESTICKS,
	FIORA,
	FIZZ,
	GALIO,
	GANGPLANK,
	GAREN,
	GNAR,
	GRAGAS,
	GRAVES,
	HECARIM,
	HEIMERDINGER,
	ILLAOI,
	IRELIA,
	IVERN,
	JANNA,
	JARVANIV,
	JAX,
	JAYCE,
	JHIN,
	JINX,
	KAISA,
	KALISTA,
	KARMA,
	KARTHUS,
	KASSADIN,
	KATARINA,
	KAYLE,
	KAYN,
	KENNEN,
	KHAZIX,
	KINDRED,
	KLED,
	KOGMAW,
	LEBLANC,
	LEESIN,
	LEONA,
	LILLIA,
	LISSANDRA,
	LUCIAN,
	LULU,
	LUX,
	MALPHITE,
	MALZAHAR,
	MAOKAI,
	MASTERYI,
	MISSFORTUNE,
	MORDEKAISER,
	MORGANA,
	NAMI,
	NASUS,
	NAUTILUS,
	NEEKO,
	NIDALEE,
	NOCTURNE,
	NUNU,
	OLAF,
	ORIANNA,
	ORNN,
	PANTHEON,
	POPPY,
	PYKE,
	QIYANA,
	QUINN,
	RAKAN,
	RAMMUS,
	REKSAI,
	RENEKTON,
	RENGAR,
	RIVEN,
	RUMBLE,
	RYZE,
	SAMIRA,
	SEJUANI,
	SENNA,
	SERAPHINE,
	SETT,
	SHACO,
	SHEN,
	SHYVANA,
	SINGED,
	SION,
	SIVIR,
	SKARNER,
	SONA,
	SORAKA,
	SWAIN,
	SYLAS,
	SYNDRA,
	TAHMKENCH,
	TALIYAH,
	TALON,
	TARIC,
	TEEMO,
	THRESH,
	TRISTANA,
	TRUNDLE,
	TRYNDAMERE,
	TWISTEDFATE,
	TWITCH,
	UDYR,
	URGOT,
	VARUS,
	VAYNE,
	VEIGAR,
	VELKOZ,
	VI,
	VIKTOR,
	VLADIMIR,
	VOLIBEAR,
	WARWICK,
	MONKEYKING,
	XAYAH,
	XERATH,
	XINZHAO,
	YASUO,
	YONE,
	YORICK,
	YUUMI,
	ZAC,
	ZED,
	ZIGGS,
	ZILEAN,
	ZOE,
	ZYRA
};
class COLOR_BASE {

public:
	int HUD_SCALE = 50;
	int healthbar_width_px_hero;
	int x_offset_attack_position_hero;
	int y_offset_attack_position_hero;

	int healthbar_width_px_creep;
	int x_offset_attack_position_creep;
	int y_offset_attack_position_creep;

	NUMBER num_as1;
	NUMBER num_as2;
	NUMBER num_as3;

	NUMBER num_ar1;
	NUMBER num_ar2;
	NUMBER num_ar3;

	NUMBER num_current_life1;
	NUMBER num_current_life2;
	NUMBER num_current_life3;
	NUMBER num_current_life4;
	int current_life_left_shift1_x;
	int current_life_left_shift1_y;
	int current_life_left_shift1_offset;
	int current_life_left_shift2_x;
	int current_life_left_shift2_y;
	int current_life_left_shift2_offset;

	NUMBER num_max_life1;
	NUMBER num_max_life2;
	NUMBER num_max_life3;
	NUMBER num_max_life4;

	NUMBER num_current_level;
	LEVEL_HASHS LEVEL_NUMBER_HASHS;

	STATS_HASHS YELLOW_NUMBER_HASHS;
	//COLOR COLOR_YELLOW_NUMBERS = { 0,0,0,0 };

	//COLOR COLOR_WHITE_NUMBERS = { 0,0,0,0 };

	STATS_HASHS WHITE_NUMBER_HASHS;
	//COLOR COLOR_WHITE_NUMBERS2 = { 0,0,0,0 };


	COLOR COLOR_ATTACK_RANGE_CIRCLE = COLOR(0, 0, 0);

	COLOR SPELL_LEVEL_COLOR = { 0,0,0,0 };
	int Q_SPELL_LEVEL_START_X;
	int W_SPELL_LEVEL_START_X;
	int E_SPELL_LEVEL_START_X;
	int R_SPELL_LEVEL_START_X;
	int SPELL_LEVEL_Y;
	int SPELL_LEVEL_DIST;
	int SPELL_LEVEL_DIST_BETWEEN_DOTS;
	COLOR_BASE() {};

	ENTITY_PROPERTIES ENEMY_HERO_MAIN;
	ENTITY_PROPERTIES ENEMY_HERO_VALIDATE1;
	ENTITY_PROPERTIES ENEMY_HERO_VALIDATE2;

	ENTITY_PROPERTIES ENEMY_CREEP_MAIN;
	ENTITY_PROPERTIES ENEMY_CREEP_VALIDATE1;
	ENTITY_PROPERTIES ENEMY_CREEP_HEALTH_CALC;

	ENTITY_PROPERTIES SUM1_FLASH_COLOR;
	ENTITY_PROPERTIES SUM1_EXHAUST_COLOR;
	ENTITY_PROPERTIES SUM1_IGNITE_COLOR;
	ENTITY_PROPERTIES SUM1_BARRIER_COLOR;
	ENTITY_PROPERTIES SUM1_HEAL_COLOR;
	ENTITY_PROPERTIES SUM1_CLEANSE_COLOR;

	ENTITY_PROPERTIES SUM2_FLASH_COLOR;
	ENTITY_PROPERTIES SUM2_EXHAUST_COLOR;
	ENTITY_PROPERTIES SUM2_IGNITE_COLOR;
	ENTITY_PROPERTIES SUM2_BARRIER_COLOR;
	ENTITY_PROPERTIES SUM2_HEAL_COLOR;
	ENTITY_PROPERTIES SUM2_CLEANSE_COLOR;

	ENTITY_PROPERTIES Q_SPELL = {};

	ENTITY_PROPERTIES W_SPELL = {};
	ENTITY_PROPERTIES W_SPELL_VALIDATE;

	ENTITY_PROPERTIES E_SPELL = {};
	ENTITY_PROPERTIES R_SPELL = {};
	ENTITY_PROPERTIES SUMMONER1 = {};
	ENTITY_PROPERTIES SUMMONER2 = {};
	ENTITY_PROPERTIES ITEM_1 = {};
	ENTITY_PROPERTIES ITEM_2 = {};
	ENTITY_PROPERTIES ITEM_3 = {};
	ENTITY_PROPERTIES ITEM_4 = {};
	ENTITY_PROPERTIES ITEM_5 = {};
	ENTITY_PROPERTIES ITEM_6 = {};
	ENTITY_PROPERTIES NO_ITEM_1 = {};
	ENTITY_PROPERTIES NO_ITEM_2 = {};
	ENTITY_PROPERTIES NO_ITEM_3 = {};
	ENTITY_PROPERTIES NO_ITEM_4 = {};
	ENTITY_PROPERTIES NO_ITEM_5 = {};
	ENTITY_PROPERTIES NO_ITEM_6 = {};
	ENTITY_PROPERTIES TRINKED = {};
};


enum class  STATE {
	NONE,
	FIGHT,
	POKE,
	LANECLEAR
};

class orbwalker_instance
{
private:
	STATE state = STATE::NONE;
public:

	virtual void addWindupTime(int windup) = 0;
	virtual bool fight_mode() = 0;
	virtual bool poke_mode() = 0;
	virtual bool laneclear_mode() = 0;
	virtual bool none_mode() = 0;
	virtual bool can_move() = 0;
	virtual void move() = 0;
	virtual void set_state(STATE state) = 0;
	virtual STATE get_state() = 0;
};



enum class ENTITY_TYPE {
	ENEMY_HERO,
	ENEMY_CREEP,
	ENEMY_SUPER_MINION,
	BIG_JUNGLE,
	SMALL_JUNGLE,
	TOWER,
	INHIB,
	NEXUS,
	UNKNOWN
};


class entity_instance {

private:
	std::string champion_name = "";
	vector2 position;
public:

	virtual std::string get_name() = 0;
	virtual void set_name(std::string name) = 0;
	virtual vector2& get_position() = 0;
	virtual void set_range(double range) = 0;
	virtual double get_range() = 0;
	virtual vector2& get_attack_position() = 0;
	virtual void set_attack_position(int offsetX, int offsetY) = 0;
	virtual float& get_health_percent() = 0;
	virtual float& get_health_absolut() = 0;
	virtual void set_health_absolut(float health) = 0;
	virtual void set_health_percent(float health) = 0;
	virtual ENTITY_TYPE& get_type() = 0;
	virtual void set_type(ENTITY_TYPE type) = 0;
	virtual COLOR& get_color() = 0;

};

class localplayer_instance {



public:
	virtual ~localplayer_instance() = default;

	virtual bool can_attack() = 0;
	//virtual bool is_in_autoattack_range(entity* to)
	virtual bool inRange(entity_instance* to, float range = 0) = 0;
	virtual void auto_attack(entity_instance* to, bool* process_auto_attack) = 0;
	virtual float get_attackspeed() = 0;
	virtual void set_attackspeed(float aspeed) = 0;
	virtual float get_attack_range() = 0;
	virtual void set_attack_range(float attack_range) = 0;
	virtual HERO get_name() = 0;
	virtual void set_name(HERO name) = 0;
	virtual vector2& get_position() = 0;
	virtual vector2& get_attack_position() = 0;
	virtual void set_attack_position(int offsetX, int offsetY) = 0;
	virtual float& get_health_percent() = 0;
	virtual float& get_health_absolute() = 0;
	virtual void set_health_absolute(float health) = 0;
	virtual void set_health_percent(float health) = 0;
	virtual float get_mana() = 0;
	virtual void set_mana(float mana) = 0;
	virtual ENTITY_TYPE& get_type() = 0;
	virtual void set_type(ENTITY_TYPE type) = 0;
	virtual COLOR& get_color() = 0;
	virtual int get_level() = 0;
	virtual void set_level(int level) = 0;

};

enum class summoner_type {
	NONE,
	HEAL,
	FLASH,
	IGNITE,
	BARRIER,
	CLEANSE,
	EXHAUST
};


enum class spell_slot {
	invalid = -1,
	q = 0,
	w,
	e,
	r,
	item_1,
	item_2,
	item_3,
	item_4,
	item_5,
	item_6,
	trinket,
	recall
};

enum class summoner_slot {
	invalid = -1,
	heal = 0,
	flash,
	barrier,
	ignite,
	exhaust,
	cleanse,
};


struct SPELL_CD_STATE {
	bool q = false;
	bool w = false;
	bool e = false;
	bool r = false;
	bool summoner1 = false;
	bool summoner2 = false;
	bool item_1 = false;
	bool item_2 = false;
	bool item_3 = false;
	bool item_4 = false;
	bool item_5 = false;
	bool item_6 = false;
	bool trinket = false;
};

class spell_instance {


public:

	virtual void set_spell_attributes(bool isSkillshot, bool self_cast, int cast_time_ms) = 0;
	virtual void cast(entity_instance* to = nullptr) = 0;
	virtual bool is_ready() = 0;
	virtual int get_level() = 0;
	virtual int get_range() = 0;
	virtual void set_range(int range) = 0;
};



class spell_manager {


public:

	int Q_LEVEL = 0;
	int W_LEVEL = 0;
	int E_LEVEL = 0;
	int R_LEVEL = 0;

	SPELL_CD_STATE cd_state;
	virtual void reset_spells() = 0;

	virtual spell_instance* register_spell(std::variant<spell_slot, summoner_slot> slot, int range) = 0;
};

enum class TARGET_SELECTOR {
	LOW_HEALTH_PERCENT,
	LOW_HEALTH_ABSOLUT
};

class targetselector_instance {


private:
	entity_instance* target = nullptr;
	//std::vector<entity*> targets;

public:
	COLOR_BASE* enity_color = nullptr;
	std::function<bool(void*) > callback_process_entity;

	virtual void clear_entity_list() = 0;
	virtual entity_instance* get_enemy_hero(TARGET_SELECTOR selector) = 0;
	virtual entity_instance* get_enemy_hero_in_aa_range(TARGET_SELECTOR selector) = 0;
	virtual entity_instance* get_enemy_creep() = 0;
	virtual bool process_entity(void* ent = nullptr) = 0;
	virtual bool isEnemyHero(entity_instance& a_target) = 0;
	virtual bool isEnemyCreep(entity_instance& a_target) = 0;
	virtual bool isEnemySuperMinion(entity_instance& target) = 0;
	virtual bool isBigJungle(entity_instance& target) = 0;
	virtual bool isSmallJungle(entity_instance& target) = 0;
	virtual bool isTower(entity_instance& target) = 0;
	virtual bool isInhib(entity_instance& target) = 0;
	virtual bool isNexus(entity_instance& target) = 0;
};



struct sKEY {

	int INVALID = 0x0;
	int FIGHT = VK_SPACE;
	int LANECLEAR = 0x54;
	int LASTHIT = 0x58;
	int POKE = 0x56;
	int ATTACK_MOVE = 0x7A; // Player AttackMove
	int MENU = VK_SHIFT; //menu

	int SHOW_RANGE = 0x43; // AA Advanced Player Stats
	int LOCK_CAMERA = 0x5A; //LOCK Camera (toggle)
	int ATTACK_CHAMPIONS_ONLY = 0x55;   //CHampions only

	int Q = 0x51;
	int W = 0x57;
	int E = 0x45;
	int R = 0x52;
	int item_1 = 0x31;
	int item_2 = 0x32;
	int item_3 = 0x33;
	int item_4 = 0x35;
	int item_5 = 0x36;
	int item_6 = 0x37;
	int trinket = 0x34;
	int SUM1 = 0x44;
	int SUM2 = 0x46;


};

struct ssummoner {
	bool use_HEAL = false;
	bool use_CLEANSE = false;
	bool use_EXHAUST = false;
	bool use_IGNITE = false;
	bool use_FLASH = false;
	bool use_BARRIER = false;
};

struct sfight {
	bool use_Q = false;
	bool use_W = false;
	bool use_E = false;
	bool use_R = false;
};

struct slaneclear {
	bool use_Q = false;
	bool use_W = false;
	bool use_E = false;
	bool use_R = false;
};

struct spoke {
	bool use_Q = false;
	bool use_W = false;
	bool use_E = false;
	bool use_R = false;
};

class settings_instance
{

public:
	 int input_delay;
	 sKEY KEY;
	 ssummoner summoner;
	 sfight fight;
	 slaneclear laneclear;
	 spoke poke;
};



class sdk_manager {

public:
	settings_instance* settings = nullptr;
	localplayer_instance* myhero = nullptr;
	orbwalker_instance* orbwalker = nullptr;
	targetselector_instance* targetselector = nullptr;
	spell_manager* spellmanager = nullptr;
	sdk_manager* sdk = nullptr;
};


extern settings_instance* settings;
extern spell_manager* spellmanager;
extern localplayer_instance* myhero;
extern orbwalker_instance* orbwalker;
extern targetselector_instance* targetselector;
extern sdk_manager* sdk;

extern "C" {

	ROOTS_API_EXPORT void link_globals(sdk_manager* a_sdk);
	ROOTS_API_EXPORT void on_load();
	ROOTS_API_EXPORT void on_update();
	ROOTS_API_EXPORT void on_before_attack(entity_instance* target, bool* process_autoattack);
	ROOTS_API_EXPORT void on_after_attack();


}


#define CHAMPION_NAME(x) myhero->set_name(x);