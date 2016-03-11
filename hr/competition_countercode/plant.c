#include<stdio.h>

int main()
{
	long int n,i,j,count=0;
	scanf("%ld",&n);
	int flag=1;
	long long int p[n];
	for(i=0;i<n;i++)
	{
			scanf("%lld",&p[i]);
	}
	while(flag)
	{flag=0;
		for(i=n-1;i>-1;i--)
		{	j=i-1;
			while(p[j]==0){j--;}
			if(p[i]>p[j]){p[i] = 0; flag++;}
			
		}count++;
	}

		printf("%ld\n",(count-1));
}	
