#include <stdio.h>
int main(){
   char* c;
   char* ch;
   int i,count=0;
   printf("Enter a string: \n");
   gets(c);
   printf("Enter a character to find frequency: \n");
   //ch='a';
   gets(ch);
   for(i=0;c[i]!='\0';++i)
   {
       if(*ch==*(c+i))
           ++count;
   }
   printf("Frequency of %c = %d\n", ch, count);
   return 0;
}

