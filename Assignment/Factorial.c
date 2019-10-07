#include <stdio.h>

int Factorial(int n)
{
	int N = 1;
	if (n==1)
		return N;
	N=n*Factorial(n-1); //Factorial(n) Factorial(n-1)은 완전히 유리된 공간, 서로다른 메모리 주소를 사용
	printf("Func %d's var Memory: %d\n",n ,&N); //증명
	return N;
}


int main()
{
	printf("%d", Factorial(5));

}