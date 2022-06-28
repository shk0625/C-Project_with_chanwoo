#include "include.h"
int main()
{
	CursorView(FALSE);
	print_anime();
	Sleep(3000);
	gotoxy(0, 0);
	system("cls");
	textcolor(7);
	date_choose();
}
