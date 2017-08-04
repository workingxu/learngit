/*剑指offer第12题 
*/

#include<stdio.h> 
#include<stdlib.h>


  
void arrang(int *p, int n, int m)  
{  
    int i = 0;  
    if (m == n - 1)  
    {  
        for (int j=0;j<n;j++)
		{
			printf("%d",p[j]);
		}                  //递归终止条件  
        printf("\n");
		return;  
    }  
    for (i = 0; i < 10; i++)  
    {  
        p[m + 1] = i;  
        arrang(p, n, m + 1);            //对着n位数进行全排列，每一位都有0到9十种可能  
    }  
}  
  
int main()  
{  
    int n = 0;  
    scanf("%d", &n);  
    int *p = (int *)calloc(n, sizeof(int));  
    arrang(p, n, -1);  
    free(p);  
    system("pause");  
    return 0;  
}  
