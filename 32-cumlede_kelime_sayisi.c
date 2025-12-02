#include <stdio.h>
#include <string.h>

int main() {
	char cumle[100];

	printf("Bir cümle girin: ");
	gets(cumle);

	int adet = 1;
	int uzunluk = strlen(cumle);

	for (int i = 0; i < uzunluk; i++) {
		if (cumle[i] == ' ') {
			adet++;
		}
	}

	printf("cümlede %d adet kelime var\n", adet);

	return 0;
}
