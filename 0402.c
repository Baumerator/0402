#include <stdio.h>
#include "groesse.h"

int main() {
	int x, y, z;

	printf("Groessenvergleich zwischen zwei Zahlen\n\n");
	printf("Gib die erste Zahl ein.\n");
	scanf("%d", &x);
	printf("Gib die zweite Zahl ein.\n");
	scanf("%d", &y);
	z = groesse(x, y);
	printf("Die groessere Zahl lautet %d.\n", z);
	return 0;
}
