#include <locale.h>
#include <stdio.h>

int main() {
	setlocale(LC_ALL, "Turkish");

	int n1, n2, secim, sonuc;

	printf("İlk sayıyı girin: ");
	scanf("%d", &n1);
	printf("İkinci sayıyı girin: ");
	scanf("%d", &n2);

	printf("\n--- Seçim Ekranı ---\n1. TOPLAMA\n2. ÇIKARMA\n\nSeçiminizi girin: ");
	scanf("%d", &secim);

	if (secim == 1) {
		sonuc = n1 + n2;
		printf("\nİki sayının toplamı: %d\n", sonuc);
	} else if (secim == 2) {
		sonuc = n1 - n2;
		printf("\nİki sayının farkı: %d\n", sonuc);
	} else {
		printf("\nGeçersiz işlem girdiniz\n");
	}

	return 0;
}