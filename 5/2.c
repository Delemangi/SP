//Да се напише програма која ќе прочита два природни броја. Програмата треба да провери дали сите цифри од првиот број се појавуваат во вториот број. Ако овој услов е исполнет, програмата печати DA, во спротивно NE.
#include <stdio.h>

int cool(int a, int b)
{
	int c;
	int d;

	while (a != 0)
	{
		c = 0;
		d = b;

		while (d != 0)
		{
			if (d % 10 == a % 10)
			{
				c = 1;
				break;
			}
			d /= 10;
		}

		if (c == 0)
			return 0;

		a /= 10;
	}

	return 1;
}

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);

	if (cool(a, b) == 1)
		printf("DA");
	else
		printf("NE");

	return 0;
}