#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void MergeSort(char* str, int n)  
{  
    if (n == 1)  
    {  
        return; 
    }  
    else  
    {  

        int m = n/2;  
  
        char* a = new char[m];  
        char* b = new char[n-m];  

        for (int i = 0; i < m; i++) a[i] = str[i];  
        for (int i = m; i < n; i++) b[i-m] = str[i];  
  
        MergeSort(a, m);  
        MergeSort(b, n-m);  
     
        int l = 0;  
        int r = 0;  
        int k = 0;  
  
        while (l < m && r < n-m)  
        {  
     
            if (a[l] <= b[r])          
            {              
                str[k] = a[l];              
                l++;          
            }       
            else          
            {              
                str[k] = b[r];              
                r++;          
            }  
  
            k++;  
        }  
   
           if (l < m)  
        {  
            while (l < m)  
            {  
                str[k] = a[l];  
                l++;  
                k++;  
            }  
        }    
        if (r < n-m)  
        {  
            while( r < n-m)  
            {  
                str[k] = b[r];  
                r++;  
                k++;  
            }  
        }  
  
        //return str;  
    }  
}  
  

int main() {
    int n,i,j;
    
    cin>>n;
    
    char str[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>str[i][j];
        }
        MergeSort(str[i],n);
    }
	cout<<"\n";
       
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n;j++)
        {
            if(str[i][j]>str[i+1][j])
            {
                cout<<"\nNO]n";exit(0);
            }
        }     
    }
    cout<<"\nYES\n";
}

