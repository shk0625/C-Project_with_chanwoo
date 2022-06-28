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
	printf("<주의>");

	textcolor(DarkPurple);
	gotoxy(16, 14);
	printf("이 프로그램은 예기치 않은 PC종료를 야기시킬 수 있으므로 사용에 각별한 주의를 부탁드립니다.");
	gotoxy(20, 15);
	printf("또한 기술적 한계로 인해 공백과 관련된 오류가 있을 수 있습니다.(이후 고쳐질 예정)");
	gotoxy(25, 16);
	printf("위의 문제로 인해 단어입력시 띄어쓰기를 포함하면 오류가 생길 수 있습니다.");
	textcolor(14);
	gotoxy(70, 28);
	printf("Made by 정찬우, 김설희 Designed by 정찬우, 김설희");
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