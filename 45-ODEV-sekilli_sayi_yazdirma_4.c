/*
7654321  3456789
654321    456789
54321      56789
4321        6789
321          789
21            89
*/

#include <stdio.h>

int main() {
	int bosluk = 2;
	int sol_bas = 7;
	int sag_bas = 3;

	for (int satir = 0; satir < 6; satir++) {
		for (int sol = sol_bas; sol >= 1; sol--) {
			printf("%d", sol);
		}

		for (int b = 0; b < bosluk; b++) {
			printf(" ");
		}

		for (int sag = sag_bas; sag <= 9; sag++) {
			printf("%d", sag);
		}

		sol_bas--;
		sag_bas++;
		bosluk += 2;
		printf("\n");
	}

	return 0;
}
