/*
 *                 *
 ***             ***
 *****         *****
 *******     *******
 ********* *********
 */

#include <stdio.h>

int main() {
	int adet = 1;
	int bosluk = 17;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < adet; j++)
			printf("*");
		for (int a = 0; a < bosluk; a++)
			printf(" ");
		for (int j = 0; j < adet; j++)
			printf("*");

		adet += 2;
		bosluk -= 4;
		printf("\n");
	}

	return 0;
}
