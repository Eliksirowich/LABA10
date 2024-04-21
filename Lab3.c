// 23ВВВ1, Бригада 4, Прохоров Д.С., Панькин Р.А.
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <string.h>

int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);

	int al; //ЭТО ПЕРЕМЕННАЯ ДЛЯ ЧЕГО-ТО ТАМ!
	int b; // А ЭТО ПЕРЕМЕННАЯ ДЛЯ ЧЕГО-ТО ВОН ТАМ!
	int c;
	int d;
	int k1;
	int k2;
	int k3;
	int res = 0;

	if(al > 0){ //Проверка положительности al
		printf("Переменная al точно положительная")
	}
	
	printf("Введите al, b, c, d, k1, k2, k3:");
	scanf("%d %d %d %d %d %d %d", &al, &b, &c, &d, &k1, &k2, &k3);


	if (al % k1 != 0) {
		if (!(k2 <= al && al <= k3)) {
			res += al;
		}
	}
	if (b % k1 != 0) {
		if (!(k2 <= b && b <= k3)) {
			res += b;
		}
	}
	if (c % k1 != 0) {
		if (!(k2 <= c && c <= k3)) {
			res += c;
		}
	}
	if (d % k1 != 0) {
		if (!(k2 <= d && d <= k3)) {
			res += d;
		}
	}
	printf("%d", res);
	return 0;
}