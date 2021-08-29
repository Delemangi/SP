//Да се напише програма која ќе ги изведува основните математички операции (+, -, *, /, %) врз два броја кои се читаат од стандарден влез.
#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);

	printf("a + b = %d\n", a + b);
	printf("a - b = %d\n", a - b);
	printf("a * b = %d\n", a * b);
	printf("a / b = %d\n", a / b);
	printf("a %% b = %d\n", a % b);

	return 0;
}
