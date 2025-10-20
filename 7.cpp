#include <locale.h>
#include <stdio.h>

int main() {
	setlocale(LC_ALL, "Turkish");

	int n;
	double x;
	char isim[20], web[30];

	printf("integer giriniz: ");
	scanf("%d", &n);
	printf("girilen integer: %d\n\n", n);

	printf("double giriniz: ");
	scanf("%lf", &x);
	printf("girilen double: %lf\n\n", x);

	printf("integer ve float sayı giriniz: ");
	scanf("%d %lf", &n, &x);
	printf("girilen sayılar: %d ve %g\n\n", n, x);

	printf("isim gir: ");
	scanf("%s", &isim);
	printf("web adresi gir: ");
	scanf("%s", &web);
	printf("\ngirilen isim: %s\n", isim);
	printf("girilen web adresi: %s\n", web);

	return 0;
}