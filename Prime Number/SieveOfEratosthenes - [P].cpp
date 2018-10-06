#include<bits/stdc++.h>

using namespace std;

void SieveOfEratosthenes(int n)
{
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for(int p = 2; p*p <= n; p++)
    {
        if(prime[p] == true)
        {
            for(int i = 2*p; i <= n; i = i+p)
                prime[i] = false;
        }
    }

    for(int p = 2; p <= n; p++)
        if(prime[p])
            cout << p << " ";
}

int main()
{
    int n = 1000;
    cout << "Following are the prime number less than or equal to " << n << endl << endl;
    SieveOfEratosthenes(n);
    cout << endl;
    return 0;
}