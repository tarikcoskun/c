#include <stdio.h>

int main() {
	int adet = 0;

	for (int i = 0; i < 100; i++) {
		if ((i % 5 == 0) && (i % 10 != 0)) {
			adet++;
		}
	}

	printf("adet: %d\n", adet);

	return 0;
}
