// 23ВВВ1, Бригада 4, Прохоров Д.С., Панькин Р.А.
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <string.h>

int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);

	int al, b, c, d, k1, k2, k3;
	int res = 0;
	printf("Введите a, b, c, d, k1, k2, k3:");
	scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &k1, &k2, &k3);


	if (a % k1 != 0) {
		if (!(k2 <= a && a <= k3)) {
			res += a;
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