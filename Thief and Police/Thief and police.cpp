#include <iostream>
#define ll long long int
using namespace std;
int main() {
    ll TC;
    cin>>TC;
    while(TC--){
        ll n, m; cin >> n >> m;
        ll x, y; cin >> x >> y;
        ll a, b; cin >> a >> b;

        ll police, thief;

        thief = n - x + m - y;
        police = n - a + m - b - min(n - a, m - b);

        cout << ((thief <= police) ? "YES\n" : "NO\n");
    }
    return 0;
}
