#include <stdio.h>
#include <string.h>

int main() {
	char cumle[100];

	printf("Bir cümle girin: ");
	// gets(cumle);
	fgets(cumle, sizeof(cumle), stdin);

	int uzunluk = strlen(cumle);

	int harf_sayisi = 0;
	int uzun_kelime_harf_sayisi = 0;

	int kelime_basi = 0;
	int uzun_kelime_basi = 0;

	for (int i = 0; i <= uzunluk; i++) {
		if (cumle[i] == ' ' || i == uzunluk) {
			if (harf_sayisi > uzun_kelime_harf_sayisi) {
				uzun_kelime_harf_sayisi = harf_sayisi;
				uzun_kelime_basi = kelime_basi;
			}

			harf_sayisi = 0;
			kelime_basi = i + 1;
		} else {
			harf_sayisi++;
		}
	}

	printf("Cümledeki en uzun kelime: ");
	for (int i = uzun_kelime_basi; i < uzun_kelime_basi + uzun_kelime_harf_sayisi; i++) {
		printf("%c", cumle[i]);
	}

	printf("\n");

	return 0;
}
