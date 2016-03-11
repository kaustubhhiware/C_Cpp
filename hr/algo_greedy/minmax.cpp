#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int min(int *a,int n,int x)
{
	int i,min,max;
	min=a[0];max=a[0];

	for(i=0;i<n;i++)//gives number just smaller than x
	{
		if(a[i]<x && a[i]>min){min = a[i];}
	}

	for(i=0;i<n;i++)//gives number just larger than x
	{
		if(a[i]>x && a[i]<max){max = a[i];}
	}

	if((x-min)<(max-x))
	{
		return (x-min);			
	}
	else return (max-x);


}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	int n;
	cin>>n;
	
	int a[n],p,q,i;
	for(i=0;i<n;i++){cin>>a[i];}
   	
	cin>>p>>q;
	
	int mini[q-p+1];
	for(i=p;i<q+1;i++)
	{
		mini[i] = min(a,n,i);
	}// |min| for each possible M

	int max=0;int t=p;
	for(i=p;i<q+1;i++)
	{
		if(mini[i]>max)
		{
			max=mini[i];t=i;
		}
	}

	cout<<t;
	return 0;
}
