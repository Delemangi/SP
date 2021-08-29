/*
Дефинирајте ја рекурзивната функција "sumOfDigits(int number)" така што за дадениот аргумент "number" ќе ја пресмета сумата на сите негови цифри. Пример за аргумент "1234" функцијата треба да врати 1 + 2 + 3 + 4 = 10.

Не правете промени во дадената main функција, само дефинирајте ја рекурзивната функција.
*/
#include <stdio.h>

int func(int n)
{
	if (n == 0)
		return 0;
	return n % 10 + func(n / 10);
}

int main()
{
	int n, a, c = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a);

		printf("%d\n", func(a));

		c += func(a);
	}
	printf("%d", c);
}