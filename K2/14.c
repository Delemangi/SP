/*
Oд стандарден влез се вчитува еден цел број X, димензии на матрица M и N (цели броеви), како и елементите на матрицата со димензии M x N (цели броеви). Да се напише програма што ќе ги промени редиците на матрицата на следниот начин:

Ако збирот на елементите од редот е поголем од X, елементите на тој ред добиваат вредност 1
Ако збирот на елементите од редот е помал од X, елементите на тој ред добиваат вредност -1
Ако збирот на елементите од редот е еднаков на X, елементите на тој ред добиваат вредност 0
Променетата матрица да се испечати на екран.

Пример.

Влез:

31

4317652881415716945111576

Излез:

−1−1100−1−1100−1−1100−1−1100
*/
#include <stdio.h>

int main()
{
	int x, m, n, z;
	int a[100][100];

	scanf("%d%d%d", &x, &m, &n);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			scanf("%d", &a[i][j]);

	for (int i = 0; i < m; i++)
	{
		z = 0;

		for (int j = 0; j < n; j++)
			z += a[i][j];

		if (z > x)
			for (int j = 0; j < n; j++)
				a[i][j] = 1;
		else if (z < x)
			for (int j = 0; j < n; j++)
				a[i][j] = -1;
		else
			for (int j = 0; j < n; j++)
				a[i][j] = 0;
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
}