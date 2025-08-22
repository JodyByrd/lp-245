/*
	2025-08-08
*/
#include "room.h"

#undef EXTRA_RESET
#define EXTRA_RESET no_castle_flag = 1;
FOUR_EXIT(
	"room/Village/Track","west",
	"room/Village/Yard","north",
	"room/Village/Narrow_Alley","south",
	"room/Village/Road2","east",
	"Village road",
	"A long road going east through the village. The road narrows to a\n" +
	"track to the west. There is an alley to the north and the south.\n",
	 1)
