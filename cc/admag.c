#include<stdio.h>

int main()
{
	long int T;
	long long int N;
	scanf("%ld",&T);

	while(T--)
	{
		scanf("%lld",&N);

		long long int i = 1;

		while(N)
		{	N = N-i;
			i++;
		}
		printf("%lld\n",(i-1));
	}
}
