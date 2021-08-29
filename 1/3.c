//Да се напише програма коjа за даден цел броj секунди коj се чита од стандарден влез, ќе ги отпечати на екран соодветните вредности во часови, минути и секунди.
#include <stdio.h>

int main()
{
	int d;
	scanf("%d", &d);

	int h = d / 3600;
	int m = (d - (h * 3600)) / 60;
	int s = d - (h * 3600) - (m * 60);

	printf("%d sekundi se %d casovi, %d minuti i %d sekundi", d, h, m, s);

	return 0;
}
