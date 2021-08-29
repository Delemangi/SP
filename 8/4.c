/*
Да се напише функција revertString(char *a, char *b, char *comparator) која ќе ги преврти стринговите a и b и потоа ќе врати еден од нив во зависност од стрингот comparator, кој доколку има вредност pogolem се враќа лексикографски поголемиот или доколку има вредност pomal се враќа лексикографски помалиот. Доколку двата стрингови се еднакви, не е битно кој стринг ќе се врати.

Во главниот дел од програмата треба N пати да се прочитаат 3 стрингови и за нив да се испечати резулататот од revertString функцијата.

Забелешка: За стрингот comparator се смета дека не е case-sensitive. На пример за вредностите poGolEm и POGoleM функцијата треба да врати ист резултат. Доколку пак comparator има непозната вредност да се врати стрингот "Invalid comparator".
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

char *revert(char *a, char *b, char *c)
{
	char *a1 = malloc(strlen(a));
	char *b1 = malloc(strlen(b));
	char *mal = "pomal";
	char *golem = "pogolem";
	int pomal = 1;
	int pogolem = 1;

	for (int i = 0; i < strlen(a); i++)
		*(a1 + i) = *(a + strlen(a) - i - 1);

	for (int i = 0; i < strlen(b); i++)
		*(b1 + i) = *(b + strlen(b) - i - 1);

	for (int i = 0; *(c + i) != '\0'; i++)
	{
		if (pomal)
			if (tolower(c[i]) != mal[i])
				pomal = 0;

		if (pogolem)
			if (tolower(c[i]) != golem[i])
				pogolem = 0;
	}

	if (pomal)
		return strcmp(a1, b1) > 0 ? b1 : a1;
	else if (pogolem)
		return strcmp(a1, b1) > 0 ? a1 : b1;
	else
		return "Invalid comparator";
}

int main()
{
	int n;
	char a[100], b[100], c[100];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", a);
		scanf("%s", b);
		scanf("%s", c);

		printf("%s\n", revert(a, b, c));
	}
	return 1;
}