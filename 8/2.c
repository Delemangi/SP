/*
Да се напишат следните функции за работа со низи од децимални броеви:

Функцијата double max (double * niza, int n), што како резултат ќе го врати максимумот во низата niza со n елементи.
Функцијата double min (double * niza, int n), што како резултат ќе го врати минимумот во низата niza со n елементи.
Функцијата void normalize (double * niza, int n), што ќе го нормализира секој елемент од низата по следната формула:

x = (x-min(niza)) / (max(niza) - min(niza))

Функција void sort (double * niza, int n) што ќе ја сортира низата во опаѓачки редослед!

Да не се менува main функцијата и да не се користи операторот за пристап до елемент на низа [ ]!
*/
#include <stdio.h>

double max(double *a, int n)
{
	double max = *a;

	for (int i = 1; i < n; i++)
		if (*(a + i) > max)
			max = *(a + i);

	return max;
}

double min(double *a, int n)
{
	double min = *a;

	for (int i = 1; i < n; i++)
		if (*(a + i) < min)
			min = *(a + i);

	return min;
}

void norm(double *a, int n)
{
	double ma = max(a,n);
	double mi = min(a,n);
	
	for (int i = 0; i < n; i++)
		*(a + i) = (*(a + i) - mi) / (ma - mi);
}

void sort(double *a, int n)
{
	double temp;

	while (1)
	{
		int c = 1;

		for (int i = 0; i < n; i++)
			if (*(a + i) < *(a + i + 1))
			{
				temp = *(a + i);
				*(a + i) = *(a + i + 1);
				*(a + i + 1) = temp;

				c = 0;
			}

		if (c)
			break;
	}
}

int main()
{
	int n;
	double *a;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%lf", a + i);

	printf("MAX -> %.3lf\n", max(a, n));
	printf("MIN -> %.3lf\n", min(a, n));

	norm(a, n);
	sort(a, n);

	for (int i = 0; i < n; i++)
		printf("%.3lf ", *(a + i));
}