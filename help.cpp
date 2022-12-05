#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define vi vector<int>
#define vll vector<long long>
#define vpi vector<pair<int, int>>
#define pi pair<int, int>
#define endl "\n"
#define mod 1000000007
#define all(x) x.begin(), x.end()

ll power(ll a, ll b)
{
    ll ans = 1;
    while (b > 0)
    {
        if ((b & 1) == 1)
            ans = ((ans % mod) * (a % mod)) % mod;
        a = ((a % mod) * (a % mod)) % mod;
        b = b >> 1;
    }
    return ans % mod;
}

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
void solve()
{
    int n;
    cin >> n;
    vector<ll> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = 0;
    while (arr.size() >= 0)
    {
        if (arr.size() == 2)
        {
            int val2 = arr.back();
            arr.pop_back();
            int val1 = arr.back();
            arr.pop_back();
            if (val1 > val2)
            {
                ans++;
            }
            cout << ans << '\n';
            return;
        }
        int val4 = arr.back();
        arr.pop_back();
        int val3 = arr.back();
        arr.pop_back();
        int val2 = arr.back();
        arr.pop_back();
        int val1 = arr.back();
        arr.pop_back();
        if(abs(val4-val3) != abs(val2-val1))
        {
            cout<<-1<<'\n';
            return;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
