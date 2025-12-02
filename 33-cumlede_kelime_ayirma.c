#include <stdio.h>
#include <string.h>

int main() {
	char cumle[100];

	printf("Bir cümle girin: ");
	gets(cumle);

	int adet = 1;
	int uzunluk = strlen(cumle);

	for (int i = 0; i < uzunluk; i++) {
		printf("%c", cumle[i]);

		if (cumle[i] == ' ') {
			adet++;
			printf("\n");
		}
	}

	printf("\ncümlede %d adet kelime var\n", adet);

	return 0;

	/*
		int kelime_basi = 0;
		int kelime_sonu = 0;

	  for (int i = 0; i < uzunluk; i++) {
	  if (cumle[i] == ' ' && cumle[i + 1] != ' ') {
		kelime_sonu = i;

		for (int j = kelime_basi; j < kelime_sonu; j++) {
		  printf("%c", cumle[j]);
		}

		printf("\n");

		kelime_basi = i + 1;
	  }
	  }
	  */
}
