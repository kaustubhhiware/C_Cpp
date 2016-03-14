#include<stdio.h>
#include<math.h>


//-----------objective : togenerate primes between m and n

int main()
{
	int t;
	scanf("%d",&t);

	while(t--)
	{
		int m,n,i,j1,k;
		float j;
		scanf("%d%d",&m,&n);
	
		for(i = m+1;i<n;i++)
		{
			j = sqrt(i);
			j1=int(j);
			for(k=0;k<j1;k++)
			{
				if(i%k==0){continue;}
			}	printf("%d",i);		
		}
		printf("\n");
	}
}
