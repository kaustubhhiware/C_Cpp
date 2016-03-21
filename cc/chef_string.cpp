#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	
	int T,l,i;
	char* S;
	scanf("%d",&T);
	
	while(T--){
	    scanf("%s",S);
	    l = strlen(S);
	   int id1,id2;
	   id1 =0 ;id2 = 0;
	    for(i=0;i<l;i++){
	     if(i%2==0){
	         if(S[i]=='+')  id2++;
	         else id1++;
	     }
	     else{
	         if(S[i]=='+') id1++;
	         else id2++;
	     }
	    }
	    if(id1<id2){id1 =  id2 ;}
	    printf("%d\n",l-id1);

	}
	return 0;
}


