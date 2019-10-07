/*Prime_number
<Description>
Write a program that gets two integers N and M (1<=N<=M<=5000), 
and prints prime numbers greater than or equal to N and less than or equal to M in ascending order, with single spaces in between.

A prime number is a natural number greater than 1 that cannot be formed by multiplying two smaller natural numbers such as 5, 11, 19, 23.

<Input>
The first line contains two integers N, M (1<=N<=M<=5000)

<Output>
Print prime numbers included in the closed interval [N,M] in ascending order.

<Sample>
[Input1]
20 50
[Output1]
23 29 31 37 41 43 47

[Input2]
2 3
[Output2]
2 3
*/

#include <stdio.h>

void Prime_number(int N, int M) 
{
	int temp=0;
	if (N == M + 1) return;
	for (int i = 2; i < N; i++)
	{
		if (N % i == 0) ++temp;
		else temp += 0;
	}
	if (temp == 0) printf("%d ", N);
	Prime_number(N + 1, M);
}

int main()
{
	int a, b;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	Prime_number(a,b);
}