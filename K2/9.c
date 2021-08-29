/*
Во дадена датотека dat.txt да се најде најдолгиот ред во кој има барем 2 цифри. На стандарден излез да се испечатат знаците од најдолгиот ред кои се наоѓаат помеѓу првата и последната цифра (заедно со тие 2 цифри) во истиот редослед. Доколку има повеќе такви редови се печати последниот. Се претпоставува дека ниту еден ред на датотеката не е подолг од 100 знаци.

Пример.

Влез: 
dat.txt:
    aaa123aa222aa2aaa23aaaaa22
    aaaaaaaaaaaa 23aaaa
    123 aaa aaa aaa aaa 12345 aaa aaa 2a

Излез:
    123 aaa aaa aaa aaa 12345 aaa aaa 2
*/
#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <ctype.h>

int hasNumbers(char *c)
{
    int num = 0;

    for (int i = 0; i < strlen(c); i++)
    {
        if (isdigit(c[i]))
            num++;

        if (num == 2)
            return 1;
    }

    return 0;
}

void numbers(char *c, char *a, char *b)
{
    for (int i = 0; i < strlen(c); i++)
        if (isdigit(c[i]))
        {
            a = c + i;
            return;
        }

    for (int i = strlen(c) - 1; i >= 0; i--)
        if (isdigit(c[i]))
        {
            b = c + i;
            return;
        }
}

void wtf()
{
    FILE *f = fopen("dat.txt", "w");
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

    FILE *f = fopen("dat.txt", "r");
    char *c = malloc(101 * sizeof(char));
    int i = 0;
    char j = 0;
    char *begin;
    char *end;
    int maxlen = 0;
    int maxindex = 0;


    while (!feof(f))
    {
        fgets(c, 101, f);

        if (strlen(c) >= maxlen && hasNumbers(c))
        {
            maxlen = strlen(c);
            maxindex = i;
        }

        i++;
    }
    fclose(f);

    f = fopen("dat.txt", "r");

    while (!feof(f))
    {
        fgets(c, 101, f);

        if (j == maxindex)
            break;

        j++;
    }

    for (int k = 0; k < strlen(c); k++)
        if (isdigit(c[k]))
        {
            begin = &c[k];
            break;
        }

    for (int k = strlen(c) - 1; k >= 0; k--)
        if (isdigit(c[k]))
        {
            end = &c[k];
            break;
        }

    while (begin != end + 1)
    {
        printf("%c", *begin);
        begin++;
    }
}