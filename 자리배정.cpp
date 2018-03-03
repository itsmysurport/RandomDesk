#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main() 
{ 
   int counter = 0;
   int i; 
   int num[20]; 
   int temp=0; 
   int temp2=0; 
   for (i=0;i<20;i++) 
   { 
      num[i] =i+1; 
   } 
   srand((unsigned int)time(NULL)); 
   for (i=0;i<20;i++) 
   { 
      temp = rand()%20; 
      temp2  = num[temp]; 
      num[temp] = num[i]; 
      num[i] = temp2; 
   } 
   
   int k;
   for(k = 0; k < 5; k++)
   {
   		printf("%d모둠의 자리배치입니다.\n",k+1);
   		for(int j = 0; j < 4; j++)
   		{
   			printf("%d\t",num[counter++]);
   			if (j % 2 == 1) putchar('\n');
		}
		putchar('\n');
   }
   getchar();
   
} 
