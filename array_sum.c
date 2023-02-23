#include <stdio.h>
int main(){
    int n,arr[n];
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int i;
    for ( i = 0; i < n; i++)
    {
        printf("Enter the %d element:",i);
        scanf("%d",&arr[i]);
    }
    printf("Here is your array:\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    int sum=0;
    for ( i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    printf("\nHere the sum of all elements in array:%d",sum);
    
}
