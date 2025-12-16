#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rastgele() {
	int sayi = 1 + rand() % 100;
	return sayi;
}

int tahmin(int tahmin_sayi) {
	int girilen_sayi;
	int sayac = 0;

	do {
		printf("Sayı girin: ");
		scanf("%d", &girilen_sayi);
		sayac++;

		if (girilen_sayi > tahmin_sayi) {
			printf("Tahmini küçült\n");
		} else if (girilen_sayi < tahmin_sayi) {
			printf("Tahmini büyüt\n");
		}
	} while (girilen_sayi != tahmin_sayi);

	return sayac;
}

void ekran(int tahmin_adet) {
	printf("\nSayıyı %d tahminde buldunuz\n", tahmin_adet);
}

int main() {
	srand(time(NULL));

	int uretilen_sayi = rastgele();
	int tahmin_adet = tahmin(uretilen_sayi);
	ekran(tahmin_adet);

	return 0;
}
