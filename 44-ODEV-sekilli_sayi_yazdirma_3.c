/*
 5432112345
  43211234
   321123
	  2112
	   11
*/

#include <stdio.h>

int main() {
	int bosluk = 1;
	int bas = 5;

	for (int satir = 0; satir < 5; satir++) {
		for (int b = 0; b < bosluk; b++) {
			printf(" ");
		}

		for (int i = bas; i >= 1; i--) {
			printf("%d", i);
		}

		for (int i = 1; i <= bas; i++) {
			printf("%d", i);
		}

		bas--;
		bosluk++;
		printf("\n");
	}

	return 0;
}
