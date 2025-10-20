#include <math.h>
#include <stdio.h>

int main() {
	float x = 2.7;
	x = floor(x);
	printf("%f \n", x);
	x = ceil(2.3);
	printf("%f \n", x);

	int a = 16;
	int b = sqrt(a);
	printf("%d \n", b);

	int taban = 3;
	int us = 2;
	int sonuc = pow(taban, us);
	printf("%d\n", sonuc);

	return 0;
}