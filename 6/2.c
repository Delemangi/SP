/*
За дадена квадратна матрица со големина N, најдете ја разликата помеѓу главната и споредната дијагонала, а потоа разликата помеѓу првата колона и последната колона на матрицата.

Пример:

Влез: 3

1 2 3

1 1 1

2 2 2

Излез:

-2

-2
*/
#include <stdio.h>

int main()
{
	int a[100][100];
	int n;
	int d = 0, k = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			scanf("%d", &a[i][j]);


	for (int i = 0; i < n; i++)
		d += a[i][i];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (i + j == n - 1)
				d -= a[i][j];

	for (int i = 0; i < n; i++)
	{
		k += a[i][0];
		k -= a[i][n - 1];
	}

	printf("%d\n%d", d, k);
}