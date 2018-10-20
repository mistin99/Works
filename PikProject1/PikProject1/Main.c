#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <math.h>
#pragma warning(disable : 4996);

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a, b, c;
	double  re, im, d;

	printf("\n  Въведи a: ");
	scanf("%d", &a);
	printf("\n Въведи b: ");
	scanf("%d", &b);
	printf("\n Въведи c: ");
	scanf("%d", &c);


	if (a == 0 && b == 0) {
		printf("\n Изродено уравнение!");
	}
	else {
		if (a == 0) {
			printf("\n Линейно уравнение x= %.2lf", -c / b);
		}
		else {
			if (c == 0) {
				printf("\n Два корена: x1= %.2lf, x2=0", -b / a);
			}
			else {
				re = -b / (2 * a);
				d = b * b - (4 * a*c);
				im = sqrt(fabs(d)) / (2 * a);

				if (d > 0) {
					printf(" Два корена: x1= %.2lf, x2=%.2lf", re + im, re - im);
				}
				else {
					if (d < 0) {
						printf("Комплексни числа: (%.2lf, %.2lf); (%.2lf, %.2lf)", re, im, re, -im);
					}
					else printf("два равни корена: x1 = x2, x1=%.2lf", re);
				}

			}
		}

	}
	printf("\n");

	system("pause");

	return 0;
}