#include <stdio.h>

int main() {
	int say1, say2;
	printf("Birinci sayiyi girin: ");
	scanf("%d", &say1);
	printf("İkinci sayiyi girin: ");
	scanf("%d", &say2);

	if (say1 > say2) {
		printf("birinci sayi ikinci sayidan buyuk\n");
	} else if (say2 > say1) {
		printf("ikinci sayi birinci sayidan buyuk\n");
	} else {
		printf("sayilar esit\n");
	}

	return 0;
}