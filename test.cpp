#include <stdio.h>

void main() {
	int i = 0; 
	int result = 0;

	for(;i < 100; i++) {
		if(i % 2 == 0) {
			result += i;
		}
	}

	printf("Result : %d", result);
}
