/*
Да се напише функцијата matematickaOperacija (int a, int b, char operation, int rezultat) која што нема да враќа резултат. Целта на функцијата е врз основа на аргументот operation да изврши определена математичка операција, и резултатот од истата да го смести во rezultat. Возможни вредности за operation се:

+ (собирање)
- (разлика)
* (производ)
/ (делење)
% (остаток)
Да не се менува main функцијата, освен во делот каде е експлицитно назначено!
*/
#include <stdio.h>

void func(int a, int b, char o, int *z)
{
	if (o == '+')
		*z = a + b;
	else if (o == '-')
		*z = a - b;
	else if (o == '*')
		*z = a * b;
	else if (o == '/')
		*z = a / b;
	else if (o == '%')
		*z = a % b;
}

int main()
{
	int a, b, z;

	scanf("%d%d", &a, &b);

	func(a, b, '+', &z);
	printf("%d + %d -> %d\n", a, b, z);
	func(a, b, '-', &z);
	printf("%d - %d -> %d\n", a, b, z);
	func(a, b, '*', &z);
	printf("%d * %d -> %d\n", a, b, z);
	func(a, b, '/', &z);
	printf("%d / %d -> %d\n", a, b, z);
	func(a, b, '%', &z);
	printf("%d %% %d -> %d\n", a, b, z);
}