#include <math.h>
#include <stdio.h>

int main() {
	int toplam = 0;
	int adet = 0;
	int ortalama = 0;

	for (int i = 120; i <= 850; i++) {
		int birler = floor(i % 10);
		int onlar = floor(i / 10 % 10);
		int yuzler = floor(i / 100);

		if ((birler != onlar) && (onlar != yuzler) && (birler != yuzler) && ((birler + onlar + yuzler) > 15)) {
			printf("%d\n", i);
			toplam += i;
			adet++;
		}
	}

	ortalama = toplam / adet;
	printf("ortalama: %d\n", ortalama);

	return 0;
}
