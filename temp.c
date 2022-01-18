#include<stdio.h>

int main(){
    #ifndef ONLINE_JUDGE

    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);

    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);

#endif
    int n,k;
    scanf("%d %d",&n,&k);
    printf("%d %d",n,k);
    return 0;
}