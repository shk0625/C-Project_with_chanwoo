#include "include.h"

void date_choose() {
	system("cls");
	int day;
	char quit;
	puts("Day 1");
	puts("Day 2");
	puts("Day 3");
	puts("Day 4");
	puts("Day 5");
	puts("Day 6");
	puts("Day 7");
	puts("Day 8");
	puts("Day 9");
	puts("Day 10");
	puts("Day 11");
	puts("Day 12");
	puts("Day 13");
	puts("Day 14");
	puts("Day 15");
	puts("Day 16");
	puts("Press 0 to quit");
	puts("Press 100 to Setting");
	gotoxy(30, 2);
	printf("忙式式式式式式式式式式式式式式式式式式式式忖");
	gotoxy(30, 4);
	printf("戌式式式式式式式式式式式式式式式式式式式式戎");
	gotoxy(30, 3);
	printf("弛 陳瞼 殮溘弛 ");
	gotoxy(51, 3);
	printf("弛");
	gotoxy(43, 3);
	scanf("%d", &day);
	while(getchar() != '\n');
	select_date(day);
}