#include "include.h"

int setting() {
	int reach;
	printf("��ǥ ���� ����(default = 10) : ");
	scanf("%d", &reach);
	return reach;
}

void print_point(int point, int reach, int date) {
	char ch;
	int day;
	gotoxy(55, 13);
	printf("����� ������!!!");
	Sleep(1000);
	system("cls");
	gotoxy(55, 13);
	printf("%d�� �Դϴ�!", point);
	Sleep(1000);
	system("cls");
	if (point < reach) {
		gotoxy(42, 13);
		printf("��ǥ������ �ѱ��� ���� 1���� �� PC�� �����մϴ�");
		Sleep(1000);
		//system("shutdown -s -t 1");
	}
	else {
		gotoxy(45, 13);
		printf("�����մϴ�! ��ǥ������ �����߽��ϴ�!");
		Sleep(1000);
	}
	system("cls");
	gotoxy(53, 12);
	printf("Press M to main");
	gotoxy(53, 13);
	printf("Press D to choose Day");
	gotoxy(53, 14);
	printf("Press A to choose act");
	gotoxy(53, 15);
	printf("Press Q to Quit");
	ch = _getch();
	switch (ch) {
	case 'm' : case 'M':
		system("cls");
		main();
		break;
	case 'd': case 'D':
		system("cls");
		day = date_choose();
		select_date(day);
		break;
	case 'a': case 'A':
		system("cls");
		select_date(date);
		break;
	case 'q': case 'Q':
		exit(0);
	}
}