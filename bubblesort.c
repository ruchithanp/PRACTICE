#include <stdio.h>
void main()
{
    int n,a[20],i,t,j;
    printf("Enter limit:");
    scanf("%d",&n);
    
    printf("Enter the Elements:");
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
      
    printf("The Elements before sorting:");
    for(i=0;i<n;i++)
      printf("%d ",a[i]);
 
 //i=0    i=8
 for(i=0;i<n-1;i++)//start sorting from 1st element
   {
       for(j=0;j<n;j++)//compare with rest
         {
             if(a[j]>a[j+1]) //swap if greater
                {
                   t=a[j];
                   a[j]=a[j+1];
                   a[j+1]=t;
                }
         }
   }
 
  printf("\nThe Elements after sorting:");
    for(i=0;i<n;i++)
      printf("%d ",a[i]);

}
