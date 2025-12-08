#include <stdio.h>

int main() {
	int sayilar[3][4];

	printf("Sayı matrisinin elemanlarını girin:\n");

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("sayilar(%d, %d) = ", i, j);
			scanf("%d", &sayilar[i][j]);
		}
	}

	printf("\n");

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d\t", sayilar[i][j]);
		}

		printf("\n");
	}

	return 0;
}
