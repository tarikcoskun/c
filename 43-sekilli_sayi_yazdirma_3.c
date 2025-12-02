/*
 1234567
  23456
   345
	  4
 7654321
  65432
   543
	  4
*/

#include <stdio.h>

int main() {
	int bosluk = 1;
	int bas = 1;
	int son = 7;

	for (int satir = 0; satir < 4; satir++) {
		for (int b = 0; b < bosluk; b++) {
			printf(" ");
		}

		for (int i = bas; i <= son; i++) {
			printf("%d", i);
		}

		bas++;
		son--;
		bosluk++;
		printf("\n");
	}

	bosluk = 1;
	bas = 7;
	son = 1;

	for (int satir = 0; satir < 4; satir++) {
		for (int b = 0; b < bosluk; b++) {
			printf(" ");
		}

		for (int i = bas; i >= son; i--) {
			printf("%d", i);
		}

		bas--;
		son++;
		bosluk++;
		printf("\n");
	}

	return 0;
}
