#include <stdio.h>

int ortalama() {
	int top = 0;

	for (int i = 1; i <= 100; i++) {
		top += i;
	}

	return top / 100;
}

int main() {
	printf("Sayıların ortalaması: %d\n", ortalama());

	return 0;
}
