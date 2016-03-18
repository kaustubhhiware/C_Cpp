#include<stdio.h>


int main(){

int f=1;int r=1;int c=1;
int T,N;

scanf("%d",&T);
	while(T--){

		scanf("%d",&N);
		printf("%d\n",N*N*N);
		for(;f<N+1&&f>0;f++){
			for(;r<N+1&&r>0;){
				for(;c<N+1&&c>0;){
					
				printf("%d %d %d \n",f,r,c);
				if(r%2==1)
					c++;
				else c--;	
				}
				if(r%2==1)
					c=N;
				else c=1;	
				if(f%2==1)
					r++;
				else r--;
				
			}
				if(f%2==1)
					r=N;
				else r=1;	
		}

printf("%d %d %d\n",N,N,N);

}

}
