#include<stdio.h>
void printMaxmeetings(int s[], int f[], int n)
{
    int i, j;
 
    printf ("Following meetings are selected \n");
 

    i = 0;
    printf("%d ", i);
 
    for (j = 1; j < n; j++)
    {
     
      if (s[j] >= f[i])
      {
          printf ("%d ", j);
          i = j;
      }
    }
}
 

int main()
{
int i,n;
printf("Enter no of meetings");
scanf("%d",&n);
    int s[n], f[n];
   for( i = 0;i<n;i++)
scanf("%d %d",&s[i],&f[i]);
    printMaxmeetings(s, f, n);
    return 0;
} 
