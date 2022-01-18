#include<bits/stdc++.h>

using namespace std;

// binary search function
int binarySearch(int arr[],int n,int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid = (s+e)/2;

        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}

int main(){
          
#ifndef ONLINE_JUDGE

    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);

    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);

#endif

    int n;
    cin>>n;
    int arr[n];
    for (size_t i = 0; i < n; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<binarySearch(arr,n,key);

    return 0;
}