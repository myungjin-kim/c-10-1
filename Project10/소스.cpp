#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()

{
	double changecm(int inch);
	int value;

	printf("inch 값을 입력 하여라: ");
	scanf("%d", &value);

	printf("%dinch 는 %.2fcm 입니다.\n", value, changecm(value));
}

double changecm(int inch)
{

	return inch * 2.54;
}