#include<bits/stdc++.h>

using namespace std;

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
    
    // selection sort 
    for (int  i = 0; i < n-1; i++)
    {   
        for (int  j = i+1; j < n; j++)
        {
            if(arr[j]<arr[i]){
                int temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
        
    }
    
    for (size_t i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}