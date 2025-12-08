#include <stdio.h>

int main() {
	int matris[10][10];
	// int sayi = 1;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			matris[i][j] = (j + 1) + (10 * i);
			// matris[i][j] = sayi;
			// sayi++;
		}
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%d\t", matris[i][j]);
		}

		printf("\n");
	}

	return 0;
}
