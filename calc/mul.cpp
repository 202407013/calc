#include "sub.h"
#include "add.h"

int mul(int x, int y) {
	int sum = 0;
	for (int i = 0; i < y; i++) {
		sum = add(x, sum);
	}
	return sum;
}