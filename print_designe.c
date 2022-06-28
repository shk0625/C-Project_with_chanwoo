#include "include.h"
int y = -12;
typedef struct cc {
	int line;
	char designe[50][50];
}CC;

void textcolor(int color_number) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_number);
}

void CursorView(char show) {
	HANDLE hConsole;
	CONSOLE_CURSOR_INFO ConsoleCursor;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 1;

	SetConsoleCursorInfo(hConsole, &ConsoleCursor);
}

void gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void print_intro() {
	gotoxy(55, 13);
	printf("ClassCard");
	gotoxy(113, 28);
	printf("v0.6.2");
	Sleep(1000);

	system("cls");

	gotoxy(55, 11);
	textcolor(DarkRed);
	printf("<����>");

	textcolor(DarkPurple);
	gotoxy(16, 14);
	printf("�� ���α׷��� ����ġ ���� PC���Ḧ �߱��ų �� �����Ƿ� ��뿡 ������ ���Ǹ� ��Ź�帳�ϴ�.");
	gotoxy(20, 15);
	printf("���� ����� �Ѱ�� ���� ����� ���õ� ������ ���� �� �ֽ��ϴ�.(���� ������ ����)");
	gotoxy(25, 16);
	printf("���� ������ ���� �ܾ��Է½� ���⸦ �����ϸ� ������ ���� �� �ֽ��ϴ�.");
	textcolor(14);
	gotoxy(70, 28);
	printf("Made by ������, �輳�� Designed by ������, �輳��");
}

void print_class() {
	CC class = { 12, 
		"ccccc   l   aaaaaa      aaaaaa   sssssss", 
		"c       l        a           a   s      ",
		"c       l   aaaaaa      aaaaaa   sssssss",
		"c       l   a    a      a    a         s",
		"ccccc   l   aaaaaa      aaaaaa   sssssss",
		"                                        ",
		"                                        ",
		"ccccc     aaaaaaa     rrr    rrrr      d",
		"c               a     rrr  rrrr        d",
		"c         aaaaaaa     rrr rrr    ddddddd",
		"c         a     a     rrrr       d     d",
		"ccccc     aaaaaaa     rrrr       ddddddd"};
	for (int i = 0; i < 12; i++) {
		gotoxy(40, y + i);
		if (y + i >= 0) {
			printf("%s", class.designe[i]);
		}
	}
}

void print_anime() {
	gotoxy(40, 0);
	for (int i = 0; i < 20; i++) {
		print_class();
		Sleep(30);
		if (i != 19) {
			system("cls");
		}
		y++;
	}
	y = -12;
	Sleep(1000);
}