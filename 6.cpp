#include <stdio.h>

int main() {
	char cumle[20];
	printf("bir cumle girin: ");
	// deprecated gets(cumle);
	fgets(cumle, sizeof(cumle), stdin);
	printf("girilen cumle: %s\n", cumle);
	// puts() -> argüman almaz, daha hızlı, alt satır koyar

	return 0;
}