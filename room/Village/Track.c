/*
    2025-08-08
*/

#include "room.h"

#undef EXTRA_RESET
#define EXTRA_RESET no_castle_flag = 1;

TWO_EXIT("room/Village/Green","west",
	 "room/Village/Road1","east",
	 "Village track",
"A track going into the village. The track opens up to a road to the east\n" +
"and ends with a green lawn to the west.\n", 1)
