#include <iostream>

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE

    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);

    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);

#endif
    long long n, m;
    cin >> n >> m;
    long long arr[2];
    arr[0]=n;
    arr[1]=m;
    cout<<*arr<<" "<<*(arr+1)<< endl;
    return 0;
}