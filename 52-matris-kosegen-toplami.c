#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));

	int matris[10][10];
	int sari_kosegen = 0;
	int kirmizi_kosegen = 0;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			matris[i][j] = 0 + rand() % 100;
		}
	}

	/*
	  0, 0
	  1, 1
	...
	*/
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (i == j) {
				sari_kosegen += matris[i][j];
			}
		}
	}

	/*
	  0, 9
	  1, 8
	...
	*/
	for (int i = 0; i < 10; i++) {
		for (int j = 9; j >= 0; j--) {
			if (i + j == 9) {
				kirmizi_kosegen += matris[i][j];
			}
		}
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%d\t", matris[i][j]);
		}

		printf("\n");
	}

	printf("\n");

	printf("sarı toplamı: %d\n", sari_kosegen);
	printf("kırmızı toplamı: %d\n", kirmizi_kosegen);

	return 0;
}
