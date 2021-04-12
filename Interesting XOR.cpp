#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void solution()
{
    ll C;
    cin>>C;
    ll A = pow(2, floor(log2(C))) -1;
    ll B = A ^ C;
    cout<<A*B<< "\n";
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll t;
    cin>>t;
    while(t--){
        solution();
    }
}
