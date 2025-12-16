/*
  5 sayılık bir diziye döngüyle veri gir
  sayı girme işlemi ana programda
  en büyük sayıyı buyuk() fonksiyonuyla bul
  en büyük sayıyı ekrana sonuc() fonksiyonuyla yazdır
*/

#include <stdio.h>

int buyuk(int dizi[5]) {
	int en_buyuk = dizi[0];

	for (int i = 0; i < 5; i++) {
		if (dizi[i] > en_buyuk) {
			en_buyuk = dizi[i];
		}
	}

	return en_buyuk;
}

void sonuc(int sayi) {
	printf("En büyük sayı: %d\n", sayi);
}

int main() {
	int sayilar[5];
	for (int i = 0; i < 5; i++) {
		printf("%d. sayıyı girin: ", i + 1);
		scanf("%d", &sayilar[i]);
	}

	sonuc(buyuk(sayilar));

	return 0;
}
