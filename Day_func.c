#include "include.h"
#include "reach.h"

int choose_act() {
	int choose;
	gotoxy(46, 7);
	printf("┌───────-───────────────┐");
	gotoxy(48, 11);
	printf("1. 단어리스트");
	gotoxy(48, 13);
	printf("2. 단어 뜻 쓰기");
	gotoxy(48, 15);
	printf("3. 뜻 보고 영단어 쓰기");
	gotoxy(48, 17);
	printf("4. 리콜학습(뜻)");
	gotoxy(48, 19);
	printf("5. 리콜학습(단어)");
	gotoxy(46, 23);
	printf("└─────────────-─────────┘");
	choose = _getch() - '0';
	return choose;
}

void select_date(int day_num) {
	int choose, point;
	system("cls");
	switch (day_num) {
	case 1:
		choose = choose_act();
		system("cls");
		switch (choose) {
		case 1:
			print_word1();
			break;
		case 2:
			point = print_Q1(2);
			print_point(point, reach, 1);
			break;
		case 3:
			point = print_Q1(3);
			print_point(point, reach, 1);
			break;
		case 4:
			point = print_4Q1(2);
			print_point(point, reach, 1);
		case 5:
			point = print_4Q1(3);
			print_point(point, reach, 1);
		default:
			date_choose();
			break;
		}
		break;
	case 2:
		choose = choose_act();
		system("cls");
		switch (choose) {
		case 1:
			print_word2();
			break;
		case 2:
			point = print_Q2(2);
			print_point(point, reach, 2);
			break;
		case 3:
			point = print_Q2(3);
			print_point(point, reach, 2);
			break;
		case 4:
			point = print_4Q2(2);
			print_point(point, reach, 2);
		case 5:
			point = print_4Q2(3);
			print_point(point, reach, 2);
		default:
			date_choose();
			break;
		}
		break;
	case 3:
		choose = choose_act();
		system("cls");
		switch (choose) {
		case 1:
			print_word3();
			break;
		case 2:
			point = print_Q3(2);
			print_point(point, reach, 3);
			break;
		case 3:
			point = print_Q3(3);
			print_point(point, reach, 3);
			break;
		case 4:
			point = print_4Q3(2);
			print_point(point, reach, 3);
		case 5:
			point = print_4Q3(3);
			print_point(point, reach, 3);
		default:
			date_choose();
			break;
		}
		break;
	case 4:
		choose = choose_act();
		system("cls");
		switch (choose) {
		case 1:
			print_word4();
			break;
		case 2:
			point = print_Q4(2);
			print_point(point, reach, 4);
			break;
		case 3:
			point = print_Q4(3);
			print_point(point, reach, 4);
			break;
		case 4:
			point = print_4Q4(2);
			print_point(point, reach, 4);
		case 5:
			point = print_4Q4(3);
			print_point(point, reach, 4);
		default:
			date_choose();
			break;
		}
		break;
	case 5:
		choose = choose_act();
		system("cls");
		switch (choose) {
		case 1:
			print_word5();
			break;
		case 2:
			point = print_Q5(2);
			print_point(point, reach, 5);
			break;
		case 3:
			point = print_Q5(3);
			print_point(point, reach, 5);
			break;
		case 4:
			point = print_4Q5(2);
			print_point(point, reach, 5);
		case 5:
			point = print_4Q5(3);
			print_point(point, reach, 5);
		default:
			date_choose();
			break;
		}
		break;
	case 6:
		choose = choose_act();
		system("cls");
		switch (choose) {
		case 1:
			print_word6();
			break;
		case 2:
			point = print_Q6(2);
			print_point(point, reach, 6);
			break;
		case 3:
			point = print_Q6(3);
			print_point(point, reach, 6);
			break;
		case 4:
			point = print_4Q6(2);
			print_point(point, reach, 6);
		case 5:
			point = print_4Q6(3);
			print_point(point, reach, 6);
		default:
			date_choose();
			break;
		}
		break;
	case 7:
		choose = choose_act();
		system("cls");
		switch (choose) {
		case 1:
			print_word7();
			break;
		case 2:
			point = print_Q7(2);
			print_point(point, reach, 7);
			break;
		case 3:
			point = print_Q7(3);
			print_point(point, reach, 7);
			break;
		case 4:
			point = print_4Q7(2);
			print_point(point, reach, 7);
		case 5:
			point = print_4Q7(3);
			print_point(point, reach, 7);
		default:
			date_choose();
			break;
		}
		break;
	case 8:
		choose = choose_act();
		system("cls");
		switch (choose) {
		case 1:
			print_word8();
			break;
		case 2:
			point = print_Q8(2);
			print_point(point, reach, 8);
			break;
		case 3:
			point = print_Q8(3);
			print_point(point, reach, 8);
			break;
		case 4:
			point = print_4Q8(2);
			print_point(point, reach, 8);
		case 5:
			point = print_4Q8(3);
			print_point(point, reach, 8);
		default:
			date_choose();
			break;
		}
		break;
	case 9:
		choose = choose_act();
		system("cls");
		switch (choose) {
		case 1:
			print_word9();
			break;
		case 2:
			point = print_Q9(2);
			print_point(point, reach, 9);
			break;
		case 3:
			point = print_Q9(3);
			print_point(point, reach, 9);
			break;
		case 4:
			point = print_4Q9(2);
			print_point(point, reach, 9);
		case 5:
			point = print_4Q9(3);
			print_point(point, reach, 9);
		default:
			date_choose();
			break;
		}
		break;
	case 10:
		choose = choose_act();
		system("cls");
		switch (choose) {
		case 1:
			print_word10();
			break;
		case 2:
			point = print_Q10(2);
			print_point(point, reach, 10);
			break;
		case 3:
			point = print_Q10(3);
			print_point(point, reach, 10);
			break;
		case 4:
			point = print_4Q10(2);
			print_point(point, reach, 10);
		case 5:
			point = print_4Q10(3);
			print_point(point, reach, 10);
		default:
			date_choose();
			break;
		}
		break;
	case 11:
		choose = choose_act();
		system("cls");
		switch (choose) {
		case 1:
			print_word11();
			break;
		case 2:
			point = print_Q11(2);
			print_point(point, reach, 11);
			break;
		case 3:
			point = print_Q11(3);
			print_point(point, reach, 11);
			break;
		case 4:
			point = print_4Q11(2);
			print_point(point, reach, 11);
		case 5:
			point = print_4Q11(3);
			print_point(point, reach, 11);
		default:
			date_choose();
			break;
		}
		break;
	case 12:
		choose = choose_act();
		system("cls");
		switch (choose) {
		case 1:
			print_word12();
			break;
		case 2:
			point = print_Q12(2);
			print_point(point, reach, 12);
			break;
		case 3:
			point = print_Q12(3);
			print_point(point, reach, 12);
			break;
		case 4:
			point = print_4Q12(2);
			print_point(point, reach, 12);
		case 5:
			point = print_4Q12(3);
			print_point(point, reach, 12);
		default:
			date_choose();
			break;
		}
		break;
	case 13:
		choose = choose_act();
		system("cls");
		switch (choose) {
		case 1:
			print_word13();
			break;
		case 2:
			point = print_Q13(2);
			print_point(point, reach, 13);
			break;
		case 3:
			point = print_Q13(3);
			print_point(point, reach, 13);
			break;
		case 4:
			point = print_4Q13(2);
			print_point(point, reach, 13);
		case 5:
			point = print_4Q13(3);
			print_point(point, reach, 13);
		default:
			date_choose();
			break;
		}
		break;
	case 14:
		choose = choose_act();
		system("cls");
		switch (choose) {
		case 1:
			print_word14();
			break;
		case 2:
			point = print_Q14(2);
			print_point(point, reach, 14);
			break;
		case 3:
			point = print_Q14(3);
			print_point(point, reach, 14);
			break;
		case 4:
			point = print_4Q14(2);
			print_point(point, reach, 14);
		case 5:
			point = print_4Q14(3);
			print_point(point, reach, 14);
		default:
			date_choose();
			break;
		}
		break;
	case 15:
		choose = choose_act();
		system("cls");
		switch (choose) {
		case 1:
			print_word15();
			break;
		case 2:
			point = print_Q15(2);
			print_point(point, reach, 15);
			break;
		case 3:
			point = print_Q15(3);
			print_point(point, reach, 15);
			break;
		case 4:
			point = print_4Q15(2);
			print_point(point, reach, 15);
		case 5:
			point = print_4Q15(3);
			print_point(point, reach, 15);
		default:
			date_choose();
			break;
		}
		break;
	case 16:
		choose = choose_act();
		system("cls");
		switch (choose) {
		case 1:
			print_word16();
			break;
		case 2:
			point = print_Q16(2);
			print_point(point, reach, 16);
			break;
		case 3:
			point = print_Q16(3);
			print_point(point, reach, 16);
			break;
		case 4:
			point = print_4Q16(2);
			print_point(point, reach, 16);
		case 5:
			point = print_4Q16(3);
			print_point(point, reach, 16);
		default:
			date_choose();
			break;
		}
		break;
	case 0:
		exit(0);
	case 100:
		reach = setting();
		system("cls");
		main();
		break;
	case 999:
		print_point(20, 10, 1);
		break;
	default:
		date_choose();
		break;
	}
}