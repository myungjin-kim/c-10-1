#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()

{
	double changecm(int inch);
	int value;

	printf("inch ���� �Է� �Ͽ���: ");
	scanf("%d", &value);

	printf("%dinch �� %.2fcm �Դϴ�.\n", value, changecm(value));
}

double changecm(int inch)
{

	return inch * 2.54;
}