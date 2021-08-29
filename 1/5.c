/*Да се напише програма која за дадена сума на пари, ќе испечати со колку најмалку банкноти и монети може да се исплати. На влез се чита еден цел број. На излез се печатат 9 редови, по колку банкноти или монети од секој апоен ни се потребни за да ја исплатиме сумата. Пример 1583 денари, најдобро е да се исплати како:

0*5000

1*1000

1*500

0*100

1*50

3*10

0*5

1*2

1*1
*/
#include <stdio.h>

int main()
{
	int c;
	int b5000, b1000, b500, b100, b50, b10, b5, b2;
	scanf("%d", &c);

	b5000 = c / 5000;
	c -= b5000 * 5000;
	b1000 = c / 1000;
	c -= b1000 * 1000;
	b500 = c / 500;
	c -= b500 * 500;
	b100 = c / 100;
	c -= b100 * 100;
	b50 = c / 50;
	c -= b50 * 50;
	b10 = c / 10;
	c -= b10 * 10;
	b5 = c / 5;
	c -= b5 * 5;
	b2 = c / 2;
	c -= b2 * 2;

	printf("%d*5000\n", b5000);
	printf("%d*1000\n", b1000);
	printf("%d*500\n", b500);
	printf("%d*100\n", b100);
	printf("%d*50\n", b50);
	printf("%d*10\n", b10);
	printf("%d*5\n", b5);
	printf("%d*2\n", b2);
	printf("%d*1\n", c);

	return 0;
}
