#include <stdio.h>


//for 문 스럽게 함수 코딩 (static함수를 쓰면 두번 이상 실행이 안된다. 되도록이면 회피)
void Py_Pattern_static(int n)
{
	static int N = 1;
	if (n == 0) return;
	for (int i = 0; i < n; i++)
		printf(" ");
	for (int i=0; i<N; i++)
		printf("*");
	printf("\n");
	N = N + 2;
	Py_Pattern_static(n - 1);
} 

//recursion 을 이용한 함수 코딩
void Py_Pattern_recur(int n, int PAD)
{
	if (n == 0) return;
	Py_Pattern_recur(n - 1, PAD);

	for (int i = 0; i <= PAD - n; i++)
		printf(" ");
	for (int i = 1; i < 2*n-1 + 1; i++)
		printf("*");
	printf("\n");
}

//Py_Pattern2 를 일변수화
void Py_Pattern(int i)
{
	Py_Pattern_recur(i, i - 1);
}

int main()
{
	int Ipt;
	scanf_s("%d", &Ipt);
	Py_Pattern(Ipt);
}