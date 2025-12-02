#include <stdio.h>
#include <string.h>

int main() {
	char kelime[100];

	printf("Bir kelime girin: ");
	scanf("%s", kelime);

	int uzunluk = 0;
	uzunluk = strlen(kelime);
	printf("%d harf\n", uzunluk);

	for (int i = 0; i < uzunluk; i++) {
		printf("%c\n", kelime[i]);
	}

	return 0;
}
