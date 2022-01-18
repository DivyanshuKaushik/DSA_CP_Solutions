#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (n <= 5 * 10e5 && k<n)
        {
            vector<int> arr(n);
            for (size_t i = 0; i < n; i++)
                cin >> arr[i];

            sort(arr.begin(), arr.end(), greater<int>());
            
            int sum = 0;
            for (int i = 0; i < k; i++)
            {
                sum += arr[i];
            }
            cout << sum << endl;
        }
    }

    return 0;
}