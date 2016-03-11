#include<stdio.h>

int main()
{
	int T,N;
	scanf("%d",&T);

	while(T--)
	{
		int a[N],i;
		scanf("%d",&N);
		for(i=0;i<N;i++)
		{	
			if(N/2)
			{
				if(i/2){ printf("%d ",((N+i+1)/2)); }
				else{ printf("%d ",(N/2-i/2)); }	
			}
			else
			{
				if(i/2){ printf("%d ",(N+i+1)/2); }
				else{ printf("%d ",(N-i)/2); }

			}
		}
		printf("\n");
	}

}
	

