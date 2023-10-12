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

	//1. �� �����ֱ�
	printf("CALCULATE : factorial(n) / (factorial(n-r) * factorial(r)\n");

	//2. n�� �Է¹ޱ�
	printf("input n :  : ");
	scanf_s("%i", &n);

	//3. r�� �Է¹ޱ�
	printf("input r : ");
	scanf_s("%i", &r);
	
	//������
	result=combination(n, r);
	

	//4. ������ 
	printf("RESULT = %i", result);
	
}