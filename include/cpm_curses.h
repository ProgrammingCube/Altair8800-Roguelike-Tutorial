#ifndef	CPM_CURSES_H
#define	CPM_CURSES_H

#include <conio.h>

#define	clear()	clrscr()

void initscr(void);
void endwin(void);

void noecho(void);
void curs_set(char MODE);
void mvaddch(char y, char x, char ch);

#endif
