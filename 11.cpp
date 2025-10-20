#include <stdio.h>

int main() {
	float not1, not2;

	printf("ilk notu giriniz: ");
	scanf("%f", &not1);
	printf("ikinci notu giriniz: ");
	scanf("%f", &not2);

	float ort = (not1 + not2) / 2;
	printf("ortalama: %.0f\n", ort);

	return 0;
}