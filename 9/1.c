/*
Да се напише програма која што од датотека со име "text.txt" ќе ги одреди и ќе ги испечати на стандарден излез:

релативната фреквенција на сите мали букви
релативната фреквенција на сите големи букви
Релативната фреквенција на даден(и) карактер(и) се пресметува како количник на вкупното појавување на тој/тие карактер/и со вкупниот број на карактери во текстот (да се игнорираат празните места и специјалните знаци).

Да не се менува функцијата writeToFile().
*/
#include <stdio.h>
#include <ctype.h>

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

	char c;
	int l = 0, u = 0, size = 0;
	FILE *f = fopen("text.txt", "r");

	if (!fopen("text.txt", "r"))
		return -1;

	while ((c = fgetc(f)) != EOF)
	{
		if (islower(c))
		{
			l++;
			size++;
		}
		else if (isupper(c))
		{
			u++;
			size++;
		}
	}

	fclose(f);

	printf("%.4f\n%.4f", (float) u / size, (float) l / size);
}