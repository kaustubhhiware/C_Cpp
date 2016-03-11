#include<stdio.h>

int main()
{
	int T,N;
	scanf("%d",&T);

	while(T--)
	{
		scanf("%d",&N);
		int even,odd,n = N/2;//even is the even element and odd is the odd element
			even = (N+1)/2;
			odd = N/2+1;
		while(n--)
		{
			printf("%d %d ",even,odd);
			even++;odd--;	
		}
		if((N%2)==1)
		{	printf("%d",N);
		}
		printf("\n");
	}


}
