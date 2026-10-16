#include <locale.h>
#include <stdio.h>
int main()
{
	SetConsoleOutputCP(65001);
	int A, B, C;
	printf("Введите параметры кислотности почвы(A, B, C) :\n");
	if (scanf_s("%d %d %d", &A, &B, &C) != 3) {
		printf("Ошибка ввода!\n");
		return 1;
	}
	if (A % 3 == 0 && B % 3 == 0 && C % 3 == 0) {
		printf("\nЛунка является ИДЕАЛЬНОЙ для посадки семян.\n");
	}
	else {
		printf("\nЛунка НЕ подходит (условие идеальности не выполнено).\n");
	}
	return 0;
}

