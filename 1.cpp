/*��ָoffer��12�� 
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
		}                  //�ݹ���ֹ����  
        printf("\n");
		return;  
    }  
    for (i = 0; i < 10; i++)  
    {  
        p[m + 1] = i;  
        arrang(p, n, m + 1);            //����nλ������ȫ���У�ÿһλ����0��9ʮ�ֿ���  
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