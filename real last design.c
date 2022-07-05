#include "include.h"
int y = -12;
typedef struct cc {
	int line;
	char designe[50][100];
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

void tool() {
	
}


void print_class() {
	CC class = { 12, 
		"ccccc   oooooo        d      eeeeee   rrr    rrrr   sssssss", 
		"c       o    o        d      e    e   rrr  rrrr     s      ",
		"c       o    o   dddddd      eeeeee   rrr rrr       sssssss",
		"c       o    o   d    d      e        rrrr                s",
		"ccccc   oooooo   dddddd      eeeeee   rrrr          sssssss",
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
		gotoxy(112, 28);
		printf("v1.0.0");
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

void print_intro() {
	print_anime();
	Sleep(1000);

	system("cls");

	gotoxy(55, 11);
	textcolor(DarkRed);
	printf("<주의>");

	textcolor(DarkPurple);
	gotoxy(16, 14);
	printf("이 프로그램은 예기치 않은 PC종료를 야기시킬 수 있으므로 사용에 각별한 주의를 부탁드립니다.");
	textcolor(14);
	gotoxy(70, 28);
	printf("Made by 정찬우, 김설희 Designed by 정찬우, 김설희");
	gotoxy(2, 28);
	printf("v1.0.0");
}
