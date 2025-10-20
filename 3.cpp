#include <locale.h>
#include <stdio.h>

int main() {
	setlocale(LC_ALL, "Turkish");

	int a = 2, b = 10, c = 50;
	float f = 1.05, g = 25.5, h = -0.1, yuzde;

	printf("\nTAB kullanılmadan yazılan tamsayılar : %d %d %d", a, b, c);
	printf("\nTAB kullanılarak yazılan tamsayılar  : \t%d \t%d \t%d", a, b, c);

	printf("\nÜç reel sayının tek satırda yazılması : %f\t%f\t%f", f, g, h);
	printf("\nÜç reel sayının üç satırda yazılması  : \n\t%f\n\t%f\n\t%f", f, g, h);

	yuzde = (220 * 25) / 100.0;
	printf("\n220'nin %%25'i = %f", yuzde);
	printf("\n%f/%f işleminin sonucu = %f\n", g, f, g / f);

	printf("\nprogram sonunda beep sesi çıkar...\a\n");

	return 0;
}
