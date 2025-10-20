#include <stdio.h>

int main() {
	int notu;
	printf("Notunuzu girin: ");
	scanf("%d", &notu);

	if (100 >= notu && notu >= 85) {
		printf("5");
	} else if (85 > notu && notu >= 70) {
		printf("4");
	} else if (70 > notu && notu >= 55) {
		printf("3");
	} else if (55 > notu && notu >= 45) {
		printf("2");
	} else if (45 > notu && notu >= 25) {
		printf("1");
	} else if (25 > notu && notu >= 0) {
		printf("0");
	} else {
		printf("geçersiz not\n");
	}

	return 0;
}