#include<stdio.h>

int search(int arr[],int n,int f){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==f)
        {
            return i;
        }
        
    }
    return 0;
    
}

int main(){
    int n;
    printf("enter size:\n");
    scanf("%d",&n);
    printf("enter array\n");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ",&arr[i]);
    }
    int f;
    printf("enter no to search:\n");
    scanf("%d",&f);
    
    int result = search(arr,n,f);
    result ? printf("found at pos %d",result+1) : printf("not found\n");
    return 0;
}