#include<stdio.h>

int main()
{
    long int k,n,i,count;
    scanf("%ld%ld",&n,&k);
    count = n;
    
    long int id[k];
    for(i=0;i<k;i++)
    {  printf(" %ld -",count);
        scanf("%ld",&id[i]);
        if(id[i]==n || id[i]==1)
            {count = count-1;}
        else {count-=2;}

    }
        count = count - n/2;
    printf("%ld\n",count);

}
