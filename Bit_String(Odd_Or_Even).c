#include <stdio.h>

int main()
{
    printf("\n enter the count of array elements \n");
    int s;
    scanf("%d",&s);
    int arr[s],i,bs[s];
    printf("\n enter the array elements \n");
    for(i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
        bs[i]=(arr[i]%2!=0)?1:0;
    }
    

    printf("\n bit string = ");
    for(i=0;i<s;i++)
    {
        printf(" %d ",bs[i]);
    }

    printf("\n odd elements array = ");
    for(i=0;i<s;i++)
    {
        if(bs[i]==1)
        {
            printf(" %d ",arr[i]);
        }
    }
    return 0;
}