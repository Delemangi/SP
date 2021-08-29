/*
Цик-цак е број за кој што важи дека за секој пар соседни цифри, тие се наизменично поголеми односно помали една во однос на друга. На пример, ако бројот x е составен од цифрите a, b, c, d и е, тогаш за нив важи:

a>b, b<c, c>d, d<e или a<b, b>c, c<d, d>e

Пр. 343, 4624, 6231209
Од тастатура се читаат непознат број цели броеви поголеми од или еднакви на 10 (броевите помали од 10 се игнорираат). Читањето завршува во моментот кога ќе се прочита знак што не е цифра. Да се испечатат сите цик-цак броеви.
*/
#include <stdio.h>

int zigzag(int a)
{
	int flag = 4;
	while (a > 9)
	{
		if (a % 10 > a / 10 % 10)
		{
			if (flag == 1)
				return 0;

			flag = 1;
		}
		else if (a % 10 < a / 10 % 10)
		{
			if (flag == 0)
				return 0;

			flag = 0;
		}
		else
			return 0;

		a /= 10;
	}
	return 1;
}

int main1()
{
	int a;
	scanf("%d", &a);
	printf("%d", zigzag(a));
	return 0;
}

int main()
{
	int a[100];
	int i = 0;
	char c = '0';

	while (c != 'k')
	{
		scanf("%d", &a[i]);
		i++;
		c = getchar();
	}

	for (int j = 0; j < i - 1; j++)
		if (zigzag(a[j]) == 1 && a[j] > 9)
			printf("%d\n", a[j]);

	//while (1)
	//{
	//	scanf("%d%c", &b, &c);
	//	if (c == 'k')
	//	{
	//		break;
	//	}
	//	printf("%d", b);
	//}

	return 0;
}