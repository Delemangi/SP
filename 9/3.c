/*
Да се напише програма која што од дадена влезна датотека "text.txt" ќе испечати колку зборови има во секој ред, како и ќе испечати просечен број на зборови во редовите во датотеката. Во рамките на секој ред, кои било два збора се разделени точно со едно празно место.

Дополнително да се испечати редот со најголем број на зборови во него, на начин што секоја мала буква ќе биде голема, а секоја голема ќе биде мала.
*/
#include <stdio.h>
#include <malloc.h>
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

	FILE *f;
	char *c = malloc(1024 * sizeof(char));
	int total = 0;
	int max = 0;
	int row = 0;
	int j = 1;
	int i = 1;
	int words;

	if (!(f = fopen("text.txt", "r")))
		return -1;

	while (!feof(f))
	{
		*c = '\0';
		words = 1;

		fgets(c, 1024, f);

		if (feof(f))
			break;

		while (*c != '\n' && *c != '\0')
		{
			if (*c == ' ')
				words++;
			c++;
		}

		if (max < words)
		{
			max = words;
			row = i;
		}

		total += words;
		i++;

		printf("%d\n", words);
	}

	printf("%.2f\n", (float) total / (i - 1));

	fclose(f);

	if (!(f = fopen("text.txt", "r")))
		return -1;

	while (!feof(f))
	{
		fgets(c, 1024, f);

		if (j == row)
			while (*c != '\n' && *c != '\0')
			{
				if (islower(*c))
					printf("%c", toupper(*c));
				else
					printf("%c", tolower(*c));

				c++;
			}
		j++;
	}
}
