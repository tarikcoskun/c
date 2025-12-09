#include <stdio.h>

int main() {
	int sayilar[3][4];

	printf("Sayı matrisinin elemanlarını girin:\n");

	for (int satir = 0; satir < 3; satir++) {
		for (int sutun = 0; sutun < 4; sutun++) {
			printf("sayilar(%d, %d) = ", satir, sutun);
			scanf("%d", &sayilar[satir][sutun]);
		}
	}

	printf("\n");

	for (int satir = 0; satir < 3; satir++) {
		for (int sutun = 0; sutun < 4; sutun++) {
			printf("%d\t", sayilar[satir][sutun]);
		}

		printf("\n");
	}

	return 0;
}
