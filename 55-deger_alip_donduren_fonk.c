#include <stdio.h>

int topla(int a, int b) {
	int toplam = a + b;
	return toplam;
}

int main() {
	int sonuc = topla(5, 10);
	printf("İki sayının toplamı: %d\n", sonuc);

	return 0;
}
