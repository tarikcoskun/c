#include <stdio.h>
#include <string.h>

int main() {
	char cumle[100];

	printf("Bir cümle girin: ");
	gets(cumle);

	int uzunluk = 0;
	uzunluk = strlen(cumle);

	int adet = 0;

	for (int i = 0; i < uzunluk; i++) {
		if (cumle[i] == 'a') {
			adet++;
		}
	}

	printf("cümlede %d adet 'a' harfi var\n", adet);

	return 0;
}
