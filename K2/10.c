/*
Да се имплементира рекурзивна функција која за низа од цели броеви $[a{0}, a{1}, ..., a_{n-1}]$ ќе ја пресмета вредноста на непрекинатата дропка дефинирана како:

v=a0+1a1+...1an−2+1an−1

Да се напише програма во која се чита цел број N, по што се читаат елементите на низа од N цели броеви (не повеќе од 100). Потоа се повикува рекурзивната функција и се печати резултатот во нов ред.
*/
#include <stdio.h>

float rec(int a[], int N, int curN)
{
	if (curN + 1 == N)
		return a[curN];
	else
		return a[curN] + 1 / rec(a, N, curN + 1);
}

int main()
{
	int n;
	int a[100];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	printf("%f", rec(a, n, 0));
}