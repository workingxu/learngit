#include<stdio.h> 

void printOneToNBit(int N)  
{  
 int number = 1;  
 int i,j;  
 for(i = 1;i <= N;i++)  
 {  
     number = 10 * number;  
 }  
   
 // Êä³ö[1,10^N - 1]  
 for(j = 1;j < number;j++)  
 {  
    printf("%d\n",j);  
 }  
}  
   
int main()  
{  
    int N;  
    scanf("%d",&N);  
    printOneToNBit(N);  
    return 0;  
}  
