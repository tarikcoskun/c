/*
  klavyeden 10 adet sayı al
  10. girilince en büyük ve en küçük sayıyı yazdır
*/

#include <stdio.h>

int main() {
	int sayac = 2;
	int sayi, en_buyuk, en_kucuk;

	printf("1. sayıyı girin: ");
	scanf("%d", &sayi);
	en_buyuk = sayi;
	en_kucuk = sayi;

	while (sayac < 10) {
		printf("%d. sayıyı girin: ", sayac);
		scanf("%d", &sayi);

		if (sayi > en_buyuk)
			en_buyuk = sayi;
		if (sayi < en_kucuk)
			en_kucuk = sayi;

		sayac++;
	}

	printf("En büyük sayı: %d\n", en_buyuk);
	printf("En küçük sayı: %d\n", en_kucuk);

	return 0;
}
