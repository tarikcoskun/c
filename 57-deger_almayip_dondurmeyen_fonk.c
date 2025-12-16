#include <stdio.h>

void tanitim() {
	printf("Klavyeden 2 adet sayı girin\n");
}

int main() {
	tanitim();

	int x, y;
	printf("Sayı girin: ");
	scanf("%d", &x);
	printf("Sayı girin: ");
	scanf("%d", &y);

	return 0;
}