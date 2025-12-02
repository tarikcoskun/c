/*
 1234567
  123456
   12345
	  1234
	   123
*/

#include <stdio.h>

int main() {
	int bosluk = 1;
	int son = 7;

	for (int a = 0; a < 5; a++) {
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

	return 0;
}
