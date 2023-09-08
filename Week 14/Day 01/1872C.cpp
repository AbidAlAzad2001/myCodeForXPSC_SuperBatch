#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int divisor(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return i;
    }
    return n;
}

void TEST_CASE()
{
    int l,r;
    cin>>l>>r;
    if((l == r && is_prime(l)) || r<=3)
    {
        cout<<-1<<endl;
        return;
    }

    for(long long i = r;i>=l;i--)
    {
        if(i%2 == 0)
        {
            cout<<2<<" "<<i-2<<endl;
            return;
        }
    }

    for(long long i=l;i<=r;i++)
    {
        long long int ans = divisor(i);
        if(__gcd(ans,i-ans)!=1)
        {
            cout<<ans<<" "<<i-ans<<endl;
            return;
        }
    }
    cout<<-1<<endl;
    return;
}

int main()
{
    int Abid;
    cin >> Abid;
    while (Abid--)
    {
        TEST_CASE();
    }

    return 0;
}