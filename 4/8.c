/*
Од тастатура се внесува низа од целобројни елементи А со должина N ( N <= 100). Дополнително се внесува и број К. Да се трансформира низата така што на почеток ќе се преместат сите елементи помали од K, а после нив ќе следуваат броевите поголеми или еднакви на K. Редоследот на елементите да не се менува.

Испечатете ги елементите на трансформираната низа во еден ред на стандарден излез разделени со празно место.

Пример:
A[] = {1, 3, 2, 5, 9, 0, 8, 10}, K=6
Трансформираната низа ќе биде:
A[] = {1, 3, 2, 5, 0, 9, 8, 10}

A[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0}, K=6
Трансформираната низа ќе биде:
A[] = {5, 4, 3, 2, 1, 0, 10, 9, 8, 7, 6}

A[]={2, 4, 6, 8, 10}, K = 5
Трансформираната низа ќе биде:
A[] = {2, 4, 6, 8, 10}

A[]={1, 3, 5, 7, 9} K = 5
Трансформираната низа ќе биде:
A[] = {1, 3, 5, 7, 9}
*/
#include <stdio.h>

int main()
{
	int a[200];
	int b[200];
	int n;
	int k;
	int d = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	scanf("%d", &k);

	for (int i = 0; i < n; i++)
		if (a[i] < k)
		{
			b[d] = a[i];
			d++;
			a[i] = EOF;
		}

	for (int i = 0; i < n; i++)
		if (a[i] != EOF)
		{
			b[d] = a[i];
			d++;
		}

	for (int i = 0; i < d; i++)
		printf("%d ", b[i]);

	return 0;
}