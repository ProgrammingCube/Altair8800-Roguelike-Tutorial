#ifndef	ROGUE_H
#define	ROGUE_H

#include <stdlib.h>
#include <cpm.h>
#include <conio.h>
#include "cpm_curses.h"

#define	clrscr()	printf("%d[2J",27);

typedef struct
{
	char x;
	char y;
} Position;

typedef struct
{
	Position pos;
	char ch;
} Entity;

// externs
extern Entity* player;

#endif
