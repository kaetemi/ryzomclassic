// Ryzom - MMORPG Framework <http://dev.ryzom.com/projects/ryzom/>
// Copyright (C) 2010  Winch Gate Property Limited
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Affero General Public License as
// published by the Free Software Foundation, either version 3 of the
// License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Affero General Public License for more details.
//
// You should have received a copy of the GNU Affero General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.



#ifndef RY_CMS_MIRRORS_H
#define RY_CMS_MIRRORS_H

// include files
#include "nel/misc/types_nl.h"
#include "nel/misc/entity_id.h"
#include "nel/misc/sheet_id.h"
//#include "game_share/property_manager_template.h"
#include "game_share/mode_and_behaviour.h"
#include "game_share/mirror.h"
#include "game_share/mirror_prop_value.h"
#include "game_share/ryzom_mirror_properties.h"
#include "game_share/player_visual_properties.h"


class CMirrors
{
public:
	// singleton initialisation and release
	static void		init( void (*cbUpdate)(), void (*cbSync)() = NULL );
	static void		release();
	static void		processMirrorUpdates();
	/*static void		initMirror();

	static TDataSetRow			createEntity( const NLMISC::CEntityId& entityId );
	static void					declareEntity( const TDataSetRow& entityIndex );
	static void					removeEntity( const NLMISC::CEntityId& entityId );

	// TODO: check if good
	static bool					exists( const TDataSetRow& entityIndex );
	static const NLMISC::CEntityId&	getEntityId( const TDataSetRow& entityIndex );
	static uint16				getTeamId(const TDataSetRow& entityIndex);

	static CAICoord				x( const TDataSetRow& entityIndex );
	static CAICoord				y( const TDataSetRow& entityIndex );
	static sint32				z( const TDataSetRow& entityIndex );
	static float				theta( const TDataSetRow& entityIndex );
	static NLMISC::CSheetId		sheet( const TDataSetRow& entityIndex );
	static NLMISC::CSheetId		sheetServer( const TDataSetRow& entityIndex );
	static sint32				mode( const TDataSetRow& entityIndex );
	static sint32				behaviour( const TDataSetRow& entityIndex );
	static TDataSetRow			target( const TDataSetRow& entityIndex );

	static void					initSheet( const TDataSetRow& entityIndex, const NLMISC::CSheetId& sheetId );
	static void					initSheetServer( const TDataSetRow& entityIndex, const NLMISC::CSheetId& sheetId );
	static void					setPosAndTheta( const TDataSetRow& entityIndex, sint32 posX, sint32 posY, sint32 posZ, float angleRad );
	static void					setTheta( const TDataSetRow& entityIndex, float angleRad );
	static void					setMode( const TDataSetRow& entityIndex, MBEHAV::EMode mode );
	static void					setBehaviour( const TDataSetRow& entityIndex, MBEHAV::EBehaviour b );
	static void					setTarget( const TDataSetRow& entityIndex, const TDataSetRow& target);
	
	static void					setVPA( const TDataSetRow& entityIndex, const SAltLookProp &prop );

	static uint32				currentHitPoints( const TDataSetRow& entityIndex );
	static uint32				maxHitPoints( const TDataSetRow& entityIndex );
	static uint32				bestRoleLevel( const TDataSetRow& entityIndex );
	static uint8				combatState( const TDataSetRow& entityIndex );
	static uint16				actionFlags( const TDataSetRow& entityIndex );*/
	
private:
	// this is a singleton so prohibit instance construction
	CMirrors();

public:
	static CMirror			Mirror;
	static CMirroredDataSet	*DataSet;
};

class CGlobalEntityEntry
{
public:
	CGlobalEntityEntry ()
	{
		Flags = 0;
	}
	enum
	{
		Present = 1,
		Removed = 2,
	};
	uint8 Flags;
};

extern std::vector<CGlobalEntityEntry>	GlobalEntites;

#define TheDataset (*CMirrors::DataSet)


#endif // RY_CMS_MIRRORS_H
