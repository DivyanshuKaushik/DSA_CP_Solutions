#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
            vector<long int> arr(n);
            for (size_t i = 0; i < n; i++)
                cin>>arr[i];
            
            long int result=9999999999;
            for (size_t i = 0; i < n-1; i++)
            {
                long int temp = (arr[i] & arr[i+1]) ^ (arr[i] | arr[i+1]);
                result = min(result,temp);
            }
            cout<<result<<endl;

    }
    return 0;
}