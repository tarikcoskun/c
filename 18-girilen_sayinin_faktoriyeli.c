#include <stdio.h>

int main() {
	int sayi = 0;
	int sonuc = 1;

	printf("sayiyi girin: ");
	scanf("%d", &sayi);

	for (int i = 1; i <= sayi; i++) {
		sonuc *= i;
	}

	printf("%d sayisinin faktoriyeli: %d\n", sayi, sonuc);

	return 0;
}
