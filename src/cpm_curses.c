#include "cpm_curses.h"

void initscr(void)
{
}

void endwin(void)
{
}

/* look into redirect STDOUT */
void noecho(void)
{
}

void curs_set(char MODE)
{
}

void mvaddch(char y, char x, char ch)
{
	gotoxy(x, y);
	cputc(ch);
}
