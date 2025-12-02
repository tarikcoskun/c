/*
  0 girilene kadar girilen sayıların toplamı
*/

#include <stdio.h>

int main() {
	int sayi;
	int toplam = 0;

	do {
		printf("sayı girin: ");
		scanf("%d", &sayi);

		toplam += sayi;
	} while (sayi != 0);

	printf("girilen sayıların toplamı: %d\n", toplam);

	return 0;
}
