/*
Во датотеката podatoci.txt се запишани редови со низи од знаци (секој не подолг од 80 знаци).

Од стандарден влез се читаат два знака z1 и z2. Да се напише програма со која на стандарден излез ќе се испечатат поднизите од секој ред од датотеката составени од знаците што се наоѓаат меѓу z1 и z2 (без нив). Секоја подниза се печати во нов ред.

Се смета дека секој ред од датотеката точно еднаш ги содржи знаците z1 и z2, знакот z1 секогаш се наоѓа пред знакот z2, а меѓу z1 и z2 секогаш има барем еден знак.
*/
#include <stdio.h>
#include <ctype.h>
#include <malloc.h>
#include <string.h>

void wtf()
{
    FILE *f = fopen("podatoci.txt", "w");
    char c;
    while ((c = getchar()) != '#')
    {
        fputc(c, f);
    }
    fclose(f);
}

int main()
{
    wtf();

    FILE *f = fopen("podatoci.txt", "r");
    char a[3];
    char str[100];
    str[0] = '\0';
    int begin, end;

    scanf("%s", a);

    if (strlen(a) == 1)
    {
        a[1] = a[0];
        a[0] = ' ';
    }

    while (!feof(f))
    {
        fgets(str, 100, f);

        if (feof(f))
            break;

        for (int i = 0; i < strlen(str); i++)
            if (str[i] == a[0])
            {
                begin = i;
                break;
            }

        for (int i = strlen(str) - 1; i >= 0; i--)
            if (str[i] == a[1])
            {
                end = i;
                break;
            }

        for (int i = begin + 1; i < end; i++)
            printf("%c", str[i]);

        printf("\n");
    }

    fclose(f);
}
