#define NO 42
#include<stdio.h>
#include<stdlib.h>

struct entry{
int no;
struct entry *ptr;
}*top,*temp;

int main(){
int l,num;
top = NULL;
void print();

scanf("%d",&num);
while(num!=0)
{

if(top==NULL)
{
		top =(struct entry *)malloc(1*sizeof(struct entry));
		top->no = num;
		top->ptr =NULL;
}
else 
{
		temp =(struct entry *)malloc(1*sizeof(struct entry));
		temp->ptr = top;
		temp->no = num;
		top = temp;
}
}
print();
}


void print(){
	
	temp = top;
	while(temp!=NULL&&temp->no!=42){
		printf("%d",temp->no);
		temp=temp->ptr;
	
	}
	if(temp==NULL){
		return;
	}
	
}
