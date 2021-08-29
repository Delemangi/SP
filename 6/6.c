/*
Да се напише програма во која од тастатура се читаат број на редици и колони (не поголеми од 100) и елементи на матрица (цели броеви).

Да се испечати редниот број на колоната (индексот) којашто има најмала сума на елементите. Ако има повеќе колони со иста најмала сума, да се испечати индексот на првата таква колона.

Читањето на елементи во матрицата да се направи преку функција void readMatrix(int a[100][100], int n, int m)
*/
#include <stdio.h>

void read(int a[100][100], int n, int m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			scanf("%d", &a[i][j]);
}

int column(int a[100][100], int n, int m)
{
	int s = -1;
	int p;
	int d;
	for (int j = 0; j < m; j++)
	{
		d = 0;
		for (int i = 0; i < n; i++)
			d += a[i][j];

		if (s == -1)
			s = d;
		else if (s > d)
		{
			s = d;
			p = j;
		}
	}
	return p;
}

int main()
{
	int a[100][100];
	int n, m;

	scanf("%d%d", &n, &m);
	read(a, n, m);
	printf("%d", column(a, n, m));
}