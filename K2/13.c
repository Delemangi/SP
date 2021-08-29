/*
Да се напише рекурзивна функција која ќе го најде бројот на позитивни броеви од целобројна низа. Функцијата како аргумент ја прима низата, за која се бара бројот на позитивни броеви и вкупниот број на елементи, кои ги има таа низа. Функцијата е зададена со следниот прототип:

int BrojPozitivni(int niza[], int n);

Да се напише и функција main() за тестирање на функцијата BrojPozitivni.
*/
#include <stdio.h>

int func(int a[], int n, int i)
{
	if (i == n)
		return 0;

	if (a[i] >= 0)
		return 1 + func(a, n, i + 1);
	else
		return func(a, n, i + 1);
}

int main()
{
	int n;
	int a[100];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	printf("%d", func(a, n, 0));
}