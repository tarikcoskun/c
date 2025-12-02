/*
     *
    ***
   *****
  *******
 *********
*/

#include <stdio.h>

int main() {
	int adet = 1;
	int bosluk = 5;
	for (int i = 0; i < 5; i++) {
		for (int a = 0; a < bosluk; a++)
			printf(" ");
		for (int j = 0; j < adet; j++)
			printf("*");

		adet += 2;
		bosluk--;
		printf("\n");
	}

	return 0;
}
