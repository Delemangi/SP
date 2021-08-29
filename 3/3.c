//Да се напише програма во која во даден опсег на природни броеви [a,b], ќе се најдат и отпечатат сите броеви чијшто збир на цифри кои се деливи со 2 е поголем од 0 и е делив со 4. На крај да се отпечати и бројот на вакви броеви.
#include <stdio.h>

int zbir(int a)
{
	int c = 0;

	while (a != 0)
	{
		if (a % 2 == 0)
			c += a % 10;
		a /= 10;
	}

	if (c % 4 == 0 && c != 0)
		return 1;
	else return 0;
}

int main()
{
	int a, b;
	int c = 0;
	scanf("%d%d", &a, &b);

	for (int i = a; i <= b; i++)
		if (zbir(i) == 1)
		{
			printf("%d\n", i);
			c++;
		}

	printf("Vkupno: %d", c);
	return 0;
}