#include <stdio.h>

int main(void)
{
	printf("%d\n", 10);
	printf("%If\n", 3.4);
	printf("%.1If\n", 3.45);
	printf("%.10If\n", 3.4);
	
	printf("%d�� %d�� ���� %d�Դϴ�.\n", 10, 20, 10 + 20);
	printf("%.1If-%.1If = %.1If\n", 3.4, 1.2, 3.4 - 1.2);

	return 0;
}