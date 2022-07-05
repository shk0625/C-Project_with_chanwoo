#include "myHeader.h"

void rand_num(int r_num[]) {
	srand(time(NULL));
	for (int i = 0; i < 20; i++) {
		r_num[i] = rand() % 50;
		for (int j = 0; j < i; j++) {
			if (r_num[i] == r_num[j]) {
				i--;
				break;
			}
		}
	}
}

void rand_num2(int r_num[], int day) {
	srand(time(NULL));
	int rn = rand() % 4;
	r_num[rn] = day;
	for (int i = 0; i < 4; i++) {
		if (i == rn) {
			continue;
		}
		r_num[i] = rand() % 50;
		if (day == r_num[i]) {
			i--;
			continue;
		}		
		for (int j = 0; j < i; j++) {
			if (i == 0 && r_num[i] == r_num[j]) {
				i++;
				break;
			}
			if (r_num[i] == r_num[j]) {
				i--;
				break;
			}
		}
	}
}

void print_word1() {
	for (int i = 0; i < 50; i++) {
		if (i < 25) {
			printf("%s\n", word_days1[i].e_word);
			gotoxy(17, i);
			printf("%s", word_days1[i].k_word);
			gotoxy(0, i + 1);
		}
		else {
			gotoxy(34, i - 25);
			printf("%s\n", word_days1[i].e_word);
			gotoxy(51, i - 25);
			printf("%s", word_days1[i].k_word);
		}
	}
	char flag = '\0';
	flag = _getch();
	if (flag != '\0') {
		system("cls");
		select_date(1);
	}
}

void print_word2() {
	for (int i = 0; i < 50; i++) {
		if (i < 25) {
			printf("%s\n", word_days2[i].e_word);
			gotoxy(17, i);
			printf("%s", word_days2[i].k_word);
			gotoxy(0, i + 1);
		}
		else {
			gotoxy(34, i - 25);
			printf("%s\n", word_days2[i].e_word);
			gotoxy(51, i - 25);
			printf("%s", word_days2[i].k_word);
		}
	}
	char flag = '\0';
	flag = _getch();
	if (flag != '\0') {
		system("cls");
		select_date(2);
	}
}

void print_word3() {
	for (int i = 0; i < 50; i++) {
		if (i < 25) {
			printf("%s\n", word_days3[i].e_word);
			gotoxy(17, i);
			printf("%s", word_days3[i].k_word);
			gotoxy(0, i + 1);
		}
		else {
			gotoxy(34, i - 25);
			printf("%s\n", word_days3[i].e_word);
			gotoxy(51, i - 25);
			printf("%s", word_days3[i].k_word);
		}
	}
	char flag = '\0';
	flag = _getch();
	if (flag != '\0') {
		system("cls");
		select_date(3);
	}
}

void print_word4() {
	for (int i = 0; i < 50; i++) {
		if (i < 25) {
			printf("%s\n", word_days4[i].e_word);
			gotoxy(17, i);
			printf("%s", word_days4[i].k_word);
			gotoxy(0, i + 1);
		}
		else {
			gotoxy(34, i - 25);
			printf("%s\n", word_days4[i].e_word);
			gotoxy(51, i - 25);
			printf("%s", word_days4[i].k_word);
		}
	}
	char flag = '\0';
	flag = _getch();
	if (flag != '\0') {
		system("cls");
		select_date(4);
	}
}

void print_word5() {
	for (int i = 0; i < 50; i++) {
		if (i < 25) {
			printf("%s\n", word_days5[i].e_word);
			gotoxy(17, i);
			printf("%s", word_days5[i].k_word);
			gotoxy(0, i + 1);
		}
		else {
			gotoxy(34, i - 25);
			printf("%s\n", word_days5[i].e_word);
			gotoxy(51, i - 25);
			printf("%s", word_days5[i].k_word);
		}
	}
	char flag = '\0';
	flag = _getch();
	if (flag != '\0') {
		system("cls");
		select_date(5);
	}
}

void print_word6() {
	for (int i = 0; i < 50; i++) {
		if (i < 25) {
			printf("%s\n", word_days6[i].e_word);
			gotoxy(17, i);
			printf("%s", word_days6[i].k_word);
			gotoxy(0, i + 1);
		}
		else {
			gotoxy(34, i - 25);
			printf("%s\n", word_days6[i].e_word);
			gotoxy(51, i - 25);
			printf("%s", word_days6[i].k_word);
		}
	}
	char flag = '\0';
	flag = _getch();
	if (flag != '\0') {
		system("cls");
		select_date(6);
	}
}

void print_word7() {
	for (int i = 0; i < 50; i++) {
		if (i < 25) {
			printf("%s\n", word_days7[i].e_word);
			gotoxy(17, i);
			printf("%s", word_days7[i].k_word);
			gotoxy(0, i + 1);
		}
		else {
			gotoxy(34, i - 25);
			printf("%s\n", word_days7[i].e_word);
			gotoxy(51, i - 25);
			printf("%s", word_days7[i].k_word);
		}
	}
	char flag = '\0';
	flag = _getch();
	if (flag != '\0') {
		system("cls");
		select_date(7);
	}
}

void print_word8() {
	for (int i = 0; i < 50; i++) {
		if (i < 25) {
			printf("%s\n", word_days8[i].e_word);
			gotoxy(17, i);
			printf("%s", word_days8[i].k_word);
			gotoxy(0, i + 1);
		}
		else {
			gotoxy(34, i - 25);
			printf("%s\n", word_days8[i].e_word);
			gotoxy(51, i - 25);
			printf("%s", word_days8[i].k_word);
		}
	}
	char flag = '\0';
	flag = _getch();
	if (flag != '\0') {
		system("cls");
		select_date(8);
	}
}

void print_word9() {
	for (int i = 0; i < 50; i++) {
		if (i < 25) {
			printf("%s\n", word_days9[i].e_word);
			gotoxy(17, i);
			printf("%s", word_days9[i].k_word);
			gotoxy(0, i + 1);
		}
		else {
			gotoxy(34, i - 25);
			printf("%s\n", word_days9[i].e_word);
			gotoxy(51, i - 25);
			printf("%s", word_days9[i].k_word);
		}
	}
	char flag = '\0';
	flag = _getch();
	if (flag != '\0') {
		system("cls");
		select_date(9);
	}
}

void print_word10() {
	for (int i = 0; i < 50; i++) {
		if (i < 25) {
			printf("%s\n", word_days10[i].e_word);
			gotoxy(17, i);
			printf("%s", word_days10[i].k_word);
			gotoxy(0, i + 1);
		}
		else {
			gotoxy(34, i - 25);
			printf("%s\n", word_days10[i].e_word);
			gotoxy(51, i - 25);
			printf("%s", word_days10[i].k_word);
		}
	}
	char flag = '\0';
	flag = _getch();
	if (flag != '\0') {
		system("cls");
		select_date(10);
	}
}

void print_word11() {
	for (int i = 0; i < 50; i++) {
		if (i < 25) {
			printf("%s\n", word_days11[i].e_word);
			gotoxy(17, i);
			printf("%s", word_days11[i].k_word);
			gotoxy(0, i + 1);
		}
		else {
			gotoxy(34, i - 25);
			printf("%s\n", word_days11[i].e_word);
			gotoxy(51, i - 25);
			printf("%s", word_days11[i].k_word);
		}
	}
	char flag = '\0';
	flag = _getch();
	if (flag != '\0') {
		system("cls");
		select_date(11);
	}
}

void print_word12() {
	for (int i = 0; i < 50; i++) {
		if (i < 25) {
			printf("%s\n", word_days12[i].e_word);
			gotoxy(17, i);
			printf("%s", word_days12[i].k_word);
			gotoxy(0, i + 1);
		}
		else {
			gotoxy(34, i - 25);
			printf("%s\n", word_days12[i].e_word);
			gotoxy(51, i - 25);
			printf("%s", word_days12[i].k_word);
		}
	}
	char flag = '\0';
	flag = _getch();
	if (flag != '\0') {
		system("cls");
		select_date(12);
	}
}

void print_word13() {
	for (int i = 0; i < 50; i++) {
		if (i < 25) {
			printf("%s\n", word_days13[i].e_word);
			gotoxy(17, i);
			printf("%s", word_days13[i].k_word);
			gotoxy(0, i + 1);
		}
		else {
			gotoxy(34, i - 25);
			printf("%s\n", word_days13[i].e_word);
			gotoxy(51, i - 25);
			printf("%s", word_days13[i].k_word);
		}
	}
	char flag = '\0';
	flag = _getch();
	if (flag != '\0') {
		system("cls");
		select_date(13);
	}
}

void print_word14() {
	for (int i = 0; i < 50; i++) {
		if (i < 25) {
			printf("%s\n", word_days14[i].e_word);
			gotoxy(17, i);
			printf("%s", word_days14[i].k_word);
			gotoxy(0, i + 1);
		}
		else {
			gotoxy(34, i - 25);
			printf("%s\n", word_days14[i].e_word);
			gotoxy(51, i - 25);
			printf("%s", word_days14[i].k_word);
		}
	}
	char flag = '\0';
	flag = _getch();
	if (flag != '\0') {
		system("cls");
		select_date(14);
	}
}

void print_word15() {
	for (int i = 0; i < 50; i++) {
		if (i < 25) {
			printf("%s\n", word_days15[i].e_word);
			gotoxy(17, i);
			printf("%s", word_days15[i].k_word);
			gotoxy(0, i + 1);
		}
		else {
			gotoxy(34, i - 25);
			printf("%s\n", word_days15[i].e_word);
			gotoxy(51, i - 25);
			printf("%s", word_days15[i].k_word);
		}
	}
	char flag = '\0';
	flag = _getch();
	if (flag != '\0') {
		system("cls");
		select_date(15);
	}
}

void print_word16() {
		for (int i = 0; i < 50; i++) {
			if (i < 25) {
				printf("%s\n", word_days16[i].e_word);
				gotoxy(17, i);
				printf("%s", word_days16[i].k_word);
				gotoxy(0, i + 1);
			}
			else {
				gotoxy(34, i - 25);
				printf("%s\n", word_days16[i].e_word);
				gotoxy(51, i - 25);
				printf("%s", word_days16[i].k_word);
			}
		}
		char flag = '\0';
		flag = _getch();
		if (flag != '\0') {
			system("cls");
			select_date(16);
		}
	}

int print_Q1(int flag) {
	int r_num[20];
	char answer[15] = "", ques[15] = "";
	int cnt = 0;
	rand_num(r_num);
	if (flag == 2) {
		for (int i = 0; i < 20; i++) {
			strcpy(ques, word_days1[r_num[i]].k_word);
			printf("%d %s", i + 1, word_days1[r_num[i]].e_word);
			gets(answer);
			if (strcmp(ques, answer) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}

	}
	if (flag == 3) {
		for (int i = 0; i < 20; i++) {
			strcpy(ques, word_days1[r_num[i]].e_word);
			printf("%d %s\n", i + 1, word_days1[r_num[i]].k_word);
			gets(answer);
			if (strcmp(ques, answer) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	return cnt;
}

int print_Q2(int flag) {
	int r_num[20];
	char answer[15], ques[15];
	int cnt = 0;
	rand_num(r_num);
	if (flag == 2) {
		for (int i = 0; i < 20; i++) {
			strcpy(ques, word_days2[r_num[i]].k_word);
			printf("%d %s\n", i + 1, word_days2[r_num[i]].e_word);
			gets(answer);
			if (strcmp(ques, answer) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}

	}
	if (flag == 3) {
		for (int i = 0; i < 20; i++) {
			strcpy(ques, word_days2[r_num[i]].e_word);
			printf("%d %s\n", i + 1, word_days2[r_num[i]].k_word);
			gets(answer);
			if (strcmp(ques, answer) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	return cnt;
}

int print_Q3(int flag) {
	int r_num[20];
	char answer[15], ques[15];
	int cnt = 0;
	rand_num(r_num);
	if (flag == 2) {
		for (int i = 0; i < 20; i++) {
			strcpy(ques, word_days3[r_num[i]].k_word);
			printf("%d %s\n", i + 1, word_days3[r_num[i]].e_word);
			gets(answer);
			if (strcmp(ques, answer) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}

	}
	if (flag == 3) {
		for (int i = 0; i < 20; i++) {
			strcpy(ques, word_days3[r_num[i]].e_word);
			printf("%d %s\n", i + 1, word_days3[r_num[i]].k_word);
			gets(answer);
			if (strcmp(ques, answer) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	return cnt;
}

int print_Q4(int flag) {
	int r_num[20];
	char answer[15], ques[15];
	int cnt = 0;
	rand_num(r_num);
	if (flag == 2) {
		for (int i = 0; i < 20; i++) {
			strcpy(ques, word_days4[r_num[i]].k_word);
			printf("%d %s\n", i + 1, word_days4[r_num[i]].e_word);
			gets(answer);
			if (strcmp(ques, answer) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}

	}
	if (flag == 3) {
		for (int i = 0; i < 20; i++) {
			strcpy(ques, word_days4[r_num[i]].e_word);
			printf("%d %s\n", i + 1, word_days4[r_num[i]].k_word);
			gets(answer);
			if (strcmp(ques, answer) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	return cnt;
}

int print_Q5(int flag) {
	int r_num[20];
	char answer[15], ques[15];
	int cnt = 0;
	rand_num(r_num);
	if (flag == 2) {
		for (int i = 0; i < 20; i++) {
			strcpy(ques, word_days5[r_num[i]].k_word);
			printf("%d %s\n", i + 1, word_days5[r_num[i]].e_word);
			gets(answer);
			if (strcmp(ques, answer) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}

	}
	if (flag == 3) {
		for (int i = 0; i < 20; i++) {
			strcpy(ques, word_days5[r_num[i]].e_word);
			printf("%d %s\n", i + 1, word_days5[r_num[i]].k_word);
			gets(answer);
			if (strcmp(ques, answer) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	return cnt;
}

int print_Q6(int flag) {
	int r_num[20];
	char answer[15], ques[15];
	int cnt = 0;
	rand_num(r_num);
	if (flag == 2) {
		for (int i = 0; i < 20; i++) {
			strcpy(ques, word_days6[r_num[i]].k_word);
			printf("%d %s\n", i + 1, word_days6[r_num[i]].e_word);
			gets(answer);
			if (strcmp(ques, answer) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}

	}
	if (flag == 3) {
		for (int i = 0; i < 20; i++) {
			strcpy(ques, word_days6[r_num[i]].e_word);
			printf("%d %s\n", i + 1, word_days6[r_num[i]].k_word);
			gets(answer);
			if (strcmp(ques, answer) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	return cnt;
}

int print_Q7(int flag) {
	int r_num[20];
	char answer[15], ques[15];
	int cnt = 0;
	rand_num(r_num);
	if (flag == 2) {
		for (int i = 0; i < 20; i++) {
			strcpy(ques, word_days7[r_num[i]].k_word);
			printf("%d %s\n", i + 1, word_days7[r_num[i]].e_word);
			gets(answer);
			if (strcmp(ques, answer) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}

	}
	if (flag == 3) {
		for (int i = 0; i < 20; i++) {
			strcpy(ques, word_days7[r_num[i]].e_word);
			printf("%d %s\n", i + 1, word_days7[r_num[i]].k_word);
			gets(answer);
			if (strcmp(ques, answer) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	return cnt;
}

int print_Q8(int flag) {
	int r_num[20];
	char answer[15], ques[15];
	int cnt = 0;
	rand_num(r_num);
	if (flag == 2) {
		for (int i = 0; i < 20; i++) {
			strcpy(ques, word_days8[r_num[i]].k_word);
			printf("%d %s\n", i + 1, word_days8[r_num[i]].e_word);
			gets(answer);
			if (strcmp(ques, answer) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}

	}
	if (flag == 3) {
		for (int i = 0; i < 20; i++) {
			strcpy(ques, word_days8[r_num[i]].e_word);
			printf("%d %s\n", i + 1, word_days8[r_num[i]].k_word);
			gets(answer);
			if (strcmp(ques, answer) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	return cnt;
}

int print_Q9(int flag) {
	int r_num[20];
	char answer[15], ques[15];
	int cnt = 0;
	rand_num(r_num);
	if (flag == 2) {
		for (int i = 0; i < 20; i++) {
			strcpy(ques, word_days9[r_num[i]].k_word);
			printf("%d %s\n", i + 1, word_days9[r_num[i]].e_word);
			gets(answer);
			if (strcmp(ques, answer) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}

	}
	if (flag == 3) {
		for (int i = 0; i < 20; i++) {
			strcpy(ques, word_days9[r_num[i]].e_word);
			printf("%d %s\n", i + 1, word_days9[r_num[i]].k_word);
			gets(answer);
			if (strcmp(ques, answer) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	return cnt;
}

int print_Q10(int flag) {
	int r_num[20];
	char answer[15], ques[15];
	int cnt = 0;
	rand_num(r_num);
	if (flag == 2) {
		for (int i = 0; i < 20; i++) {
			strcpy(ques, word_days10[r_num[i]].k_word);
			printf("%d %s\n", i + 1, word_days10[r_num[i]].e_word);
			gets(answer);
			if (strcmp(ques, answer) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}

	}
	if (flag == 3) {
		for (int i = 0; i < 20; i++) {
			strcpy(ques, word_days10[r_num[i]].e_word);
			printf("%d %s\n", i + 1, word_days10[r_num[i]].k_word);
			gets(answer);
			if (strcmp(ques, answer) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	return cnt;
}

int print_Q11(int flag) {
	int r_num[20];
	char answer[15], ques[15];
	int cnt = 0;
	rand_num(r_num);
	if (flag == 2) {
		for (int i = 0; i < 20; i++) {
			strcpy(ques, word_days11[r_num[i]].k_word);
			printf("%d %s\n", i + 1, word_days11[r_num[i]].e_word);
			gets(answer);
			if (strcmp(ques, answer) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}

	}
	if (flag == 3) {
		for (int i = 0; i < 20; i++) {
			strcpy(ques, word_days11[r_num[i]].e_word);
			printf("%d %s\n", i + 1, word_days11[r_num[i]].k_word);
			gets(answer);
			if (strcmp(ques, answer) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	return cnt;
}

int print_Q12(int flag) {
	int r_num[20];
	char answer[15], ques[15];
	int cnt = 0;
	rand_num(r_num);
	if (flag == 2) {
		for (int i = 0; i < 20; i++) {
			strcpy(ques, word_days12[r_num[i]].k_word);
			printf("%d %s\n", i + 1, word_days12[r_num[i]].e_word);
			gets(answer);
			if (strcmp(ques, answer) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}

	}
	if (flag == 3) {
		for (int i = 0; i < 20; i++) {
			strcpy(ques, word_days12[r_num[i]].e_word);
			printf("%d %s\n", i + 1, word_days12[r_num[i]].k_word);
			gets(answer);
			if (strcmp(ques, answer) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	return cnt;
}

int print_Q13(int flag) {
	int r_num[20];
	char answer[15], ques[15];
	int cnt = 0;
	rand_num(r_num);
	if (flag == 2) {
		for (int i = 0; i < 20; i++) {
			strcpy(ques, word_days1[r_num[i]].k_word);
			printf("%d %s\n", i + 1, word_days13[r_num[i]].e_word);
			gets(answer);
			if (strcmp(ques, answer) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}

	}
	if (flag == 3) {
		for (int i = 0; i < 20; i++) {
			strcpy(ques, word_days13[r_num[i]].e_word);
			printf("%d %s\n", i + 1, word_days13[r_num[i]].k_word);
			gets(answer);
			if (strcmp(ques, answer) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	return cnt;
}

int print_Q14(int flag) {
	int r_num[20];
	char answer[15], ques[15];
	int cnt = 0;
	rand_num(r_num);
	if (flag == 2) {
		for (int i = 0; i < 20; i++) {
			strcpy(ques, word_days14[r_num[i]].k_word);
			printf("%d %s\n", i + 1, word_days14[r_num[i]].e_word);
			gets(answer);
			if (strcmp(ques, answer) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}

	}
	if (flag == 3) {
		for (int i = 0; i < 20; i++) {
			strcpy(ques, word_days14[r_num[i]].e_word);
			printf("%d %s\n", i + 1, word_days14[r_num[i]].k_word);
			gets(answer);
			if (strcmp(ques, answer) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	return cnt;
}

int print_Q15(int flag) {
	int r_num[20];
	char answer[15], ques[15];
	int cnt = 0;
	rand_num(r_num);
	if (flag == 2) {
		for (int i = 0; i < 20; i++) {
			strcpy(ques, word_days15[r_num[i]].k_word);
			printf("%d %s\n", i + 1, word_days15[r_num[i]].e_word);
			gets(answer);
			if (strcmp(ques, answer) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}

	}
	if (flag == 3) {
		for (int i = 0; i < 20; i++) {
			strcpy(ques, word_days15[r_num[i]].e_word);
			printf("%d %s\n", i + 1, word_days15[r_num[i]].k_word);
			gets(answer);
			if (strcmp(ques, answer) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	return cnt;
}

int print_Q16(int flag) {
	int r_num[20];
	char answer[15], ques[15];
	int cnt = 0;
	rand_num(r_num);
	if (flag == 2) {
		for (int i = 0; i < 20; i++) {
			strcpy(ques, word_days16[r_num[i]].k_word);
			printf("%d %s\n", i + 1, word_days16[r_num[i]].e_word);
			gets(answer);
			if (strcmp(ques, answer) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}

	}
	if (flag == 3) {
		for (int i = 0; i < 20; i++) {
			strcpy(ques, word_days16[r_num[i]].e_word);
			printf("%d %s\n", i + 1, word_days16[r_num[i]].k_word);
			gets(answer);
			if (strcmp(ques, answer) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	return cnt;
}

int print_4Q1(int flag) {
	int r_num[20];
	int r_num2[4];
	char ques[15];
	char answer[15];
	int cnt = 0, ans;
	rand_num(r_num);
	if (flag == 2) {
		for (int i = 0; i < 20; i++) {
			rand_num2(r_num2, r_num[i]);
			strcpy(ques, word_days1[r_num[i]].k_word);
			printf("%d %s", i+1, word_days1[r_num[i]].e_word);
			gotoxy(0, 2);
			printf("%d : %s", 1, word_days1[r_num2[0]].k_word);
			gotoxy(20, 2);
			printf("%d : %s", 2, word_days1[r_num2[1]].k_word);
			gotoxy(0, 4);
			printf("%d : %s", 3, word_days1[r_num2[2]].k_word);
			gotoxy(20, 4);
			printf("%d : %s", 4, word_days1[r_num2[3]].k_word);
			ans = _getch() - '0';
			if (strcmp(ques, word_days1[r_num2[ans - 1]].k_word) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	else if (flag == 3) {
		for (int i = 0; i < 20; i++) {
			rand_num2(r_num2, r_num[i]);
			strcpy(ques, word_days1[r_num[i]].e_word);
			printf("%d %s", i + 1, word_days1[r_num[i]].k_word);
			gotoxy(0, 2);
			printf("%d : %s", 1, word_days1[r_num2[0]].e_word);
			gotoxy(20, 2);
			printf("%d : %s", 2, word_days1[r_num2[1]].e_word);
			gotoxy(0, 4);
			printf("%d : %s", 3, word_days1[r_num2[2]].e_word);
			gotoxy(20, 4);
			printf("%d : %s", 4, word_days1[r_num2[3]].e_word);
			ans = _getch() - '0';
			if (strcmp(ques, word_days1[r_num2[ans - 1]].e_word) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	return cnt;
}

int print_4Q2(int flag) {
	int r_num[20];
	int r_num2[4];
	char ques[15];
	char answer[15];
	int cnt = 0, ans;
	rand_num(r_num);
	if (flag == 2) {
		for (int i = 0; i < 20; i++) {
			rand_num2(r_num2, r_num[i]);
			strcpy(ques, word_days2[r_num[i]].k_word);
			printf("%d %s", i + 1, word_days2[r_num[i]].e_word);
			gotoxy(0, 2);
			printf("%d : %s", 1, word_days2[r_num2[0]].k_word);
			gotoxy(20, 2);
			printf("%d : %s", 2, word_days2[r_num2[1]].k_word);
			gotoxy(0, 4);
			printf("%d : %s", 3, word_days2[r_num2[2]].k_word);
			gotoxy(20, 4);
			printf("%d : %s", 4, word_days2[r_num2[3]].k_word);
			ans = _getch() - '0';
			if (strcmp(ques, word_days2[r_num2[ans - 1]].k_word) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	else if (flag == 3) {
		for (int i = 0; i < 20; i++) {
			rand_num2(r_num2, r_num[i]);
			strcpy(ques, word_days2[r_num[i]].e_word);
			printf("%d %s", i + 1, word_days2[r_num[i]].k_word);
			gotoxy(0, 2);
			printf("%d : %s", 1, word_days2[r_num2[0]].e_word);
			gotoxy(20, 2);
			printf("%d : %s", 2, word_days2[r_num2[1]].e_word);
			gotoxy(0, 4);
			printf("%d : %s", 3, word_days2[r_num2[2]].e_word);
			gotoxy(20, 4);
			printf("%d : %s", 4, word_days2[r_num2[3]].e_word);
			ans = _getch() - '0';
			if (strcmp(ques, word_days2[r_num2[ans - 1]].e_word) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	return cnt;
}

int print_4Q3(int flag) {
	int r_num[20];
	int r_num2[4];
	char ques[15];
	char answer[15];
	int cnt = 0, ans;
	rand_num(r_num);
	if (flag == 2) {
		for (int i = 0; i < 20; i++) {
			rand_num2(r_num2, r_num[i]);
			strcpy(ques, word_days3[r_num[i]].k_word);
			printf("%d %s", i + 1, word_days3[r_num[i]].e_word);
			gotoxy(0, 2);
			printf("%d : %s", 1, word_days3[r_num2[0]].k_word);
			gotoxy(20, 2);
			printf("%d : %s", 2, word_days3[r_num2[1]].k_word);
			gotoxy(0, 4);
			printf("%d : %s", 3, word_days3[r_num2[2]].k_word);
			gotoxy(20, 4);
			printf("%d : %s", 4, word_days3[r_num2[3]].k_word);
			ans = _getch() - '0';
			if (strcmp(ques, word_days3[r_num2[ans - 1]].k_word) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	else if (flag == 3) {
		for (int i = 0; i < 20; i++) {
			rand_num2(r_num2, r_num[i]);
			strcpy(ques, word_days3[r_num[i]].e_word);
			printf("%d %s", i + 1, word_days3[r_num[i]].k_word);
			gotoxy(0, 2);
			printf("%d : %s", 1, word_days3[r_num2[0]].e_word);
			gotoxy(20, 2);
			printf("%d : %s", 2, word_days3[r_num2[1]].e_word);
			gotoxy(0, 4);
			printf("%d : %s", 3, word_days3[r_num2[2]].e_word);
			gotoxy(20, 4);
			printf("%d : %s", 4, word_days3[r_num2[3]].e_word);
			ans = _getch() - '0';
			if (strcmp(ques, word_days3[r_num2[ans - 1]].e_word) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	return cnt;
}

int print_4Q4(int flag) {
	int r_num[20];
	int r_num2[4];
	char ques[15];
	char answer[15];
	int cnt = 0, ans;
	rand_num(r_num);
	if (flag == 2) {
		for (int i = 0; i < 20; i++) {
			rand_num2(r_num2, r_num[i]);
			strcpy(ques, word_days4[r_num[i]].k_word);
			printf("%d %s", i + 1, word_days4[r_num[i]].e_word);
			gotoxy(0, 2);
			printf("%d : %s", 1, word_days4[r_num2[0]].k_word);
			gotoxy(20, 2);
			printf("%d : %s", 2, word_days4[r_num2[1]].k_word);
			gotoxy(0, 4);
			printf("%d : %s", 3, word_days4[r_num2[2]].k_word);
			gotoxy(20, 4);
			printf("%d : %s", 4, word_days4[r_num2[3]].k_word);
			ans = _getch() - '0';
			if (strcmp(ques, word_days4[r_num2[ans - 1]].k_word) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);


				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	else if (flag == 3) {
		for (int i = 0; i < 20; i++) {
			rand_num2(r_num2, r_num[i]);
			strcpy(ques, word_days4[r_num[i]].e_word);
			printf("%d %s", i + 1, word_days4[r_num[i]].k_word);
			gotoxy(0, 2);
			printf("%d : %s", 1, word_days4[r_num2[0]].e_word);
			gotoxy(20, 2);
			printf("%d : %s", 2, word_days4[r_num2[1]].e_word);
			gotoxy(0, 4);
			printf("%d : %s", 3, word_days4[r_num2[2]].e_word);
			gotoxy(20, 4);
			printf("%d : %s", 4, word_days4[r_num2[3]].e_word);
			ans = _getch() - '0';
			if (strcmp(ques, word_days4[r_num2[ans - 1]].e_word) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	return cnt;
}

int print_4Q5(int flag) {
	int r_num[20];
	int r_num2[4];
	char ques[15];
	char answer[15];
	int cnt = 0, ans;
	rand_num(r_num);
	if (flag == 2) {
		for (int i = 0; i < 20; i++) {
			rand_num2(r_num2, r_num[i]);
			strcpy(ques, word_days5[r_num[i]].k_word);
			printf("%d %s", i + 1, word_days5[r_num[i]].e_word);
			gotoxy(0, 2);
			printf("%d : %s", 1, word_days5[r_num2[0]].k_word);
			gotoxy(20, 2);
			printf("%d : %s", 2, word_days5[r_num2[1]].k_word);
			gotoxy(0, 4);
			printf("%d : %s", 3, word_days5[r_num2[2]].k_word);
			gotoxy(20, 4);
			printf("%d : %s", 4, word_days5[r_num2[3]].k_word);
			ans = _getch() - '0';
			if (strcmp(ques, word_days5[r_num2[ans - 1]].k_word) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	else if (flag == 3) {
		for (int i = 0; i < 20; i++) {
			rand_num2(r_num2, r_num[i]);
			strcpy(ques, word_days5[r_num[i]].e_word);
			printf("%d %s", i + 1, word_days5[r_num[i]].k_word);
			gotoxy(0, 2);
			printf("%d : %s", 1, word_days5[r_num2[0]].e_word);
			gotoxy(20, 2);
			printf("%d : %s", 2, word_days5[r_num2[1]].e_word);
			gotoxy(0, 4);
			printf("%d : %s", 3, word_days5[r_num2[2]].e_word);
			gotoxy(20, 4);
			printf("%d : %s", 4, word_days5[r_num2[3]].e_word);
			ans = _getch() - '0';
			if (strcmp(ques, word_days5[r_num2[ans - 1]].e_word) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	return cnt;
}

int print_4Q6(int flag) {
	int r_num[20];
	int r_num2[4];
	char ques[15];
	char answer[15];
	int cnt = 0, ans;
	rand_num(r_num);
	if (flag == 2) {
		for (int i = 0; i < 20; i++) {
			rand_num2(r_num2, r_num[i]);
			strcpy(ques, word_days6[r_num[i]].k_word);
			printf("%d %s", i + 1, word_days6[r_num[i]].e_word);
			gotoxy(0, 2);
			printf("%d : %s", 1, word_days6[r_num2[0]].k_word);
			gotoxy(20, 2);
			printf("%d : %s", 2, word_days6[r_num2[1]].k_word);
			gotoxy(0, 4);
			printf("%d : %s", 3, word_days6[r_num2[2]].k_word);
			gotoxy(20, 4);
			printf("%d : %s", 4, word_days6[r_num2[3]].k_word);
			ans = _getch() - '0';
			if (strcmp(ques, word_days6[r_num2[ans - 1]].k_word) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	else if (flag == 3) {
		for (int i = 0; i < 20; i++) {
			rand_num2(r_num2, r_num[i]);
			strcpy(ques, word_days6[r_num[i]].e_word);
			printf("%d %s", i + 1, word_days6[r_num[i]].k_word);
			gotoxy(0, 2);
			printf("%d : %s", 1, word_days6[r_num2[0]].e_word);
			gotoxy(20, 2);
			printf("%d : %s", 2, word_days6[r_num2[1]].e_word);
			gotoxy(0, 4);
			printf("%d : %s", 3, word_days6[r_num2[2]].e_word);
			gotoxy(20, 4);
			printf("%d : %s", 4, word_days6[r_num2[3]].e_word);
			ans = _getch() - '0';
			if (strcmp(ques, word_days6[r_num2[ans - 1]].e_word) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	return cnt;
}

int print_4Q7(int flag) {
	int r_num[20];
	int r_num2[4];
	char ques[15];
	char answer[15];
	int cnt = 0, ans;
	rand_num(r_num);
	if (flag == 2) {
		for (int i = 0; i < 20; i++) {
			rand_num2(r_num2, r_num[i]);
			strcpy(ques, word_days7[r_num[i]].k_word);
			printf("%d %s", i + 1, word_days7[r_num[i]].e_word);
			gotoxy(0, 2);
			printf("%d : %s", 1, word_days7[r_num2[0]].k_word);
			gotoxy(20, 2);
			printf("%d : %s", 2, word_days7[r_num2[1]].k_word);
			gotoxy(0, 4);
			printf("%d : %s", 3, word_days7[r_num2[2]].k_word);
			gotoxy(20, 4);
			printf("%d : %s", 4, word_days7[r_num2[3]].k_word);
			ans = _getch() - '0';
			if (strcmp(ques, word_days7[r_num2[ans - 1]].k_word) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	else if (flag == 3) {
		for (int i = 0; i < 20; i++) {
			rand_num2(r_num2, r_num[i]);
			strcpy(ques, word_days7[r_num[i]].e_word);
			printf("%d %s", i + 1, word_days7[r_num[i]].k_word);
			gotoxy(0, 2);
			printf("%d : %s", 1, word_days7[r_num2[0]].e_word);
			gotoxy(20, 2);
			printf("%d : %s", 2, word_days7[r_num2[1]].e_word);
			gotoxy(0, 4);
			printf("%d : %s", 3, word_days7[r_num2[2]].e_word);
			gotoxy(20, 4);
			printf("%d : %s", 4, word_days7[r_num2[3]].e_word);
			ans = _getch() - '0';
			if (strcmp(ques, word_days7[r_num2[ans - 1]].e_word) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	return cnt;
}

int print_4Q8(int flag) {
	int r_num[20];
	int r_num2[4];
	char ques[15];
	char answer[15];
	int cnt = 0, ans;
	rand_num(r_num);
	if (flag == 2) {
		for (int i = 0; i < 20; i++) {
			rand_num2(r_num2, r_num[i]);
			strcpy(ques, word_days8[r_num[i]].k_word);
			printf("%d %s", i + 1, word_days8[r_num[i]].e_word);
			gotoxy(0, 2);
			printf("%d : %s", 1, word_days8[r_num2[0]].k_word);
			gotoxy(20, 2);
			printf("%d : %s", 2, word_days8[r_num2[1]].k_word);
			gotoxy(0, 4);
			printf("%d : %s", 3, word_days8[r_num2[2]].k_word);
			gotoxy(20, 4);
			printf("%d : %s", 4, word_days8[r_num2[3]].k_word);
			ans = _getch() - '0';
			if (strcmp(ques, word_days8[r_num2[ans - 1]].k_word) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	else if (flag == 3) {
		for (int i = 0; i < 20; i++) {
			rand_num2(r_num2, r_num[i]);
			strcpy(ques, word_days8[r_num[i]].e_word);
			printf("%d %s", i + 1, word_days8[r_num[i]].k_word);
			gotoxy(0, 2);
			printf("%d : %s", 1, word_days8[r_num2[0]].e_word);
			gotoxy(20, 2);
			printf("%d : %s", 2, word_days8[r_num2[1]].e_word);
			gotoxy(0, 4);
			printf("%d : %s", 3, word_days8[r_num2[2]].e_word);
			gotoxy(20, 4);
			printf("%d : %s", 4, word_days8[r_num2[3]].e_word);
			ans = _getch() - '0';
			if (strcmp(ques, word_days8[r_num2[ans - 1]].e_word) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	return cnt;
}

int print_4Q9(int flag) {
	int r_num[20];
	int r_num2[4];
	char ques[15];
	char answer[15];
	int cnt = 0, ans;
	rand_num(r_num);
	if (flag == 2) {
		for (int i = 0; i < 20; i++) {
			rand_num2(r_num2, r_num[i]);
			strcpy(ques, word_days9[r_num[i]].k_word);
			printf("%d %s", i + 1, word_days9[r_num[i]].e_word);
			gotoxy(0, 2);
			printf("%d : %s", 1, word_days9[r_num2[0]].k_word);
			gotoxy(20, 2);
			printf("%d : %s", 2, word_days9[r_num2[1]].k_word);
			gotoxy(0, 4);
			printf("%d : %s", 3, word_days9[r_num2[2]].k_word);
			gotoxy(20, 4);
			printf("%d : %s", 4, word_days9[r_num2[3]].k_word);
			ans = _getch() - '0';
			if (strcmp(ques, word_days9[r_num2[ans - 1]].k_word) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	else if (flag == 3) {
		for (int i = 0; i < 20; i++) {
			rand_num2(r_num2, r_num[i]);
			strcpy(ques, word_days9[r_num[i]].e_word);
			printf("%d %s", i + 1, word_days9[r_num[i]].k_word);
			gotoxy(0, 2);
			printf("%d : %s", 1, word_days9[r_num2[0]].e_word);
			gotoxy(20, 2);
			printf("%d : %s", 2, word_days9[r_num2[1]].e_word);
			gotoxy(0, 4);
			printf("%d : %s", 3, word_days9[r_num2[2]].e_word);
			gotoxy(20, 4);
			printf("%d : %s", 4, word_days9[r_num2[3]].e_word);
			ans = _getch() - '0';
			if (strcmp(ques, word_days9[r_num2[ans - 1]].e_word) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	return cnt;
}

int print_4Q10(int flag) {
	int r_num[20];
	int r_num2[4];
	char ques[15];
	char answer[15];
	int cnt = 0, ans;
	rand_num(r_num);
	if (flag == 2) {
		for (int i = 0; i < 20; i++) {
			rand_num2(r_num2, r_num[i]);
			strcpy(ques, word_days10[r_num[i]].k_word);
			printf("%d %s", i + 1, word_days10[r_num[i]].e_word);
			gotoxy(0, 2);
			printf("%d : %s", 1, word_days10[r_num2[0]].k_word);
			gotoxy(20, 2);
			printf("%d : %s", 2, word_days10[r_num2[1]].k_word);
			gotoxy(0, 4);
			printf("%d : %s", 3, word_days10[r_num2[2]].k_word);
			gotoxy(20, 4);
			printf("%d : %s", 4, word_days10[r_num2[3]].k_word);
			ans = _getch() - '0';
			if (strcmp(ques, word_days10[r_num2[ans - 1]].k_word) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	else if (flag == 3) {
		for (int i = 0; i < 20; i++) {
			rand_num2(r_num2, r_num[i]);
			strcpy(ques, word_days10[r_num[i]].e_word);
			printf("%d %s", i + 1, word_days10[r_num[i]].k_word);
			gotoxy(0, 2);
			printf("%d : %s", 1, word_days10[r_num2[0]].e_word);
			gotoxy(20, 2);
			printf("%d : %s", 2, word_days10[r_num2[1]].e_word);
			gotoxy(0, 4);
			printf("%d : %s", 3, word_days10[r_num2[2]].e_word);
			gotoxy(20, 4);
			printf("%d : %s", 4, word_days10[r_num2[3]].e_word);
			ans = _getch() - '0';
			if (strcmp(ques, word_days10[r_num2[ans - 1]].e_word) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	return cnt;
}

int print_4Q11(int flag) {
	int r_num[20];
	int r_num2[4];
	char ques[15];
	char answer[15];
	int cnt = 0, ans;
	rand_num(r_num);
	if (flag == 2) {
		for (int i = 0; i < 20; i++) {
			rand_num2(r_num2, r_num[i]);
			strcpy(ques, word_days11[r_num[i]].k_word);
			printf("%d %s", i + 1, word_days11[r_num[i]].e_word);
			gotoxy(0, 2);
			printf("%d : %s", 1, word_days11[r_num2[0]].k_word);
			gotoxy(20, 2);
			printf("%d : %s", 2, word_days11[r_num2[1]].k_word);
			gotoxy(0, 4);
			printf("%d : %s", 3, word_days11[r_num2[2]].k_word);
			gotoxy(20, 4);
			printf("%d : %s", 4, word_days11[r_num2[3]].k_word);
			ans = _getch() - '0';
			if (strcmp(ques, word_days11[r_num2[ans - 1]].k_word) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	else if (flag == 3) {
		for (int i = 0; i < 20; i++) {
			rand_num2(r_num2, r_num[i]);
			strcpy(ques, word_days11[r_num[i]].e_word);
			printf("%d %s", i + 1, word_days11[r_num[i]].k_word);
			gotoxy(0, 2);
			printf("%d : %s", 1, word_days11[r_num2[0]].e_word);
			gotoxy(20, 2);
			printf("%d : %s", 2, word_days11[r_num2[1]].e_word);
			gotoxy(0, 4);
			printf("%d : %s", 3, word_days11[r_num2[2]].e_word);
			gotoxy(20, 4);
			printf("%d : %s", 4, word_days11[r_num2[3]].e_word);
			ans = _getch() - '0';
			if (strcmp(ques, word_days11[r_num2[ans - 1]].e_word) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	return cnt;
}

int print_4Q12(int flag) {
	int r_num[20];
	int r_num2[4];
	char ques[15];
	char answer[15];
	int cnt = 0, ans;
	rand_num(r_num);
	if (flag == 2) {
		for (int i = 0; i < 20; i++) {
			rand_num2(r_num2, r_num[i]);
			strcpy(ques, word_days12[r_num[i]].k_word);
			printf("%d %s", i + 1, word_days12[r_num[i]].e_word);
			gotoxy(0, 2);
			printf("%d : %s", 1, word_days12[r_num2[0]].k_word);
			gotoxy(20, 2);
			printf("%d : %s", 2, word_days12[r_num2[1]].k_word);
			gotoxy(0, 4);
			printf("%d : %s", 3, word_days12[r_num2[2]].k_word);
			gotoxy(20, 4);
			printf("%d : %s", 4, word_days12[r_num2[3]].k_word);
			ans = _getch() - '0';
			if (strcmp(ques, word_days12[r_num2[ans - 1]].k_word) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	else if (flag == 3) {
		for (int i = 0; i < 20; i++) {
			rand_num2(r_num2, r_num[i]);
			strcpy(ques, word_days12[r_num[i]].e_word);
			printf("%d %s", i + 1, word_days12[r_num[i]].k_word);
			gotoxy(0, 2);
			printf("%d : %s", 1, word_days12[r_num2[0]].e_word);
			gotoxy(20, 2);
			printf("%d : %s", 2, word_days12[r_num2[1]].e_word);
			gotoxy(0, 4);
			printf("%d : %s", 3, word_days12[r_num2[2]].e_word);
			gotoxy(20, 4);
			printf("%d : %s", 4, word_days12[r_num2[3]].e_word);
			ans = _getch() - '0';
			if (strcmp(ques, word_days12[r_num2[ans - 1]].e_word) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	return cnt;
}

int print_4Q13(int flag) {
	int r_num[20];
	int r_num2[4];
	char ques[15];
	char answer[15];
	int cnt = 0, ans;
	rand_num(r_num);
	if (flag == 2) {
		for (int i = 0; i < 20; i++) {
			rand_num2(r_num2, r_num[i]);
			strcpy(ques, word_days13[r_num[i]].k_word);
			printf("%d %s", i + 1, word_days13[r_num[i]].e_word);
			gotoxy(0, 2);
			printf("%d : %s", 1, word_days13[r_num2[0]].k_word);
			gotoxy(20, 2);
			printf("%d : %s", 2, word_days13[r_num2[1]].k_word);
			gotoxy(0, 4);
			printf("%d : %s", 3, word_days13[r_num2[2]].k_word);
			gotoxy(20, 4);
			printf("%d : %s", 4, word_days13[r_num2[3]].k_word);
			ans = _getch() - '0';
			if (strcmp(ques, word_days13[r_num2[ans - 1]].k_word) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	else if (flag == 3) {
		for (int i = 0; i < 20; i++) {
			rand_num2(r_num2, r_num[i]);
			strcpy(ques, word_days13[r_num[i]].e_word);
			printf("%d %s", i + 1, word_days13[r_num[i]].k_word);
			gotoxy(0, 2);
			printf("%d : %s", 1, word_days13[r_num2[0]].e_word);
			gotoxy(20, 2);
			printf("%d : %s", 2, word_days13[r_num2[1]].e_word);
			gotoxy(0, 4);
			printf("%d : %s", 3, word_days13[r_num2[2]].e_word);
			gotoxy(20, 4);
			printf("%d : %s", 4, word_days13[r_num2[3]].e_word);
			ans = _getch() - '0';
			if (strcmp(ques, word_days13[r_num2[ans - 1]].e_word) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	return cnt;
}

int print_4Q14(int flag) {
	int r_num[20];
	int r_num2[4];
	char ques[15];
	char answer[15];
	int cnt = 0, ans;
	rand_num(r_num);
	if (flag == 2) {
		for (int i = 0; i < 20; i++) {
			rand_num2(r_num2, r_num[i]);
			strcpy(ques, word_days14[r_num[i]].k_word);
			printf("%d %s", i + 1, word_days14[r_num[i]].e_word);
			gotoxy(0, 2);
			printf("%d : %s", 1, word_days14[r_num2[0]].k_word);
			gotoxy(20, 2);
			printf("%d : %s", 2, word_days14[r_num2[1]].k_word);
			gotoxy(0, 4);
			printf("%d : %s", 3, word_days14[r_num2[2]].k_word);
			gotoxy(20, 4);
			printf("%d : %s", 4, word_days14[r_num2[3]].k_word);
			ans = _getch() - '0';
			if (strcmp(ques, word_days14[r_num2[ans - 1]].k_word) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	else if (flag == 3) {
		for (int i = 0; i < 20; i++) {
			rand_num2(r_num2, r_num[i]);
			strcpy(ques, word_days14[r_num[i]].e_word);
			printf("%d %s", i + 1, word_days14[r_num[i]].k_word);
			gotoxy(0, 2);
			printf("%d : %s", 1, word_days14[r_num2[0]].e_word);
			gotoxy(20, 2);
			printf("%d : %s", 2, word_days14[r_num2[1]].e_word);
			gotoxy(0, 4);
			printf("%d : %s", 3, word_days14[r_num2[2]].e_word);
			gotoxy(20, 4);
			printf("%d : %s", 4, word_days14[r_num2[3]].e_word);
			ans = _getch() - '0';
			if (strcmp(ques, word_days14[r_num2[ans - 1]].e_word) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	return cnt;
}

int print_4Q15(int flag) {
	int r_num[20];
	int r_num2[4];
	char ques[15];
	char answer[15];
	int cnt = 0, ans;
	rand_num(r_num);
	if (flag == 2) {
		for (int i = 0; i < 20; i++) {
			rand_num2(r_num2, r_num[i]);
			strcpy(ques, word_days15[r_num[i]].k_word);
			printf("%d %s", i + 1, word_days15[r_num[i]].e_word);
			gotoxy(0, 2);
			printf("%d : %s", 1, word_days15[r_num2[0]].k_word);
			gotoxy(20, 2);
			printf("%d : %s", 2, word_days15[r_num2[1]].k_word);
			gotoxy(0, 4);
			printf("%d : %s", 3, word_days15[r_num2[2]].k_word);
			gotoxy(20, 4);
			printf("%d : %s", 4, word_days15[r_num2[3]].k_word);
			ans = _getch() - '0';
			if (strcmp(ques, word_days15[r_num2[ans - 1]].k_word) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	else if (flag == 3) {
		for (int i = 0; i < 20; i++) {
			rand_num2(r_num2, r_num[i]);
			strcpy(ques, word_days15[r_num[i]].e_word);
			printf("%d %s", i + 1, word_days15[r_num[i]].k_word);
			gotoxy(0, 2);
			printf("%d : %s", 1, word_days15[r_num2[0]].e_word);
			gotoxy(20, 2);
			printf("%d : %s", 2, word_days15[r_num2[1]].e_word);
			gotoxy(0, 4);
			printf("%d : %s", 3, word_days15[r_num2[2]].e_word);
			gotoxy(20, 4);
			printf("%d : %s", 4, word_days15[r_num2[3]].e_word);
			ans = _getch() - '0';
			if (strcmp(ques, word_days15[r_num2[ans - 1]].e_word) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	return cnt;
}

int print_4Q16(int flag) {
	int r_num[20];
	int r_num2[4];
	char ques[15];
	char answer[15];
	int cnt = 0, ans;
	rand_num(r_num);
	if (flag == 2) {
		for (int i = 0; i < 20; i++) {
			rand_num2(r_num2, r_num[i]);
			strcpy(ques, word_days16[r_num[i]].k_word);
			printf("%d %s", i + 1, word_days16[r_num[i]].e_word);
			gotoxy(0, 2);
			printf("%d : %s", 1, word_days16[r_num2[0]].k_word);
			gotoxy(20, 2);
			printf("%d : %s", 2, word_days16[r_num2[1]].k_word);
			gotoxy(0, 4);
			printf("%d : %s", 3, word_days16[r_num2[2]].k_word);
			gotoxy(20, 4);
			printf("%d : %s", 4, word_days16[r_num2[3]].k_word);
			ans = _getch() - '0';
			if (strcmp(ques, word_days16[r_num2[ans - 1]].k_word) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	else if (flag == 3) {
		for (int i = 0; i < 20; i++) {
			rand_num2(r_num2, r_num[i]);
			strcpy(ques, word_days16[r_num[i]].e_word);
			printf("%d %s", i + 1, word_days16[r_num[i]].k_word);
			gotoxy(0, 2);
			printf("%d : %s", 1, word_days16[r_num2[0]].e_word);
			gotoxy(20, 2);
			printf("%d : %s", 2, word_days16[r_num2[1]].e_word);
			gotoxy(0, 4);
			printf("%d : %s", 3, word_days16[r_num2[2]].e_word);
			gotoxy(20, 4);
			printf("%d : %s", 4, word_days16[r_num2[3]].e_word);
			ans = _getch() - '0';
			if (strcmp(ques, word_days16[r_num2[ans - 1]].e_word) == 0) {
				cnt++;
				Sleep(500);
				system("cls");
				printf("Correct");
				Sleep(500);
				system("cls");
			}
			else {
				Sleep(500);
				system("cls");
				printf("Wrong");
				Sleep(500);
				system("cls");
			}
		}
	}
	return cnt;
}
