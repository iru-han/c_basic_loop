#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 2단부터 9단까지 구구단 출력
int main() {
	for (int i = 2; i <= 9; i++) {
		for (int j = 2; j <= 9; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}

	return 0;

}