/*
Од стандарден влез се вчитуваат следните податоци за еден студент на ФИНКИ:

индекс (шестцифрен цел број)
шест оценки од последниот семестар кој го слушал
Да се напише програма која што на стандарден излез ќе ги испечати следните информации за студентот: (погледнете во тест примерите за форматот на печатење)

просек на студентот
просекот да се испечати со точност од 3 децимали
година на студии
студентите чијшто индекс почнува на 17 се трета година, на 16 се четврта година, на 15 се петта година итн.
дали е награден (1 = награден, 0 = не е награден)
Еден студент се наградува доколку има просек еднаков или поголем од 9.5
*/
#include <stdio.h>

int main()
{
	int i, a[6], c = 0;
	scanf("%d", &i);
	for (int j = 0; j < 6; j++)
	{
		scanf("%d", &a[j]);
		c += a[j];
	}

	printf("Prosek: %.3f\n", c / 6.0);
	printf("Student: %d\n", i);
	printf("%d godina\n", 20 - i / 10000);

	if (c / 6.0 >= 9.5)
		printf("Nagraden: 1\n");
	else
		printf("Nagraden: 0\n");

	return 0;
}