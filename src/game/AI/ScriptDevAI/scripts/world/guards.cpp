/* This file is part of the ScriptDev2 Project. See AUTHORS file for Copyright information
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

/* ScriptData
SDName: Guards
SD%Complete: 100
SDComment: CombatAI should be organized better for future.
SDCategory: Guards
EndScriptData

*/

#include "AI/ScriptDevAI/PreCompiledHeader.h"/* ContentData
guard_bluffwatcher
guard_contested
guard_darnassus
guard_dunmorogh
guard_durotar
guard_elwynnforest
guard_ironforge
guard_mulgore
guard_orgrimmar
guard_stormwind
guard_teldrassil
guard_tirisfal
guard_undercity
EndContentData */


#include "AI/ScriptDevAI/base/guard_ai.h"

CreatureAI* GetAI_guard_bluffwatcher(Creature* pCreature)
{
    return new guardAI(pCreature);
}

enum
{
	BLUFFWATCHER_FEMALE_MODEL_1 = 8572,
	BLUFFWATCHER_FEMALE_MODEL_2 = 9392,
	BLUFFWATCHER_MALE_MODEL_1 = 2141,
	BLUFFWATCHER_MALE_MODEL_2 = 9391,
	ORG_GRUNT_FEMALE_MODEL_1 = 4260,
	ORG_GRUNT_FEMALE_MODEL_2 = 4601,
	ORG_GRUNT_MALE_MODEL_1 = 4259,
	ORG_GRUNT_MALE_MODEL_2 = 4602,
	SW_GUARD_FEMALE_MODEL_1 = 5446,
	SW_GUARD_MALE_MODEL_1 = 3167,

	COLOGNE_GOSSIP = 8287,
	PERFUME_GOSSIP = 8289,
	TB_STANDARD_GOSSIP = 1272,
	ORG_STANDARD_GOSSIP = 2593,
	SW_STANDARD_GOSSIP = 933,
	TAUREN_VALENTINE_GOSSIP = 8254,
	ORG_VALENTINE_GOSSIP = 8265,
	SW_VALENTINE_GOSSIP = 8245,
	ADORED_GOSSIP = 8296,
	NO_TOKEN_GOSSIP = 8291,
	HEARTBROKEN_GOSSIP = 8283,

	SPELL_HEARTBROKEN = 26898,
	SPELL_COLOGNE = 26681,
	SPELL_PERFUME = 26682,
	SPELL_TB_VALENTINE = 26923,
	SPELL_ORG_VALENTINE = 26663,
	SPELL_SW_VALENTINE = 27548,
	SPELL_LOVE_IS_IN_THE_AIR = 27741,
	SPELL_ADORED = 26680,

	TB_BANK_DIRECTIONS = 1292,
	TB_WINDRIDER_DIRECTIONS = 1293,
	TB_GUILDMASTER_DIRECTIONS = 1291,
	TB_INN_DIRECTIONS = 3153,
	TB_MAILBOX_DIRECTIONS = 3154,
	TB_AUCTIONHOUSE_DIRECTIONS = 3155,
	TB_WEAPONMASTER_DIRECTIONS = 4520,
	TB_STABLEMASTER_DIRECTIONS = 5977,
	TB_BATTLEMASTER_DIRECTIONS = 10220,

	TB_DRUID_DIRECTIONS = 1294,
	TB_HUNTER_DIRECTIONS = 1295,
	TB_MAGE_DIRECTIONS = 1296,
	TB_PRIEST_DIRECTIONS = 1297,
	TB_SHAMAN_DIRECTIONS = 1298,
	TB_WARRIOR_DIRECTIONS = 1299,

	TB_ALCHEMY_DIRECTIONS = 1332,
	TB_BLACKSMITHING_DIRECTIONS = 1333,
	TB_COOKING_DIRECTIONS = 1334,
	TB_ENCHANTING_DIRECTIONS = 1335,
	TB_FIRSTAID_DIRECTIONS = 1336,
	TB_FISHING_DIRECTIONS = 1337,
	TB_HERBALISM_DIRECTIONS = 1338,
	TB_LEATHERWORKING_DIRECTIONS = 1339,
	TB_MINING_DIRECTIONS = 1340,
	TB_SKINNING_DIRECTIONS = 1343,
	TB_TAILORING_DIRECTIONS = 1341,

	TB_CLASSTRAINER_MENU2 = 1300,
	TB_PROFTRAINER_MENU2 = 1301,

	TB_BANK_POI = 325,
	TB_WINDRIDER_POI = 324,
	TB_GUILDMASTER_POI = 323,
	TB_INN_POI = 322,
	TB_MAILBOX_POI = 321,
	TB_AUCTIONHOUSE_POI = 320,
	TB_WEAPONMASTER_POI = 319,
	TB_STABLEMASTER_POI = 318,
	TB_BATTLEMASTER_POI = 317,

	TB_HALLOFELDERS_POI = 316,
	TB_POOLSOFVISION_POI = 315,
	TB_HALLOFSPIRITS_POI = 314,
	TB_HUNTERSHALL_POI = 313,

	TB_ALCHEMY_POI = 312,
	TB_BLACKSMITHING_POI = 311,
	TB_COOKING_POI = 310,
	TB_ENCHANTING_POI = 309,
	TB_FIRSTAID_POI = 308,
	TB_FISHING_POI = 307,
	TB_HERBALISM_POI = 306,
	TB_LEATHERWORKING_POI = 304,
	TB_MINING_POI = 303,
	TB_SKINNING_POI = 302,
	TB_TAILORING_POI = 301,

	ORG_BANK_DIRECTIONS = 2554,
	ORG_WINDRIDER_DIRECTIONS = 2555,
	ORG_GUILDMASTER_DIRECTIONS = 2556,
	ORG_INN_DIRECTIONS = 2557,
	ORG_MAILBOX_DIRECTIONS = 2558,
	ORG_AUCTIONHOUSE_DIRECTIONS = 3075,
	ORG_WEAPONMASTER_DIRECTIONS = 4519,
	ORG_STABLEMASTER_DIRECTIONS = 5974,
	ORG_OFFICERS_DIRECTIONS = 7046,
	ORG_BATTLEMASTER_DIRECTIONS = 10221,

	ORG_HUNTER_DIRECTIONS = 2559,
	ORG_MAGE_DIRECTIONS = 2560,
	ORG_PRIEST_DIRECTIONS = 2561,
	ORG_ROGUE_DIRECTIONS = 2563,
	ORG_SHAMAN_DIRECTIONS = 2562,
	ORG_WARLOCK_DIRECTIONS = 2564,
	ORG_WARRIOR_DIRECTIONS = 2565,

	ORG_ALCHEMY_DIRECTIONS = 2497,
	ORG_BLACKSMITHING_DIRECTIONS = 2499,
	ORG_COOKING_DIRECTIONS = 2500,
	ORG_ENCHANTING_DIRECTIONS = 2501,
	ORG_ENGINEERING_DIRECTIONS = 2653,
	ORG_FIRSTAID_DIRECTIONS = 2502,
	ORG_FISHING_DIRECTIONS = 2503,
	ORG_HERBALISM_DIRECTIONS = 2504,
	ORG_LEATHERWORKING_DIRECTIONS = 2513,
	ORG_MINING_DIRECTIONS = 2515,
	ORG_SKINNING_DIRECTIONS = 2516,
	ORG_TAILORING_DIRECTIONS = 2518,

	ORG_CLASSTRAINER_MENU2 = 1949,
	ORG_PROFTRAINER_MENU2 = 1942,

	ORG_BANK_POI = 176,
	ORG_WINDRIDER_POI = 177,
	ORG_GUILDMASTER_POI = 178,
	ORG_INN_POI = 179,
	ORG_MAILBOX_POI = 180,
	ORG_AUCTIONHOUSE_POI = 181,
	ORG_WEAPONMASTER_POI = 184,
	ORG_STABLEMASTER_POI = 185,
	ORG_OFFICERS_POI	 = 186,
	ORG_BATTLEMASTER_POI = 187,

	ORG_HUNTER_POI = 420,
	ORG_MAGE_POI = 421,
	ORG_PRIEST_POI = 422,
	ORG_ROGUE_POI = 424,
	ORG_SHAMAN_POI = 423,
	ORG_WARLOCK_POI = 425,
	ORG_WARRIOR_POI = 426,

	ORG_ALCHEMY_POI = 427,
	ORG_BLACKSMITHING_POI = 428,
	ORG_COOKING_POI = 429,
	ORG_ENCHANTING_POI = 430,
	ORG_ENGINEERING_POI = 431,
	ORG_FIRSTAID_POI = 432,
	ORG_FISHING_POI = 433,
	ORG_HERBALISM_POI = 434,
	ORG_LEATHERWORKING_POI = 436,
	ORG_MINING_POI = 435,
	ORG_SKINNING_POI = 436,
	ORG_TAILORING_POI = 437,

	SW_AUCTIONHOUSE_DIRECTIONS = 3834,
	SW_BANK_DIRECTIONS = 764,
	SW_DEEPRUNTRAM_DIRECTIONS = 3813,
	SW_INN_DIRECTIONS = 3860,
	SW_GRYPHON_DIRECTIONS = 879,
	SW_GUILDMASTER_DIRECTIONS = 882,
	SW_STABLEMASTER_DIRECTIONS = 5984,
	SW_WEAPONMASTER_DIRECTIONS = 4516,
	SW_OFFICERS_DIRECTIONS = 7047,
	SW_BATTLEMASTER_DIRECTIONS = 10218,

	SW_DRUID_DIRECTIONS = 902,
	SW_HUNTER_DIRECTIONS = 905,
	SW_MAGE_DIRECTIONS = 899,
	SW_PALADIN_DIRECTIONS = 904,
	SW_PRIEST_DIRECTIONS = 903,
	SW_ROGUE_DIRECTIONS = 900,
	SW_WARLOCK_DIRECTIONS = 906,
	SW_WARRIOR_DIRECTIONS = 901,

	SW_ALCHEMY_DIRECTIONS = 919,
	SW_BLACKSMITHING_DIRECTIONS = 920,
	SW_COOKING_DIRECTIONS = 921,
	SW_ENCHANTING_DIRECTIONS = 941,
	SW_ENGINEERING_DIRECTIONS = 922,
	SW_FIRSTAID_DIRECTIONS = 923,
	SW_FISHING_DIRECTIONS = 940,
	SW_HERBALISM_DIRECTIONS = 924,
	SW_LEATHERWORKING_DIRECTIONS = 925,
	SW_MINING_DIRECTIONS = 927,
	SW_SKINNING_DIRECTIONS = 928,
	SW_TAILORING_DIRECTIONS = 929,

	SW_CLASSTRAINER_MENU2 = 401,
	SW_PROFTRAINER_MENU2 = 421,

	SW_AUCTIONHOUSE_POI = 18,
	SW_BANK_POI = 19,
	SW_DEEPRUNTRAM_POI = 21,
	SW_INN_POI = 22,
	SW_GRYPHON_POI = 23,
	SW_GUILDMASTER_POI = 24,
	SW_STABLEMASTER_POI = 26,
	SW_WEAPONMASTER_POI = 27,
	SW_OFFICERS_POI = 28,
	SW_BATTLEMASTER_POI = 29,

	SW_DRUID_POI = 32,
	SW_HUNTER_POI = 33,
	SW_MAGE_POI = 34,
	SW_PALADIN_POI = 35,
	SW_PRIEST_POI = 35,
	SW_ROGUE_POI = 36,
	SW_WARLOCK_POI = 38,
	SW_WARRIOR_POI = 39,

	SW_ALCHEMY_POI = 40,
	SW_BLACKSMITHING_POI = 41,
	SW_COOKING_POI = 42,
	SW_ENCHANTING_POI = 43,
	SW_ENGINEERING_POI = 44,
	SW_FIRSTAID_POI = 45,
	SW_FISHING_POI = 46,
	SW_HERBALISM_POI = 40,
	SW_LEATHERWORKING_POI = 47,
	SW_MINING_POI = 48,
	SW_SKINNING_POI = 47,
	SW_TAILORING_POI = 49,

	LOVE_TOKEN_ITEM_ID = 21815


};

#define GOSSIP_TEXT_LOVE_TOKEN      "Here, I'd like to give you this token of my love."


bool GossipHello_guard_bluffwatcher(Player* pPlayer, Creature* pCreature)
{
	pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_BANK, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 1);
	pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_WINDRIDER, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 2);
	pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_GUILDMASTER, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 3);
	pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_INN, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 4);
	pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_MAILBOX, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 5);
	pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_AUCTIONHOUSE, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 6);
	pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_WEAPONMASTER, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 7);
	pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_STABLEMASTER, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 8);
	pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_BATTLEMASTER, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 9);
	pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_CLASSTRAINER, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 10);
	pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_PROFTRAINER, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 11);

	if (IsHolidayActive(HOLIDAY_LOVE_IS_IN_THE_AIR))
	{
		if (pCreature->HasAura(SPELL_LOVE_IS_IN_THE_AIR, EFFECT_INDEX_0))
		{
			if (pPlayer->GetItemCount(LOVE_TOKEN_ITEM_ID, false, nullptr)) // Requires tokens to be in bags
			{
				if (!pPlayer->HasAura(SPELL_COLOGNE, EFFECT_INDEX_0))
				{
					if ((pCreature->GetDisplayId() == BLUFFWATCHER_FEMALE_MODEL_1) || (pCreature->GetDisplayId() == BLUFFWATCHER_FEMALE_MODEL_2)) // Female Bluffwatcher Check			
					{
						pPlayer->SEND_GOSSIP_MENU(COLOGNE_GOSSIP, pCreature->GetObjectGuid());
					}
					else if (pPlayer->HasAura(SPELL_PERFUME, EFFECT_INDEX_0))
					{
						if (pPlayer->HasAura(SPELL_HEARTBROKEN, EFFECT_INDEX_0))
						{
							pPlayer->SEND_GOSSIP_MENU(HEARTBROKEN_GOSSIP, pCreature->GetObjectGuid());
						}
						else
						{
							pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_LOVE_TOKEN, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 29);
							if (pPlayer->HasAura(SPELL_ADORED, EFFECT_INDEX_0))
							{
								pPlayer->SEND_GOSSIP_MENU(ADORED_GOSSIP, pCreature->GetObjectGuid());
							}
							else
								pPlayer->SEND_GOSSIP_MENU(TAUREN_VALENTINE_GOSSIP, pCreature->GetObjectGuid());
						}
					}
					else
						pPlayer->SEND_GOSSIP_MENU(PERFUME_GOSSIP, pCreature->GetObjectGuid()); // No Perfume or Cologne - Male Bluffwatcher
				}
				else if (!pPlayer->HasAura(SPELL_PERFUME, EFFECT_INDEX_0))
				{
					if ((pCreature->GetDisplayId() == BLUFFWATCHER_MALE_MODEL_1) || (pCreature->GetDisplayId() == BLUFFWATCHER_MALE_MODEL_2)) // Male Buffwatcher Check
					{
						pPlayer->SEND_GOSSIP_MENU(PERFUME_GOSSIP, pCreature->GetObjectGuid());
					}
					else if (pPlayer->HasAura(SPELL_COLOGNE, EFFECT_INDEX_0))
					{
						if (pPlayer->HasAura(SPELL_HEARTBROKEN, EFFECT_INDEX_0))
						{
							pPlayer->SEND_GOSSIP_MENU(HEARTBROKEN_GOSSIP, pCreature->GetObjectGuid());
						}
						else
						{
							if (pPlayer->HasAura(SPELL_ADORED, EFFECT_INDEX_0))
							{
								pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_LOVE_TOKEN, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 29);
								pPlayer->SEND_GOSSIP_MENU(ADORED_GOSSIP, pCreature->GetObjectGuid());
							}
							else
							{
								pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_LOVE_TOKEN, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 29);
								pPlayer->SEND_GOSSIP_MENU(TAUREN_VALENTINE_GOSSIP, pCreature->GetObjectGuid());
							}
						}
					}
					else
					{
						pPlayer->SEND_GOSSIP_MENU(COLOGNE_GOSSIP, pCreature->GetObjectGuid()); // No Perfume or Cologne - Female Bluffwatcher
					}
				}
			}
			else // No Love Tokens
			{
				pPlayer->SEND_GOSSIP_MENU(NO_TOKEN_GOSSIP, pCreature->GetObjectGuid());
			}
		}
		else // No Heart Above Head - Valentine Gossip without token option
		{
			pPlayer->SEND_GOSSIP_MENU(TAUREN_VALENTINE_GOSSIP, pCreature->GetObjectGuid());
		}
	}
	else
	{
		pPlayer->SEND_GOSSIP_MENU(TB_STANDARD_GOSSIP, pCreature->GetObjectGuid());
	}
	return true;
}

bool GossipSelect_guard_bluffwatcher(Player* pPlayer, Creature* pCreature, uint32 /*uiSender*/, uint32 uiAction)
{
	switch (uiAction)
	{
	case GOSSIP_ACTION_INFO_DEF + 1:
		pPlayer->SEND_GOSSIP_MENU(TB_BANK_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(TB_BANK_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 2:
		pPlayer->SEND_GOSSIP_MENU(TB_WINDRIDER_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(TB_WINDRIDER_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 3:
		pPlayer->SEND_GOSSIP_MENU(TB_GUILDMASTER_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(TB_GUILDMASTER_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 4:
		pPlayer->SEND_GOSSIP_MENU(TB_INN_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(TB_INN_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 5:
		pPlayer->SEND_GOSSIP_MENU(TB_MAILBOX_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(TB_MAILBOX_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 6:
		pPlayer->SEND_GOSSIP_MENU(TB_AUCTIONHOUSE_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(TB_AUCTIONHOUSE_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 7:
		pPlayer->SEND_GOSSIP_MENU(TB_WEAPONMASTER_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(TB_WEAPONMASTER_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 8:
		pPlayer->SEND_GOSSIP_MENU(TB_STABLEMASTER_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(TB_STABLEMASTER_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 9:
		pPlayer->SEND_GOSSIP_MENU(TB_BATTLEMASTER_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(TB_BATTLEMASTER_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 10:
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_DRUID, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 12);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_HUNTER, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 13);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_MAGE, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 14);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_PRIEST, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 15);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_SHAMAN, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 16);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_WARRIOR, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 17);
		pPlayer->SEND_GOSSIP_MENU(TB_CLASSTRAINER_MENU2, pCreature->GetObjectGuid());
		break;
	case GOSSIP_ACTION_INFO_DEF + 11:
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_ALCHEMY, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 18);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_BLACKSMITHING, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 19);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_COOKING, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 20);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_ENCHANTING, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 21);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_FIRSTAID, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 22);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_FISHING, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 23);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_HERBALISM, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 24);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_LEATHERWORKING, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 25);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_MINING, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 26);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_SKINNING, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 27);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_TAILORING, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 28);
		pPlayer->SEND_GOSSIP_MENU(TB_PROFTRAINER_MENU2, pCreature->GetObjectGuid());
		break;
	case GOSSIP_ACTION_INFO_DEF + 12:
		pPlayer->SEND_GOSSIP_MENU(TB_DRUID_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(TB_HALLOFELDERS_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 13:
		pPlayer->SEND_GOSSIP_MENU(TB_HUNTER_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(TB_HUNTERSHALL_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 14:
		pPlayer->SEND_GOSSIP_MENU(TB_MAGE_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(TB_POOLSOFVISION_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 15:
		pPlayer->SEND_GOSSIP_MENU(TB_PRIEST_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(TB_POOLSOFVISION_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 16:
		pPlayer->SEND_GOSSIP_MENU(TB_SHAMAN_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(TB_HALLOFSPIRITS_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 17:
		pPlayer->SEND_GOSSIP_MENU(TB_WARRIOR_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(TB_HUNTERSHALL_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 18:
		pPlayer->SEND_GOSSIP_MENU(TB_ALCHEMY_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(TB_ALCHEMY_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 19:
		pPlayer->SEND_GOSSIP_MENU(TB_BLACKSMITHING_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(TB_BLACKSMITHING_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 20:
		pPlayer->SEND_GOSSIP_MENU(TB_COOKING_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(TB_COOKING_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 21:
		pPlayer->SEND_GOSSIP_MENU(TB_ENCHANTING_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(TB_ENCHANTING_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 22:
		pPlayer->SEND_GOSSIP_MENU(TB_FIRSTAID_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(TB_FIRSTAID_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 23:
		pPlayer->SEND_GOSSIP_MENU(TB_FISHING_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(TB_FISHING_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 24:
		pPlayer->SEND_GOSSIP_MENU(TB_HERBALISM_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(TB_HERBALISM_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 25:
		pPlayer->SEND_GOSSIP_MENU(TB_LEATHERWORKING_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(TB_LEATHERWORKING_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 26:
		pPlayer->SEND_GOSSIP_MENU(TB_MINING_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(TB_MINING_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 27:
		pPlayer->SEND_GOSSIP_MENU(TB_SKINNING_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(TB_SKINNING_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 28:
		pPlayer->SEND_GOSSIP_MENU(TB_TAILORING_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(TB_TAILORING_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 29:
		pPlayer->CastSpell(pPlayer, SPELL_TB_VALENTINE, TRIGGERED_OLD_TRIGGERED);
		pCreature->RemoveAurasDueToSpell(SPELL_LOVE_IS_IN_THE_AIR);
	}

	return true;
}
CreatureAI* GetAI_guard_contested(Creature* pCreature)
{
    return new guardAI(pCreature);
}

CreatureAI* GetAI_guard_darnassus(Creature* pCreature)
{
    return new guardAI(pCreature);
}

CreatureAI* GetAI_guard_dunmorogh(Creature* pCreature)
{
    return new guardAI(pCreature);
}

CreatureAI* GetAI_guard_durotar(Creature* pCreature)
{
    return new guardAI(pCreature);
}

CreatureAI* GetAI_guard_elwynnforest(Creature* pCreature)
{
    return new guardAI(pCreature);
}

CreatureAI* GetAI_guard_ironforge(Creature* pCreature)
{
    return new guardAI(pCreature);
}

CreatureAI* GetAI_guard_mulgore(Creature* pCreature)
{
    return new guardAI(pCreature);
}

CreatureAI* GetAI_guard_orgrimmar(Creature* pCreature)
{
    return new guardAI_orgrimmar(pCreature);
}

bool GossipHello_guard_orgrimmar(Player* pPlayer, Creature* pCreature)
{
	pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_BANK, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 1);
	pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_WINDRIDER, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 2);
	pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_GUILDMASTER, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 3);
	pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_INN, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 4);
	pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_MAILBOX, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 5);
	pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_AUCTIONHOUSE, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 6);
	pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_WEAPONMASTER, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 7);
	pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_STABLEMASTER, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 8);
	pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_OFFICERS, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 9);
	pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_BATTLEMASTER, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 10);
	pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_CLASSTRAINER, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 11);
	pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_PROFTRAINER, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 12);

	if (IsHolidayActive(HOLIDAY_LOVE_IS_IN_THE_AIR))
	{
		if (pCreature->HasAura(SPELL_LOVE_IS_IN_THE_AIR, EFFECT_INDEX_0))
		{
			if (pPlayer->GetItemCount(LOVE_TOKEN_ITEM_ID, false, nullptr)) // Requires tokens to be in bags
			{
				if (!pPlayer->HasAura(SPELL_COLOGNE, EFFECT_INDEX_0))
				{
					if ((pCreature->GetDisplayId() == ORG_GRUNT_FEMALE_MODEL_1) || (pCreature->GetDisplayId() == ORG_GRUNT_FEMALE_MODEL_2)) // Female Org Grunt Check			
					{
						pPlayer->SEND_GOSSIP_MENU(COLOGNE_GOSSIP, pCreature->GetObjectGuid());
					}
					else if (pPlayer->HasAura(SPELL_PERFUME, EFFECT_INDEX_0))
					{
						if (pPlayer->HasAura(SPELL_HEARTBROKEN, EFFECT_INDEX_0))
						{
							pPlayer->SEND_GOSSIP_MENU(HEARTBROKEN_GOSSIP, pCreature->GetObjectGuid());
						}
						else
						{
							pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_LOVE_TOKEN, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 30);
							if (pPlayer->HasAura(SPELL_ADORED, EFFECT_INDEX_0))
							{
								pPlayer->SEND_GOSSIP_MENU(ADORED_GOSSIP, pCreature->GetObjectGuid());
							}
							else
								pPlayer->SEND_GOSSIP_MENU(ORG_VALENTINE_GOSSIP, pCreature->GetObjectGuid());
						}
					}
					else
						pPlayer->SEND_GOSSIP_MENU(PERFUME_GOSSIP, pCreature->GetObjectGuid()); // No Perfume or Cologne - Male Org Grunt
				}
				else if (!pPlayer->HasAura(SPELL_PERFUME, EFFECT_INDEX_0))
				{
					if ((pCreature->GetDisplayId() == ORG_GRUNT_MALE_MODEL_1) || (pCreature->GetDisplayId() == ORG_GRUNT_MALE_MODEL_2)) // Male Org Grunt Check
					{
						pPlayer->SEND_GOSSIP_MENU(PERFUME_GOSSIP, pCreature->GetObjectGuid());
					}
					else if (pPlayer->HasAura(SPELL_COLOGNE, EFFECT_INDEX_0))
					{
						if (pPlayer->HasAura(SPELL_HEARTBROKEN, EFFECT_INDEX_0))
						{
							pPlayer->SEND_GOSSIP_MENU(HEARTBROKEN_GOSSIP, pCreature->GetObjectGuid());
						}
						else
						{
							if (pPlayer->HasAura(SPELL_ADORED, EFFECT_INDEX_0))
							{
								pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_LOVE_TOKEN, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 30);
								pPlayer->SEND_GOSSIP_MENU(ADORED_GOSSIP, pCreature->GetObjectGuid());
							}
							else
							{
								pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_LOVE_TOKEN, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 30);
								pPlayer->SEND_GOSSIP_MENU(ORG_VALENTINE_GOSSIP, pCreature->GetObjectGuid());
							}
						}
					}
					else
					{
						pPlayer->SEND_GOSSIP_MENU(COLOGNE_GOSSIP, pCreature->GetObjectGuid()); // No Perfume or Cologne - Female Org Grunt
					}
				}
			}
			else // No Love Tokens
			{
				pPlayer->SEND_GOSSIP_MENU(NO_TOKEN_GOSSIP, pCreature->GetObjectGuid());
			}
		}
		else // No Heart Above Head - Valentine Gossip without token option
		{
			pPlayer->SEND_GOSSIP_MENU(ORG_VALENTINE_GOSSIP, pCreature->GetObjectGuid());
		}
	}
	else
	{
		pPlayer->SEND_GOSSIP_MENU(ORG_STANDARD_GOSSIP, pCreature->GetObjectGuid());
	}
	return true;
}

bool GossipSelect_guard_orgrimmar(Player* pPlayer, Creature* pCreature, uint32 /*uiSender*/, uint32 uiAction)
{
	switch (uiAction)
	{
	case GOSSIP_ACTION_INFO_DEF + 1:
		pPlayer->SEND_GOSSIP_MENU(ORG_BANK_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(ORG_BANK_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 2:
		pPlayer->SEND_GOSSIP_MENU(ORG_WINDRIDER_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(ORG_WINDRIDER_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 3:
		pPlayer->SEND_GOSSIP_MENU(ORG_GUILDMASTER_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(ORG_GUILDMASTER_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 4:
		pPlayer->SEND_GOSSIP_MENU(ORG_INN_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(ORG_INN_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 5:
		pPlayer->SEND_GOSSIP_MENU(ORG_MAILBOX_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(ORG_MAILBOX_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 6:
		pPlayer->SEND_GOSSIP_MENU(ORG_AUCTIONHOUSE_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(ORG_AUCTIONHOUSE_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 7:
		pPlayer->SEND_GOSSIP_MENU(ORG_WEAPONMASTER_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(ORG_WEAPONMASTER_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 8:
		pPlayer->SEND_GOSSIP_MENU(ORG_STABLEMASTER_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(ORG_STABLEMASTER_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 9:
		pPlayer->SEND_GOSSIP_MENU(ORG_OFFICERS_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(ORG_OFFICERS_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 10:
		pPlayer->SEND_GOSSIP_MENU(ORG_BATTLEMASTER_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(ORG_BATTLEMASTER_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 11:
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_HUNTER, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 13);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_MAGE, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 14);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_PRIEST, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 15);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_SHAMAN, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 16);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_WARLOCK, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 17);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_WARRIOR, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 18);
		pPlayer->SEND_GOSSIP_MENU(ORG_CLASSTRAINER_MENU2, pCreature->GetObjectGuid());
		break;
	case GOSSIP_ACTION_INFO_DEF + 12:
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_ALCHEMY, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 19);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_BLACKSMITHING, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 20);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_COOKING, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 21);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_ENCHANTING, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 22);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_FIRSTAID, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 23);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_FISHING, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 24);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_HERBALISM, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 25);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_LEATHERWORKING, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 26);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_MINING, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 27);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_SKINNING, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 28);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_TAILORING, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 29);
		pPlayer->SEND_GOSSIP_MENU(ORG_PROFTRAINER_MENU2, pCreature->GetObjectGuid());
		break;
	case GOSSIP_ACTION_INFO_DEF + 13:
		pPlayer->SEND_GOSSIP_MENU(ORG_HUNTER_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(ORG_HUNTER_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 14:
		pPlayer->SEND_GOSSIP_MENU(ORG_MAGE_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(ORG_MAGE_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 15:
		pPlayer->SEND_GOSSIP_MENU(ORG_PRIEST_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(ORG_PRIEST_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 16:
		pPlayer->SEND_GOSSIP_MENU(ORG_SHAMAN_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(ORG_SHAMAN_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 17:
		pPlayer->SEND_GOSSIP_MENU(ORG_WARLOCK_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(ORG_WARLOCK_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 18:
		pPlayer->SEND_GOSSIP_MENU(ORG_WARRIOR_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(ORG_WARRIOR_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 19:
		pPlayer->SEND_GOSSIP_MENU(ORG_ALCHEMY_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(ORG_ALCHEMY_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 20:
		pPlayer->SEND_GOSSIP_MENU(ORG_BLACKSMITHING_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(ORG_BLACKSMITHING_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 21:
		pPlayer->SEND_GOSSIP_MENU(ORG_COOKING_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(ORG_COOKING_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 22:
		pPlayer->SEND_GOSSIP_MENU(ORG_ENCHANTING_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(ORG_ENCHANTING_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 23:
		pPlayer->SEND_GOSSIP_MENU(ORG_FIRSTAID_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(ORG_FIRSTAID_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 24:
		pPlayer->SEND_GOSSIP_MENU(ORG_FISHING_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(ORG_FISHING_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 25:
		pPlayer->SEND_GOSSIP_MENU(ORG_HERBALISM_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(ORG_HERBALISM_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 26:
		pPlayer->SEND_GOSSIP_MENU(ORG_LEATHERWORKING_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(ORG_LEATHERWORKING_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 27:
		pPlayer->SEND_GOSSIP_MENU(ORG_MINING_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(ORG_MINING_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 28:
		pPlayer->SEND_GOSSIP_MENU(ORG_SKINNING_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(ORG_SKINNING_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 29:
		pPlayer->SEND_GOSSIP_MENU(ORG_TAILORING_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(ORG_TAILORING_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 30:
		pPlayer->CastSpell(pPlayer, SPELL_ORG_VALENTINE, TRIGGERED_OLD_TRIGGERED);
		pCreature->RemoveAurasDueToSpell(SPELL_LOVE_IS_IN_THE_AIR);
	}

	return true;
}

CreatureAI* GetAI_guard_stormwind(Creature* pCreature)
{
    return new guardAI_stormwind(pCreature);
}

bool GossipHello_guard_stormwind(Player* pPlayer, Creature* pCreature)
{
	pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_AUCTIONHOUSE, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 1);
	pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_STORMWIND_BANK, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 2);
	pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_DEEPRUNTRAM, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 3);
	pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_INN, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 4);
	pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_GRYPHON, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 5);
	pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_GUILDMASTER, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 6);
	pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_STABLEMASTER, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 7);
	pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_WEAPONMASTER, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 8);
	pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_OFFICERS, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 9);
	pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_BATTLEMASTER, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 10);
	pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_CLASSTRAINER, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 11);
	pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_PROFTRAINER, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 12);

	if (IsHolidayActive(HOLIDAY_LOVE_IS_IN_THE_AIR))
	{
		if (pCreature->HasAura(SPELL_LOVE_IS_IN_THE_AIR, EFFECT_INDEX_0))
		{
			if (pPlayer->GetItemCount(LOVE_TOKEN_ITEM_ID, false, nullptr)) // Requires tokens to be in bags
			{
				if (!pPlayer->HasAura(SPELL_COLOGNE, EFFECT_INDEX_0))
				{
					if (pCreature->GetDisplayId() == SW_GUARD_FEMALE_MODEL_1) // Female SW Guard Check			
					{
						pPlayer->SEND_GOSSIP_MENU(COLOGNE_GOSSIP, pCreature->GetObjectGuid());
					}
					else if (pPlayer->HasAura(SPELL_PERFUME, EFFECT_INDEX_0))
					{
						if (pPlayer->HasAura(SPELL_HEARTBROKEN, EFFECT_INDEX_0))
						{
							pPlayer->SEND_GOSSIP_MENU(HEARTBROKEN_GOSSIP, pCreature->GetObjectGuid());
						}
						else
						{
							pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_LOVE_TOKEN, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 32);
							if (pPlayer->HasAura(SPELL_ADORED, EFFECT_INDEX_0))
							{
								pPlayer->SEND_GOSSIP_MENU(ADORED_GOSSIP, pCreature->GetObjectGuid());
							}
							else
								pPlayer->SEND_GOSSIP_MENU(SW_VALENTINE_GOSSIP, pCreature->GetObjectGuid());
						}
					}
					else
						pPlayer->SEND_GOSSIP_MENU(PERFUME_GOSSIP, pCreature->GetObjectGuid()); // No Perfume or Cologne - Male Org Grunt
				}
				else if (!pPlayer->HasAura(SPELL_PERFUME, EFFECT_INDEX_0))
				{
					if (pCreature->GetDisplayId() == SW_GUARD_MALE_MODEL_1) // Male SW Guard Check
					{
						pPlayer->SEND_GOSSIP_MENU(PERFUME_GOSSIP, pCreature->GetObjectGuid());
					}
					else if (pPlayer->HasAura(SPELL_COLOGNE, EFFECT_INDEX_0))
					{
						if (pPlayer->HasAura(SPELL_HEARTBROKEN, EFFECT_INDEX_0))
						{
							pPlayer->SEND_GOSSIP_MENU(HEARTBROKEN_GOSSIP, pCreature->GetObjectGuid());
						}
						else
						{
							if (pPlayer->HasAura(SPELL_ADORED, EFFECT_INDEX_0))
							{
								pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_LOVE_TOKEN, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 32);
								pPlayer->SEND_GOSSIP_MENU(ADORED_GOSSIP, pCreature->GetObjectGuid());
							}
							else
							{
								pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_LOVE_TOKEN, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 32);
								pPlayer->SEND_GOSSIP_MENU(SW_VALENTINE_GOSSIP, pCreature->GetObjectGuid());
							}
						}
					}
					else
					{
						pPlayer->SEND_GOSSIP_MENU(COLOGNE_GOSSIP, pCreature->GetObjectGuid()); // No Perfume or Cologne - Female Org Grunt
					}
				}
			}
			else // No Love Tokens
			{
				pPlayer->SEND_GOSSIP_MENU(NO_TOKEN_GOSSIP, pCreature->GetObjectGuid());
			}
		}
		else // No Heart Above Head - Valentine Gossip without token option
		{
			pPlayer->SEND_GOSSIP_MENU(SW_VALENTINE_GOSSIP, pCreature->GetObjectGuid());
		}
	}
	else
	{
		pPlayer->SEND_GOSSIP_MENU(SW_STANDARD_GOSSIP, pCreature->GetObjectGuid());
	}
	return true;
}

bool GossipSelect_guard_stormwind(Player* pPlayer, Creature* pCreature, uint32 /*uiSender*/, uint32 uiAction)
{
	switch (uiAction)
	{
	case GOSSIP_ACTION_INFO_DEF + 1:
		pPlayer->SEND_GOSSIP_MENU(SW_AUCTIONHOUSE_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(SW_AUCTIONHOUSE_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 2:
		pPlayer->SEND_GOSSIP_MENU(SW_BANK_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(SW_BANK_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 3:
		pPlayer->SEND_GOSSIP_MENU(SW_DEEPRUNTRAM_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(SW_DEEPRUNTRAM_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 4:
		pPlayer->SEND_GOSSIP_MENU(SW_INN_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(SW_INN_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 5:
		pPlayer->SEND_GOSSIP_MENU(SW_GRYPHON_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(SW_GRYPHON_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 6:
		pPlayer->SEND_GOSSIP_MENU(SW_GUILDMASTER_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(SW_GUILDMASTER_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 7:
		pPlayer->SEND_GOSSIP_MENU(SW_STABLEMASTER_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(SW_STABLEMASTER_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 8:
		pPlayer->SEND_GOSSIP_MENU(SW_WEAPONMASTER_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(SW_WEAPONMASTER_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 9:
		pPlayer->SEND_GOSSIP_MENU(SW_OFFICERS_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(SW_OFFICERS_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 10:
		pPlayer->SEND_GOSSIP_MENU(SW_BATTLEMASTER_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(SW_BATTLEMASTER_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 11:
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_DRUID, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 13);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_HUNTER, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 14);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_MAGE, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 15);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_PALADIN, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 16);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_PRIEST, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 17);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_ROGUE, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 18);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_WARLOCK, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 19);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_WARRIOR, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 20);
		pPlayer->SEND_GOSSIP_MENU(SW_CLASSTRAINER_MENU2, pCreature->GetObjectGuid());
		break;
	case GOSSIP_ACTION_INFO_DEF + 12:
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_ALCHEMY, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 21);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_BLACKSMITHING, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 22);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_COOKING, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 23);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_ENCHANTING, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 24);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_FIRSTAID, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 25);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_FISHING, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 26);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_HERBALISM, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 27);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_LEATHERWORKING, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 28);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_MINING, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 29);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_SKINNING, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 30);
		pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TEXT_TAILORING, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 31);
		pPlayer->SEND_GOSSIP_MENU(SW_PROFTRAINER_MENU2, pCreature->GetObjectGuid());
		break;
	case GOSSIP_ACTION_INFO_DEF + 13:
		pPlayer->SEND_GOSSIP_MENU(SW_DRUID_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(SW_DRUID_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 14:
		pPlayer->SEND_GOSSIP_MENU(SW_HUNTER_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(SW_HUNTER_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 15:
		pPlayer->SEND_GOSSIP_MENU(SW_MAGE_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(SW_MAGE_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 16:
		pPlayer->SEND_GOSSIP_MENU(SW_PALADIN_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(SW_PALADIN_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 17:
		pPlayer->SEND_GOSSIP_MENU(SW_PRIEST_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(SW_PRIEST_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 18:
		pPlayer->SEND_GOSSIP_MENU(SW_ROGUE_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(SW_ROGUE_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 19:
		pPlayer->SEND_GOSSIP_MENU(SW_WARLOCK_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(SW_WARLOCK_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 20:
		pPlayer->SEND_GOSSIP_MENU(SW_WARRIOR_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(SW_WARRIOR_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 21:
		pPlayer->SEND_GOSSIP_MENU(SW_ALCHEMY_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(SW_ALCHEMY_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 22:
		pPlayer->SEND_GOSSIP_MENU(SW_BLACKSMITHING_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(SW_BLACKSMITHING_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 23:
		pPlayer->SEND_GOSSIP_MENU(SW_COOKING_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(SW_COOKING_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 24:
		pPlayer->SEND_GOSSIP_MENU(SW_ENCHANTING_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(SW_ENCHANTING_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 25:
		pPlayer->SEND_GOSSIP_MENU(SW_FIRSTAID_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(SW_FIRSTAID_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 26:
		pPlayer->SEND_GOSSIP_MENU(SW_FISHING_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(SW_FISHING_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 27:
		pPlayer->SEND_GOSSIP_MENU(SW_HERBALISM_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(SW_HERBALISM_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 28:
		pPlayer->SEND_GOSSIP_MENU(SW_LEATHERWORKING_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(SW_LEATHERWORKING_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 29:
		pPlayer->SEND_GOSSIP_MENU(SW_MINING_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(SW_MINING_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 30:
		pPlayer->SEND_GOSSIP_MENU(SW_SKINNING_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(SW_SKINNING_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 31:
		pPlayer->SEND_GOSSIP_MENU(SW_TAILORING_DIRECTIONS, pCreature->GetObjectGuid());
		pPlayer->PlayerTalkClass->SendPointOfInterest(SW_TAILORING_POI);
		break;
	case GOSSIP_ACTION_INFO_DEF + 32:
		pPlayer->CastSpell(pPlayer, SPELL_SW_VALENTINE, TRIGGERED_OLD_TRIGGERED);
		pCreature->RemoveAurasDueToSpell(SPELL_LOVE_IS_IN_THE_AIR);
	}

	return true;
}

CreatureAI* GetAI_guard_teldrassil(Creature* pCreature)
{
    return new guardAI(pCreature);
}

CreatureAI* GetAI_guard_tirisfal(Creature* pCreature)
{
    return new guardAI(pCreature);
}

CreatureAI* GetAI_guard_undercity(Creature* pCreature)
{
    return new guardAI(pCreature);
}

void AddSC_guards()
{
    Script* pNewScript;

    pNewScript = new Script;
    pNewScript->Name = "guard_bluffwatcher";
	pNewScript->pGossipHello = &GossipHello_guard_bluffwatcher;
	pNewScript->pGossipSelect = &GossipSelect_guard_bluffwatcher;
    pNewScript->GetAI = &GetAI_guard_bluffwatcher;
    pNewScript->RegisterSelf();

    pNewScript = new Script;
    pNewScript->Name = "guard_contested";
    pNewScript->GetAI = &GetAI_guard_contested;
    pNewScript->RegisterSelf();

    pNewScript = new Script;
    pNewScript->Name = "guard_darnassus";
    pNewScript->GetAI = &GetAI_guard_darnassus;
    pNewScript->RegisterSelf();

    pNewScript = new Script;
    pNewScript->Name = "guard_dunmorogh";
    pNewScript->GetAI = &GetAI_guard_dunmorogh;
    pNewScript->RegisterSelf();

    pNewScript = new Script;
    pNewScript->Name = "guard_durotar";
    pNewScript->GetAI = &GetAI_guard_durotar;
    pNewScript->RegisterSelf();

    pNewScript = new Script;
    pNewScript->Name = "guard_elwynnforest";
    pNewScript->GetAI = &GetAI_guard_elwynnforest;
    pNewScript->RegisterSelf();

    pNewScript = new Script;
    pNewScript->Name = "guard_ironforge";
    pNewScript->GetAI = &GetAI_guard_ironforge;
    pNewScript->RegisterSelf();

    pNewScript = new Script;
    pNewScript->Name = "guard_mulgore";
    pNewScript->GetAI = &GetAI_guard_mulgore;
    pNewScript->RegisterSelf();

    pNewScript = new Script;
    pNewScript->Name = "guard_orgrimmar";
	pNewScript->pGossipHello = &GossipHello_guard_orgrimmar;
	pNewScript->pGossipSelect = &GossipSelect_guard_orgrimmar;
    pNewScript->GetAI = &GetAI_guard_orgrimmar;
    pNewScript->RegisterSelf();

    pNewScript = new Script;
    pNewScript->Name = "guard_stormwind";
	pNewScript->pGossipHello = &GossipHello_guard_stormwind;
	pNewScript->pGossipSelect = &GossipSelect_guard_stormwind;
    pNewScript->GetAI = &GetAI_guard_stormwind;
    pNewScript->RegisterSelf();

    pNewScript = new Script;
    pNewScript->Name = "guard_teldrassil";
    pNewScript->GetAI = &GetAI_guard_teldrassil;
    pNewScript->RegisterSelf();

    pNewScript = new Script;
    pNewScript->Name = "guard_tirisfal";
    pNewScript->GetAI = &GetAI_guard_tirisfal;
    pNewScript->RegisterSelf();

    pNewScript = new Script;
    pNewScript->Name = "guard_undercity";
    pNewScript->GetAI = &GetAI_guard_undercity;
    pNewScript->RegisterSelf();
}
