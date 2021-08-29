/*
Од стандарден влез се чита позитивен непарен број n (n е најмалку 3) кој ги дава димензиите на квадратната матрица од цели броеви, која се чита во продолжение. Да се напише програма која од таа матрица(макс. 100 x 100) ќе креира нова матрица 2 x 2, која ќе ги има за елементи збировите на елементите на регионите на првата матрица, соодветно. Во продолжение на сликата може да видиме како се добиваат регионите за матрица кога n = 5.



За оваа матрица, резултантната матрица би била:

https://heckgaming.com/HBUuTx.png

17 28
16 28
*/
#include <stdio.h>
#include <math.h>

int main()
{
	int a[100][100];
	int b[2][2];
	int n;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			scanf("%d", &a[i][j]);

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (i < n / 2 && j < n / 2)
				b[0][0] += a[i][j];
			else if (i < n / 2 && j > n / 2)
				b[0][1] += a[i][j];
			else if (i > n / 2 && j < n / 2)
				b[1][0] += a[i][j];
			else if (i > n / 2 && j > n / 2)
				b[1][1] += a[i][j];

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
			printf("%d ", b[i][j]);
		printf("\n");
	}
}