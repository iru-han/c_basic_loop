#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 //   *
 //  ***
 // *****
 //  ***
 //   *

int main() {
	int N = 5;
	int half = (N + 1) / 2;
	int space = half;
	
	for (int i = 0; i < N; i++) { // ¼¼·Î
		if (i < half) {
			space--;
		}
		else {
			space++;
		}

		int total_star = N - (space*2);
		int star_count = 0;

		for (int j = 0; j < N; j++) { // °¡·Î
			if (j < space) {
				printf(" ");
			}
			else {
				star_count++;
				printf("*");
			}

			if (star_count == total_star) {
				break;
			}
		}
		printf("\n");
	}

	return 0;

}
