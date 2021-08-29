/*
Од тастатура се читаат 2 позитивни цели броеви. Доколку се внесе барем еден негативен број или 0 треба да се печати „Invalid input“.

Треба да се определи дали помалиот број “е парен еквивалент” од поголемиот број.

Еден број “е парен еквивалент” на друг број, ако и само ако неговите цифри се наоѓаат на парните позиции од другиот број, во истиот редослед. Соодветно да се испечатат пораки „PAREN“ и „NE“.

Позициите треба да се сметаат оддесно-налево (најмалку значајната цифра е на позиција 1)
*/
#include <stdio.h>

int power(int n, int k)
{
	int c = 1;
	for (int i = 1; i <= k; i++)
		c *= n;
	return c;
}

int equivalent(int n)
{
	int i = 0;
	int k = 0;
	while (n != 0)
	{
		n /= 10;
		k += (n % 10) * power(10, i);
		n /= 10;
		i++;
	}
	return k;
}

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	if (a <= 0 || b <= 0)
	{
		printf("Invalid input");
		return 0;
	}

	if (a >= b)
		a = equivalent(a);
	else
		b = equivalent(b);

	if (a == b)
		printf("PAREN");
	else
		printf("NE");

	return 0;
}