#include<stdio.h>

int main()
{
	int T,N;
	scanf("%d",&T);

	while(T--)
	{
		scanf("%d",&N);
		int a[N],i=0;

		for(i=0;i<N;i++)
		{	
			if(i%2){a[N-i-1] = i/2+1; }
           		else{ a[N-i-1] = N-(1+i)/2; }
		}

		for(i=0;i<N;i++)
		{
			printf("%d ",a[i]);
		}
		printf("\n");
	}

}
	

