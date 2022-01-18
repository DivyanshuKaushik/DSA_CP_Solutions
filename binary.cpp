#include<bits/stdc++.h>

using namespace std;
int hoursum(int arr[6][6]){
    int max_sum=INT_MIN;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            int sum =arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            max_sum = max(max_sum,sum);
        }
    }
    return max_sum;
}

int main(){
    
#ifndef ONLINE_JUDGE

    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);

    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);

#endif
    int arr[6][6];
    for(int i=0;i<6;i++){
        for (int  j = 0; j < 6; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    cout<< hoursum(arr);

    return 0;
}