
#include<stdio.h>

int main()
{
    int T;
    long int N;
    long long int M;

    scanf("%d",&T);
    while(T--)
    {
        scanf("%ld%lld",&N,&M);M--;
        long int m = M%N;
        //if(!(M%N)){ printf("%ld %lld\n",m/2+1,(M/N)); }
        if(M%2){ printf("%ld %lld\n",(m/2+1),(M/N)) ; }
        else{printf("%ld %lld\n",(N-m/2),(M/N)); }

        
    }

}
