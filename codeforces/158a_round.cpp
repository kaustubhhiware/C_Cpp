#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int i,n,k,x,kth,count=0;
    cin>>n>>k;
    
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(count<k){count++;}
        else if(count==k){kth = x;count++;}
        else if(x==kth){count++;}
        else{break;}
    }
    cout<<count;
}

