#include <stdio.h>

int main() {
	int sayi1, sayi2, sayi3, sayi4, sayi5;

	printf("1. sayiyi giriniz: ");
	scanf("%d", &sayi1);
	printf("2. sayiyi giriniz: ");
	scanf("%d", &sayi2);
	printf("3. sayiyi giriniz: ");
	scanf("%d", &sayi3);
	printf("4. sayiyi giriniz: ");
	scanf("%d", &sayi4);
	printf("5. sayiyi giriniz: ");
	scanf("%d", &sayi5);

	int sonuc = sayi1;

	if (sonuc < sayi2)
		sonuc = sayi2;
	if (sonuc < sayi3)
		sonuc = sayi3;
	if (sonuc < sayi4)
		sonuc = sayi4;
	if (sonuc < sayi5)
		sonuc = sayi5;

	printf("girdiginiz sayilardan en buyugu: %d\n", sonuc);

	return 0;
}