#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));

	int adet = 0;
	int girilen[10];
	int uretilen[10];

	for (int i = 0; i < 10; i++) {
		printf("%d. sayıyı girin: ", i + 1);
		scanf("%d", &girilen[i]);
		uretilen[i] = 1 + rand() % 49;
	}

	for (int i = 0; i < 10; i++) {
		if (uretilen[i] == girilen[i]) {
			adet++;
		}

		printf("%d\t%d\n", uretilen[i], girilen[i]);
	}

	printf("\n%d adet sayı benzer\n", adet);

	return 0;
}
