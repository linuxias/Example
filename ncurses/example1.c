#include <ncurses.h>

int main()
{
	int ch;

	initscr();
	raw();
	keypad(stdscr, TRUE);
	noecho();


	mvprintw(3,10,"Type any character to see it in bold\n");
	printw("Type any character to see it in bold\n");
	ch = getch();

	if (ch == KEY_F(1)) {
		printw("F1 key pressed");
	} else {
		printw("Te pressed key is ");
		attron(A_BOLD);
		printw("%c", ch);
		attroff(A_BOLD);
	}
	refresh();
	getch();
	endwin();

	return 0;
}
