//Да се имплементира функција elka(int n) што на стандарден излез ќе печати новогодишна елка од ѕвезди. n означува колку ѕведички има основата на елката и во сите тест примери n е непарен број.
#include <stdio.h>

void elka(int n)
{
	for (int i = 0; i < n / 2 + 1; i++)
	{
		for (int j = 0; j < n; j++)
			if (j >= n / 2.0 - i - 0.5 && j <= n / 2.0 + i)
				printf("*");
			else
				printf(" ");
		printf("\n");
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	elka(n);
}