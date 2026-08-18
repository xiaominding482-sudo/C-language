#include <stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	int max = 0;
	scanf_s("%d%d", &num1, &num2);
	max = (num1 > num2 ? num1 : num2);
	printf("%d\n", max);
	return 0;
}
