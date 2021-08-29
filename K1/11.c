/*
Цик-цак е број за кој важи дека за секој пар соседни цифри во бројот важи дека едната е помала од 5, а другата е поголема или еднаква на 5. На пример, ако бројот x е составен од цифрите a, b, c и d, тогаш за нив важи:

a<5, b>=5, c<5, d>=5 или a>=5, b<5, c>=5, d<5

Пр.  508294, 2638, 81
Од тастатура се читаат непознат број на цели броеви поголеми од или еднакви на 10 (броевите помали од 10 се игнорираат). Читањето завршува во моментот кога ќе се прочита знак што не е цифра. Да се испечатат сите цик-цак броеви.
*/
#include <stdio.h>

int zigzag(int a)
{
	int flag = 4;
	while (a != 0)
	{
		if (a % 10 < 5)
		{
			if (flag == 1)
				return 0;

			flag = 1;
		}
		else if (a % 10 >= 5)
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