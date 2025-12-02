#include <stdio.h>

int main() {
	int sayi1 = 0;
	int sayi2 = 0;
	int kucuk = 0;
	int buyuk = 0;
	int toplam = 0;

	printf("ilk sayiyi girin: ");
	scanf("%d", &sayi1);
	printf("ikinci sayiyi girin: ");
	scanf("%d", &sayi2);

	if (sayi1 > sayi2) {
		kucuk = sayi2;
		buyuk = sayi1;
	} else {
		kucuk = sayi1;
		buyuk = sayi2;
	}

	for (int i = kucuk; i < buyuk; i++) {
		if (i <= 1) {
			continue;
		}

		for (int j = 2; j <= i; j++) {
			if (i == j) {
				printf("%d\n", i);
				toplam += i;
				continue;
			}

			if (i % j == 0) {
				break;
			}
		}
	}

	printf("toplam: %d\n", toplam);

	return 0;
}
