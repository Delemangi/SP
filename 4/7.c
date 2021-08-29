/*
За дадена низа со големина N, прочитајте ги сите елементи од дадениот влез, а потоа сортирајте ја низата. Испечатете ја во растечки редослед.

Пример:

Влез:

5

4 3 2 5 1

Излез:

1 2 3 4 5
*/
#include <stdio.h>

int main()
{
	int a[1000];
	int n;
	int z;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	for (int i = 0; i < n - 1; i++)
		for (int j = 0; j < n - 1 - i; j++)
			if (a[j] > a[j + 1])
			{
				z = a[j];
				a[j] = a[j + 1];
				a[j + 1] = z;
			}

	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);

	return 0;
}