#include <stdio.h>

int main() {
	int notu;
	printf("Notunuzu girin: ");
	scanf("%d", &notu);

	if (100 >= notu && notu >= 85) {
		printf("5\n");
	} else if (85 > notu && notu >= 70) {
		printf("4\n");
	} else if (70 > notu && notu >= 55) {
		printf("3\n");
	} else if (55 > notu && notu >= 45) {
		printf("2\n");
	} else if (45 > notu && notu >= 25) {
		printf("1\n");
	} else if (25 > notu && notu >= 0) {
		printf("0\n");
	} else {
		printf("geçersiz not\n");
	}

	return 0;
}
