//Да се напише програма во која во даден опсег на природни броеви [m,n], ќе се најдат и отпечатат во нов ред сите броеви за кои важи дека збирот на бројот со неговата слика(број кој ги има истите цифри, но во обратен редослед) е помал или еднаков на двојната вредност на бројот. На крај да се отпечати и бројот на вакви броеви.
#include <stdio.h>

int power(int n, int x)
{
	int c = 1;
	for (int i = 1; i <= x; i++)
		c *= n;
	return c;
}

int digits(int n)
{
	int c = 0;
	while (n != 0)
	{
		n /= 10;
		c++;
	}
	return c;
}

int inverse(int n)
{
	int c = 0;

	for (int i = digits(n); i > 0; i--)
	{
		c += (n % 10) * power(10, i - 1);
		n /= 10;
	}

	return c;
}

int main()
{
	int m, n;
	int c = 0;
	scanf("%d%d", &m, &n);

	for (int i = m; i <= n; i++)
		if (i + inverse(i) <= 2 * i)
		{
			printf("%d\n", i);
			c++;
		}

	printf("Vkupno: %d", c);
	return 0;

	//int k = 1234;
	//printf("%d\n", inverse(k));
	//printf("%d\n", digits(k));
}