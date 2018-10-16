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

	printf("\n Enter a: ");
	scanf("%d", &a);
	printf("\n Enter b: ");
	scanf("%d", &b);
	printf("\n Enter c: ");
	scanf("%d", &c);


	if (a == 0 && b == 0) {
		printf("\n izrodeno uravnenie!");
	}
	else {
		if (a == 0) {
			printf("\n lineyno uravnenie x= %.2lf", -c / b);
		}
		else {
			if (c == 0) {
				printf("\n dva korena: x1= %.2lf, x2=0", -b / a);
			}
			else {
				re = -b / (2 * a);
				d = b * b - (4 * a*c);
				im = sqrt(fabs(d)) / (2 * a);

				if (d > 0) {
					printf("dva korena: x1= %.2lf, x2=%.2lf", re + im, re - im);
				}
				else {
					if (d < 0) {
						printf("kompleksni chisla: (%.2lf, %.2lf); (%.2lf, %.2lf)", re, im, re, -im);
					}
					else printf("dva ravni korena: x1 = x2, x1=%.2lf", re);
				}

			}
		}

	}
	printf("\n");

	system("pause");

	return 0;
}