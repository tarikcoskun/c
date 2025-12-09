#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));

	int matris[10][10];
	int sari_kosegen = 0;
	int kirmizi_kosegen = 0;

	for (int r = 0; r < 10; r++) {
		for (int c = 0; c < 10; c++) {
			matris[r][c] = 0 + rand() % 100;
		}
	}

	/*
	  0, 0
	  1, 1
	...
	*/
	for (int r = 0; r < 10; r++) {
		for (int c = 0; c < 10; c++) {
			if (r == c) {
				sari_kosegen += matris[r][c];
			}
		}
	}

	/*
	  0, 9
	  1, 8
	...
	*/
	for (int r = 0; r < 10; r++) {
		for (int c = 9; c >= 0; c--) {
			if (r + c == 9) {
				kirmizi_kosegen += matris[r][c];
			}
		}
	}

	for (int r = 0; r < 10; r++) {
		for (int c = 0; c < 10; c++) {
			printf("%d\t", matris[r][c]);
		}

		printf("\n");
	}

	printf("\n");

	printf("Sarı köşegen toplamı: %d\n", sari_kosegen);
	printf("Kırmızı köşegen toplamı: %d\n", kirmizi_kosegen);

	return 0;
}
