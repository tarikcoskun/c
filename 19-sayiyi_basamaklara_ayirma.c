#include <stdio.h>

int main() {
	int toplam = 0;
	int adet = 0;
	int ortalama = 0;

	for (int i = 120; i <= 850; i++) {
		int birler = i / 1 % 10;
		int onlar = i / 10 % 10;
		int yuzler = i / 100 % 10;

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
