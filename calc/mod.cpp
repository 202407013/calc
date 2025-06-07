#include "mod.h"
#include "sub.h"


int mod(int x, int y) {
	int sum = x;
	for (int i = 0; i < y; i++) {
		if (sub(sum, y) < 0) {
			break;
		}
		sum = sub(sum, y);
	}
	return sum;
}