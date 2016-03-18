#include<stdio.h>

int prime(int x){
int i,flag=0;
for(i=2;i<=x/2;i++)
{
	if(x%i==0)
	 flag =1;
}
	if(flag!=1)
		return x;
	else
		return 1;

}

int main(){
	
	int T,i;
	long int N;
	scanf("%d",&T);
	while(T--){
		int j=0;
		int *a;
		scanf("%d",&N);
		int count;
		for(i=2;i<N;i++)
			{
				if(N%prime(i)!=N)
				{
						count++;
						a[j]=i;}
			}
		if(count>=2){
		printf("yes\n");
		for(j=0;j<count;j++)
			printf("%d",a[j]);
		
		}
		else printf("no");
	
	}
	
	
	
	
}
