/*
Да се напише функција letterFrequency (char * text, char letter) што за даден letter ќе испечати информации која е релативната фреквенција на појавување на таа буква во текстуалната низа text (како мала и како голема буква). Текстот е ограничен на максимум 1000 карактери.

Релативната фреквенција на буква се пресметува како количник од бројот на појавувања на таа буква и вкупниот број на букви во текстот.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

void func(char *a, char b)
{
	int l = 0, u = 0;

	for (int i = 0; i < strlen(a); i++)
		if (a[i] == tolower(b))
			l++;
		else if (a[i] == toupper(b))
			u++;

	printf("%c -> %.3f%%\n", tolower(b), 100 * (float) l / strlen(a));
	printf("%c -> %.3f%%\n", toupper(b), 100 * (float) u / strlen(a));
}

int main()
{
	char *a = malloc(1000);
	char b;

	fgets(a, 1000, stdin);
	scanf("%c", &b);

	func(a, b);
}