#include "stroke.h"

struct keycode_s keytable[] = {
        {0x0, "Empty", -1},
        {0x1, "ESC", 1},
        {'1', "1", 0},
        {'2', "2", 0},
        {'3', "3", 0},
        {'4', "4", 0},
        {'5', "5", 0},
        {'6', "6", 0},
        {'7', "7", 0},
        {'8', "8", 0},
        {'9', "9", 0},
        {'0', "0", 0},
	{'-', "MINUS", 0},
	{'+', "PLUS", 0},
	{0xE, "BACKSPACE", 1},
	{0xF, "TAB", 1},
	{'q', "q", 0}
};
