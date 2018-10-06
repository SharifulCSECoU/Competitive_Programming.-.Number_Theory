#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    cin >> T;

    while(T--)
    {
        int N, CNT = 0;

        cin >> N;

        while(N >= 5)
        {
            CNT += N / 5;
            N /= 5;
        }

        cout << CNT << endl;
    }

    return 0;
}
