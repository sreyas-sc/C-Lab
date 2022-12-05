#include<stdio.h>
int main()
{
 int a[50],i,x,pos=0,flag=0,n;
 printf("Enter No. of Elements : ");
 scanf("%d",&n); 
 printf("Enter Array Elements : ");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("enter the element to be searched");
 scanf("%d",&x);
 for(i=0;i<n;i++)
 {
    if(a[i]=x)
    {
        flag=1;
        pos=pos+1;
        break;
    }
 }
 if(flag==1)
 {
    printf("element found at position %d",pos);
 }
 else
 {
 printf("element not found")
 }
 }
