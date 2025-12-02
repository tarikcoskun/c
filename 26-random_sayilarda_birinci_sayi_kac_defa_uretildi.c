#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));

	int birinci_sayi = 0;
	int sayi = 0;

	for (int i = 0; i < 100; i++) {
		sayi = 100 + rand() % 400;
		if (i == 0) {
			birinci_sayi = sayi;
		}

		printf("%d . %d\n", i + 1, sayi);

		if (i != 0 && sayi == birinci_sayi) {
			printf("birinci sayi %d . uretimde tekrar uretilmistir\n", i + 1);
		}
	}

	return 0;
}
