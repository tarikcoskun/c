#include <stdio.h>

int main() {
	int matris[10][10];
	// int sayi = 1;

	for (int r = 0; r < 10; r++) {
		for (int c = 0; c < 10; c++) {
			matris[r][c] = (c + 1) + (10 * r);
			// matris[r][x] = sayi;
			// sayi++;
		}
	}

	for (int r = 0; r < 10; r++) {
		for (int c = 0; c < 10; c++) {
			printf("%d\t", matris[r][c]);
		}

		printf("\n");
	}

	return 0;
}
