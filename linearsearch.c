#include<stdio.h>
int main()
{
   
    int pos=-1;
    int n,a[10],key,i;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to be search\n");
    scanf("%d",&key);
    for(int i=0;i<n;i++)
    {
      if(a[i]==key)
      {
        pos=i;
        break;
      }
    }
    if(pos==-1)
    printf("%d is not  present\n",key);
    else
    printf("%d is present at index:%d \n",key,pos);
}

