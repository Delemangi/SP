/*
Дадена е текстуална датотека text.txt.

Да се избројат и испечатат сите последнователни појавувања на соседни самогласки во датотеката. Појавата на големи и мали букви да се игнорира. Пронајдените парови самогласки да се испечатат на екран, секој во нов ред со мали букви. Потоа во нов ред се печати бројот на појавувања на паровите самогласки.

Пример: за датотеката:

IO is short for Input Output
medioio medIo song
излез:

io
ou
io
oi
io
io
6
*/
#include <stdio.h>
#include <ctype.h>
#include <malloc.h>
#include <string.h>

int isVowel(char a)
{
	if (tolower(a) == 'a' || tolower(a) == 'e' || tolower(a) == 'i' || tolower(a) == 'o' || tolower(a) == 'u')
		return 1;
	else
		return 0;
}

void writeToFile()
{
	FILE *f = fopen("text.txt", "w");
	char c;
	while ((c = getchar()) != '#')
	{
		fputc(c, f);
	}
	fclose(f);
}

int main()
{
	writeToFile();

	FILE *f;
	char prev;
	char current;
	int z = 0;

	if (!(f = fopen("text.txt", "r")))
		return -1;

	prev = fgetc(f);

	while ((current = fgetc(f)) != EOF)
	{
		if (isVowel(current) && isVowel(prev))
		{
			printf("%c%c\n", tolower(prev), tolower(current));
			z++;
		}

		prev = current;
	}


	printf("%d", z);

	return 0;
}
