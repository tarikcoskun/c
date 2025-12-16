#include <stdio.h>

void goster(int a, int b) {
	if (a > b) {
		printf("İlk girilen sayı ikinci girilenden büyük\n");
	} else {
		printf("İkinci girilen sayı ilk girilenden büyük\n");
	}
}

int main() {
	int x, y;
	printf("Sayı girin: ");
	scanf("%d", &x);
	printf("Sayı girin: ");
	scanf("%d", &y);

	goster(x, y);

	return 0;
}