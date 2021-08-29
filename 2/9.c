//Да се напише програма, каде што за даден број N внесен преку тастатура, ќе испечати: "Tik" доколку е делив со 3, "Tak" доколку е делив со 5, "Tik - Tak" доколку е делив со 3 и со 5. Доколку бројот не е делив со 3 ни со 5, тогаш да се испечати "Losh Broj". (Без наводници, ставени се за читливост)
#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);

	if (a % 15 == 0)
		printf("Tik - Tak");
	else if (a % 5 == 0)
		printf("Tak");
	else if (a % 3 == 0)
		printf("Tik");
	else
		printf("Losh Broj");

	return 0;
}