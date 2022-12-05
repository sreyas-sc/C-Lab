#include <stdio.h>
#include <string.h>
int main()
{
    printf("\n enter the count of array elements \n");
    int s;
    scanf("%d",&s);
    int arr[s],i;
    char bs[s];
    printf("\n enter the array elements \n");
    for(i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
        int x=(arr[i]%2!=0)?1:0;    
        bs[i]=x+'0';
    }
    

    printf("\n bit string = ");
    for(i=0;i<s;i++)
    {
        printf(" %c ",bs[i]);
    }


    return 0;
}
