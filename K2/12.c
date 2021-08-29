//Да се напише програма во која од дадена датотека со име "input.txt" за секој ред ќе се отпечати бројот на цифри во тој ред, знакот :, па самите цифри подредени според ASCII кодот во растечки редослед. Редовите во датотеката не се подолги од 100 знаци.
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void wtf()
{
    FILE *f = fopen("input.txt", "w");
    char c;
    while ((c = getchar()) != EOF)
    {
        fputc(c, f);
    }
    fclose(f);
}

void sort(int a[], int n)
{
    int temp;

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++)
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
}

int main()
{
    wtf();

    FILE *f = fopen("input.txt", "r");
    char str[100];
    int nums[100];
    int j;

    while (!feof(f))
    {
        fgets(str, 100, f);

        if (feof(f))
            break;

        j = 0;

        for (int i = 0; i < strlen(str); i++)
            if (str[i] >= '0' && str[i] <= '9')
            {
                nums[j] = (int) (str[i] - '0');
                j++;
            }

        sort(nums, j);

        printf("%d:", j);
        for (int i = 0; i < j; i++)
            printf("%d", nums[i]);
        printf("\n");
    }
}