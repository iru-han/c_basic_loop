#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// *****
// ****
// ***
// **
// *

int main() {

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5 - i; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;

}
