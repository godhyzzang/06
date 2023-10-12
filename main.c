#include <stdio.h>
int sumTwo(int a, int b) {
	
	return a + b;
	
}

int square(int n) {
	return n * n;
}

int get_max(int x, int y) {
	if (x < y) 
		return y;
	else {
		return x;
	}
}
int main(void) {
	
	
	printf("sumTwo result : %i\n", sumTwo(2, 3));
	printf("squre result : %i\n", square(3));
	printf("get_max : %i\n", get_max(5, 10));



	return 0;
}