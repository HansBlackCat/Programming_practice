/* Closet_distance_points
<Description>
Given a number of points on a coordinate plane(좌표 평면), find a pair of points with the closest distance.
𝑁 (2 ≤ 𝑁 ≤ 10) points will be given. Each point is given by specifying the 𝑥 and 𝑦 coordinates. The 𝑥, 𝑦 coordinate values of all points are integers of range [-10000, 10000].
Print the distance between the closest two points.

<Input>
First line contains a single integer 𝑁 (2 ≤ 𝑁 ≤ 10).
Following 𝑁 lines contain two integers 𝑥, 𝑦 of range [-10000, 10000].

<Output>
Print the distance of closest two points.

<Sample1>
[Input]
3
1 2
3 4
1 2




[Output]
0.000000

<Sample2>
[Input]
5
0 0
3 1
4 2
7 1
1 1


[Output]
1.414214
*/

#include <stdio.h>
#include <math.h>

double Distance_2D(double n, double m, double r, double l) 
{
	return sqrt((n - r) * (n - r) + (m - l) * (m - l));
}

void Closest_distance_points(int N)
{
	int Cdp_ipt[100] = { 0 };
	double Temp;
	for (int i = 0; i < 2*N; i++)
	{
		scanf_s("%d", &Cdp_ipt[i]);
	}
	double D_least = Distance_2D(Cdp_ipt[0], Cdp_ipt[1], Cdp_ipt[2], Cdp_ipt[3]);
	for (int j = 0; j < N-1; j++)
	{
		for (int i = j; i < N-1; i++)
		{
			Temp = Distance_2D(Cdp_ipt[2 * j], Cdp_ipt[2 * j + 1], Cdp_ipt[2 * i + 2], Cdp_ipt[2 * i + 3]);
			if (Temp <= D_least) D_least = Temp;
		}
	}
	printf("%lf", D_least);
}

int main()
{
	int i;
	scanf_s("%d", &i);
	Closest_distance_points(i);
}