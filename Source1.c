#include <stdio.h>

int main()
{
	int dia, mes, any;
	printf("Tria el teu dia de naixement: ");
	scanf_s("%d", &dia);
	printf("\nTria el teu mes de naixement: ");
	scanf_s("%d", &mes);
	printf("\nTria el teu any de naixement: ");
	scanf_s("%d", &any);
	if (any < 1000)
	{
		printf("\nEl any de naixement ha de tenir 4 xifres, insereixho un altre cop: ");
		scanf_s("%d", &any);
	}
	printf("%d+%d+%d = %d", dia, mes, any, dia + mes + any);
	return 0;
}