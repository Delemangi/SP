/*
За дадени освоени поени пишете ја оценката која го следи студентот според дадените табели.

0-50 = 5

51-60 = 6

61-70 = 7

71-80 = 8

81-90 = 9

91-100 = 10

Покрај оценките да се испечатат и знаците + и – во зависност од вредноста на последната цифра на поените:

1 - 3 = "-"

4 - 7 = " "

8-0 = "+"
*/
#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);

	if (a <= 0 || a >= 100)
	{
		printf("Nevalidna vrednost za poeni!");
		return 0;
	}

	printf("Ocenka ");

	if (a >= 0 && a <= 50)
		printf("5");
	else if (a >= 51 && a <= 60)
		printf("6");
	else if (a >= 61 && a <= 70)
		printf("7");
	else if (a >= 71 && a <= 80)
		printf("8");
	else if (a >= 81 && a <= 90)
		printf("9");
	else if (a >= 91 && a <= 100)
		printf("10");

	if (a >= 50)
	{
		if (a % 10 >= 1 && a % 10 <= 3)
			printf("-");
		else if (a % 10 >= 4 && a % 10 <= 7)
			printf(" ");
		else
			printf("+");
	}

	return 0;
}