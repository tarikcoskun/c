#include <stdio.h>

int main() {
	int toplam = 0;
	int sayi = 1;

	for (int i = 0; i < 10; i++) {
		toplam += sayi;
		sayi++;
	}

	printf("toplam: %d\n", toplam);

	return 0;
}
