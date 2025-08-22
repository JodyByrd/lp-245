/*
	2025-08-08
*/
#include "std.h"

#undef EXTRA_LONG
#define EXTRA_LONG\
    if (str == "well") {\
	write("You look down the well, but see only darkness.\n");\
	write("There are some iron handles on the inside.\n");\
	return;\
    }

#undef EXTRA_INIT
#define EXTRA_INIT add_action("go_down", "down");

THREE_EXIT("room/Village/Road1","north",
	 "room/Bank/bank", "east",
	 "room/PostOffice/PostOffice", "south",
	 "Narrow alley",
	 "A narrow alley. There is a well in the middle.\n", 1)

int go_down() {
    this_player()->move_player("down#room/Well/Well");
    return 1;
}

int id(string str) {
    if (str == "well")
	return 1;

    return 0;
}
