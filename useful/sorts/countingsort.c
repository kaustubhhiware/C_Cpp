#include<stdio.h>


//----------------------------------------------- implementing counting sort , a non comparison based sort

int main()
{
    int n,i,k=0;
    printf("+++ enter the number of elements :");scanf("%d",&n);

    int A[n];//input array

    printf("\n+++ enter the elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
        
        if( A[i]>k){k = A[i];}
    }
    //k gives the range of inputs

    int C[k+1];// C[i] stores the number of elements less than or equal to i
    
    for(i=0;i<k+1;i++)
    {
        C[i] = 0;
    }

    for(i=0;i<n;i++)
    {
        C[A[i]]++;
    }

    for(i=1;i<k+1;i++)
    {
        C[i]+= C[i-1];
    }
    for(i=0;i<k+1;i++)
    {
        printf("\nC[%d] = %d",i,C[i]);
    }
    int B[n];//output array

    printf("\n the sorted array is : ");

    for(i=n-1;i>-1;i--)
    {
        B[C[A[i]]-1] = A[i];

        C[A[i]]--;
    }

    for(i=0;i<n;i++)
    {
       printf(" %d ",B[i]);
    }

    printf("\n Later , Gator!\n");
   
}
