#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    cin >> T;

    while(T--)
    {
        int N, i, j, k = 0, carry = 0, arr[100000] = {1};

        cin >> N;

        for(i = 1; i <= N; i++)
        {
            for(j = 0; j <= k; j++)
            {
                arr[j] = arr[j] * i + carry;
                carry = arr[j] / 10;
                arr[j] %= 10;
            }

            while(carry != 0)
            {
                k++;
                arr[k] = carry % 10;
                carry /= 10;
            }
        }

        for(i = k; i >= 0; i--)
            cout << arr[i];

        cout << endl;
    }

    return 0;
}
