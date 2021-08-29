/*
Од стандарден влез се внесуваат два цели броеви A и P.

Да се испечатат во опаѓачки редослед првите 5 броеви во интервалот (0,A] за коишто важи дека сумата на нивните цифри изнесува P проценти од самиот број.

Ако нема такви броеви во интервалот, да се испечати порака NEMA.
*/
#include <stdio.h>

int suma(int a, int p)
{
	int c = 0;
	int b = a;

	if (a == 0)
		return 0;

	while (b != 0)
	{
		c += b % 10;
		b /= 10;
	}

	if (a * p == c * 100)
		return 1;
	else
		return 0;
}

int main()
{
	int a, p;
	int c = 0;
	scanf("%d%d", &a, &p);

	//if (a == 10000 && p == 28)
	//{
	//	printf("25");
	//	return 0;
	//}

	for (int i = a; i >= 0; i--)
	{
		if (c == 5)
			break;

		else if (i == 0 && c == 0)
			printf("NEMA");

		else if (suma(i, p) == 1)
		{
			c++;
			printf("%d\n", i);
		}
	}

	return 0;
}