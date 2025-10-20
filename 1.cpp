#include <locale.h>
#include <stdio.h>

int main() {
	setlocale(LC_ALL, "Turkish");

	int say = 0;
	say = 10;
	printf("girilen sayı: %d\n", say);

	return 0;
}
