//Да се напише програма која пресметува просечна оцена во семестар. Програмата чита 5 цели броја. Треба да се испечати еден реален број на две децимали, просек на прочитаните броеви.
#include <stdio.h>

int main()
{
	int a, b, c, d, e;
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	float p = (a + b + c + d + e) / 5.0;

	printf("%.2f", p);

	return 0;
}
