#include<stdio.h>

int main(){
int N;
scanf("%d",&N);
int d[N],p,q,i;
int sum=0;

for(i=0;i<N-1;i++){
	scanf("%d%d",&p,&q);
	d[i]=p-q;
		if(d[i]<0)
			d[i]*=-1;
	sum+=d[i];
}
printf("%d",sum);
}
