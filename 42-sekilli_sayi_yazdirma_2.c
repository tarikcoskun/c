/*
 12345
  1234
   123
	  12
	   1
	   5
	  45
   345
  2345
 12345
*/

#include <stdio.h>

int main() {
	int bosluk = 1;
	int son = 5;

	for (int satir = 0; satir < 5; satir++) {
		for (int b = 0; b < bosluk; b++) {
			printf(" ");
		}

		for (int i = 1; i <= son; i++) {
			printf("%d", i);
		}

		son--;
		bosluk++;
		printf("\n");
	}

	bosluk = 5;
	int baslangic = 5;

	for (int satir = 0; satir < 5; satir++) {
		for (int b = 0; b < bosluk; b++) {
			printf(" ");
		}

		for (int i = baslangic; i <= 5; i++) {
			printf("%d", i);
		}

		baslangic--;
		bosluk--;
		printf("\n");
	}

	return 0;
}
