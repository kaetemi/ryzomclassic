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



#ifndef RYAI_MESSAGES_H
#define RYAI_MESSAGES_H

#include "ai_share/aids_messages.h"
#include "ai_share/ais_messages.h"
#include "server_share/pet_interface_msg.h"

class CMessages
{
public:
	// singleton initialisation and release
	static void init();
	static void release();

	/// notify a bot despawn to a service (if requested before)
	static void notifyBotDespawn(NLNET::TServiceId serviceId, uint32 botAlias, const NLMISC::CEntityId& botId);
	static void notifyBotDeath(NLNET::TServiceId serviceId, uint32 botAlias, const NLMISC::CEntityId& botId);	
	static void notifyBotStopNpcControl(NLNET::TServiceId serviceId, uint32 botAlias, const NLMISC::CEntityId& botId);
};

#endif
