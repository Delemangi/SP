/*
Дадена е текстуална датотека (livce.txt) која претставува ливче во спортска обложувалница.

На почетокот во датотеката, во посебен ред е запишана сумата на уплата (цел број).

Потоа во секој ред од датотеката е запишан по еден тип во следниот формат:

ab12 1 1.25
Првиот број е шифрата на типот (низа од знаци која не е подолга од 9 знаци), вториот број е типот (може да биде 1, 0 или 2) додека третиот број е коефициентот (реален број).

Ваша задача е да се испечати типот со најголем коефициент како и можната добивка на ливчето. Доколку има повеќе типови со ист максимален коефициент, да се испечати првиот.

Можната добивка се пресметува како производ на сите коефициенти со сумата на уплата.
*/
#include <stdio.h>

void wf()
{
	FILE *f = fopen("livce.txt", "w");
	char c;
	while ((c = getchar()) != '#')
	{
		fputc(c, f);
	}
	fclose(f);
}

int main()
{
	wf();

	FILE *f = fopen("livce.txt", "r");
	int i = 0;
	float payout = 0;
	int pay;
	char code[100][100];
	int type[100];
	float coefficient[100];
	float maxCo = 0;
	int index = 0;

	fscanf(f, "%d", &pay);

	while (!feof(f))
	{
		fscanf(f, "%s %d %f", code[i], &type[i], &coefficient[i]);

		if (feof(f))
			break;

		i++;
	}

	payout += pay;
	for (int j = 0; j < i; j++)
		payout *= coefficient[j];

	for (int j = 0; j < i; j++)
		if (maxCo < coefficient[j])
		{
			maxCo = coefficient[j];
			index = j;
		}

	printf("%s %d %.2f\n%.2f", code[index], type[index], coefficient[index], payout);
}