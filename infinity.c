#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int i = 1;
	
	while (1) {
		printf("Hello\n");
		i++;
		if (i > 5) break;
	}

	//while (1) {
	//	printf("Hello2\n");
	//}

	//for (;;) {
	//	printf("Hello3\n");
	//}

	return 0;
}