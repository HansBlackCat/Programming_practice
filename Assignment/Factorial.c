#include <stdio.h>

int Factorial(int n)
{
	int N = 1;
	if (n==1)
		return N;
	N=n*Factorial(n-1); //Factorial(n) Factorial(n-1)�� ������ ������ ����, ���δٸ� �޸� �ּҸ� ���
	printf("Func %d's var Memory: %d\n",n ,&N); //����
	return N;
}


int main()
{
	printf("%d", Factorial(5));

}