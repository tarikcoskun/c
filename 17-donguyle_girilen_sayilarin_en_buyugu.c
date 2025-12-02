#include <stdio.h>

int main() {
	int sayi = 0;
	int max = 0;

	for (int i = 1; i <= 5; i++) {
		printf("%d. sayiyi girin: ", i);
		scanf("%d", &sayi);
		if (sayi > max) {
			max = sayi;
		}
	}

	printf("en buyuk sayi: %d\n", max);

	return 0;
}
