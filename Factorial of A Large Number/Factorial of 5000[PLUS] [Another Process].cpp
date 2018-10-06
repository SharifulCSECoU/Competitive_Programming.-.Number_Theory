#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    cin >> T;

    while(T--)
    {
        int Arr[100000], Remainder, i = 0, N, m = 0, flag;

        cin >> N;

        flag = N;

        while(flag != 0)
        {
            Remainder = flag % 10;
            Arr[i] = Remainder;
            flag /= 10;
            i++;
            m++;
        }

        for(i = 2; i < N; i++)
        {
            int temp = 0, x = 0, index = 0;

            for(index = 0; index < m; index++)
            {
                x = Arr[index] * i + temp;
                Arr[index] = x % 10;
                temp = x / 10;
            }

            while(temp != 0)
            {
                Arr[index] = temp % 10;
                temp = temp / 10;
                index++;
                m++;
            }
        }

        for(i = m-1; i >= 0; i--)
            cout << Arr[i];

        cout << endl;
    }

    return 0;
}
