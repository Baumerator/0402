#include <stdio.h>

int groesse (int x, int y) {
	x = x;
	y = y;
	if (x<y) {
		return y;
	} else if (x>y) {
		return x;	
	}
}
