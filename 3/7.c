//Од стандарден влез се чита еден природен број n, по што се читаат n цели броеви. Да се најде најголемата разлика помеѓу два броја, од вака внесените броеви.
#include <stdio.h>

int abs(int n)
{
	if (n > 0)
		return n;
	else
		return -n;
}

int main()
{
	int a[100];
	int c;
	int d;
	scanf("%d", &c);

	for (int i = 0; i < c; i++)
		scanf("%d", &a[i]);

	d = a[1] - a[0];

	for (int i = 0; i < c; i++)
		for (int j = 0; j < c; j++)
			if (d < abs(a[i] - a[j]))
				d = abs(a[i] - a[j]);

	printf("Najgolema razlika: %d", d);
	return 0;
}