#include <stdio.h>
#include <time.h>

int main() {
	int sayi[10];

	for (int i = 0; i < 10; i++) {
		sayi[i] = i + 10;
	}

	for (int i = 0; i < 10; i++) {
		printf("sayi[%d] index elemanının değeri: %d \n", i, sayi[i]);
	}

	return 0;
}
