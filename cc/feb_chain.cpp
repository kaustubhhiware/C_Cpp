#include<stdio.h>
 #include<string.h>
 
 int main(){
 
 	char *S;
	char plus,minus;
 	int T,i,l,count[4];
 	plus = '+';
	minus='-';	 
	
	for(i=0;i<4;i++)
	{	count[i]=0;
	}
	 scanf("%d",&T);
 	while(T--)
	 {
 		gets(S);
		 l = strlen(S);
		printf("%s",S);
		for(i=0;i<l-1;i++)
		{
			if(S[i]==minus&&S[i+1]==plus)
			{
				count[0]++;
				i+= 2;
				
			}
			if(S[i+1]==minus&&S[i+2]==plus)
			{
				count[1]++;
				i+= 2;
				
			}
			if(S[i]==plus&&S[i+1]==minus)
			{
				count[2]++;
				i+= 2;
				
			}
			if(S[i+1]==plus&&S[i+2]==minus)
			{
				count[3]++;
				i+= 2;
				
			}
		}
		for(i=0;i<4;i++)
			printf("%d",count[i]);
	}
}
