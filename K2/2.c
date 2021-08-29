/*
Во дадена датотека “broevi.txt” се запишани повеќе редови со броеви така што секој ред започнува со еден цел број (N>=1) што означува колку броеви следуваат по него во тој ред. Да се напише програма која на СИ за секој ред ќе го испечати бројот со најголема најзначајна цифра. Читањето на броеви завршува кога ќе се прочита 0.
*/
#include <stdio.h>

void wtf()
{
	FILE *f = fopen("broevi.txt", "w");
	char c;
	while ((c = getchar()) != EOF)
	{
		fputc(c, f);
	}
	fclose(f);
}

int main()
{
	wtf();

	FILE *f;
	int n;
	int temp;
	int a[100];
	int b[100];
	int digits;
	int maxDigit;
	int num;

	if (!(f = fopen("broevi.txt", "r")))
		return -1;

	while (!feof(f))
	{
		fscanf(f, "%d", &n);
		if (n == 0)
			break;
		else
			for (int i = 0; i < n; i++)
				fscanf(f, "%d", &a[i]);

		for (int i = 0; i < n; i++)
		{
			temp = a[i];
			b[i] = a[i];
			digits = 0;

			while (temp != 0)
			{
				digits++;
				temp /= 10;
			}

			for (int j = 0; j < digits - 1; j++)
				b[i] /= 10;
		}

		num = maxDigit = 0;

		for (int i = 0; i < n; i++)
			if (maxDigit < b[i])
			{
				maxDigit = b[i];
				num = a[i];
			}

		printf("%d\n", num);
	}
}