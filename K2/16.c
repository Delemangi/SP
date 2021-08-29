/*
За еден природен број а велиме дека е порамнување на друг природен број b ако и само ако цифрите еднакви на 9 во бројот b се заменети со цифрата 7 во бројот а.

Пример. Бројот 734775 е порамнување на бројот 934795.

Од стандарден влез се внесуваат непознат број на цели броеви (не повеќе од 100), се додека не се внесе нешто што не може да се интерпретира како цел број.

Ваша задача е да ги отпечатите најмалите 5 од порамнувањата на сите внесени броеви, по редослед од најмалиот кон најголемиот.

Забелешка: Доколку се внесат помалку од 5 броеви, тогаш печатите толку броеви колку што се соодветно внесени.

Наоѓањето на порамнувањето на даден број треба да се реализира во посебна рекурзивна функција poramnet(int a).

Пример.

За броевите: 9592, 69403, 100007, 6, 987, 6977, 33439,

треба да се најдат нивните порамнувања ( тоа се: 7572, 67403, 100007, 6, 787, 6777 и 33437, соодветно),

и да се отпечатат најмалите 5 од нив по овој редослед: 6 787 6777 7572 33437.

ЗАБРАНЕТО е користење на глобални променливи.
*/
#include <stdio.h>

void sort(int *a, int n)
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

int reverse(int n)
{
    int z = 0;
    while (n != 0)
    {
        z *= 10;
        z += n % 10;
        n /= 10;
    }
    return z;
}

int main()
{
    int a[100];
    int b[100] = {0};
    int z = 0;

    while (scanf("%d", &a[z]))
        z++;

    for (int i = 0; i < z; i++)
        if (a[i] % 10 != 0)
            a[i] = reverse(a[i]);

    for (int i = 0; i < z; i++)
        if (a[i] % 10 != 0)
            while (a[i] != 0)
            {
                b[i] *= 10;

                if (a[i] % 10 == 9)
                    b[i] += 7;
                else
                    b[i] += a[i] % 10;

                a[i] /= 10;
            }
        else
            b[i] = a[i];

    sort(b, z);

    for (int i = 0; i < 5; i++)
        if (b[i] != 0)
            printf("%d ", b[i]);
}