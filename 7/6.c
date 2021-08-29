//Да се напише рекурзивна функција за наоѓање на НЗД на два броја а и b, каде a > b. Потсетник: За наоѓање на НЗД може да се користи Евклидовиот алгоритам.
#include <stdio.h>

int func(int a, int b)
{
	if (a == 0)
		return b;
	return func(b % a, a);
}

int main()
{
	int n;
	int m;
	scanf("%d%d", &n, &m);

	printf("%d", func(n, m));
}