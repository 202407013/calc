#include "dive.h"

#include "sub.h"

int dive(int x, int y) {
	int sum = x;
	int cnt = 0;
	for (int i = 0; i < y; i++) {
		if (sub(sum, y) < 0) {
			break;
		}
		sum = sub(sum, y);
		cnt++;
	}
	return cnt;
}