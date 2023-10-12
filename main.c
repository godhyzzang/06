#include <stdio.h>

	
int factorial(int n) {
	int f = 1;
	for (int i = 1; i <= n; i++) {
		f *= i;
	}
	return f;

}

int combination(int n,int r) {
	int div1 = factorial(n); //n!
	int div2 = factorial(n-r)*factorial(r);
	return div1 / div2;

}

int main()
{	
	int n, r;
	int result = 0;

	//1. 식 보여주기
	printf("CALCULATE : factorial(n) / (factorial(n-r) * factorial(r)\n");

	//2. n값 입력받기
	printf("input n :  : ");
	scanf_s("%i", &n);

	//3. r값 입력받기
	printf("input r : ");
	scanf_s("%i", &r);
	
	//결과계산
	result=combination(n, r);
	

	//4. 결과출력 
	printf("RESULT = %i", result);
	
}