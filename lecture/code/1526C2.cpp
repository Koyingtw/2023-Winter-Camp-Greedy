// Problem: C2. Potions (Hard Version)
// Contest: Codeforces - Codeforces Round #723 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1526/C2
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define Weakoying ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define int long long
#define pii pair<int, int>
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pqueue priority_queue
#define pb push_back
#define F first
#define S second
#define max(a, b) (a > b ? a : b)
#define min(a, b) (a < b ? a : b)
#define cmax(a, b) a = (a > b ? a : b)
#define cmin(a, b) a = (a < b ? a : b)
#define put(x) cout << x << endl;
#define DB(x) cerr << #x << " " << x << endl
#define all(v) v.begin(), v.end()
#define stop system("pause");
#define MEM(x, n) memset(x, n, sizeof(x));
#define lowbit(x) x &(-x)
#if !LOCAL
#define endl "\n"
#endif
const int INF = 0x3f3f3f3f3f3f3f3f;
const int P = 1e9+7;

using namespace std;
/******************************************************************************/
#define MAXN 200005
#define MAXM 1000005 
int n, m;
int x[MAXN];

void sol() {
	cin >> n;
	for (int i = 0; i < n; i++)	
		cin >> x[i];
	priority_queue<int, vector<int>, greater<int>> pq;
	
	int ans = 0, cnt = 0;
	for (int i = 0; i < n; i++) {
		if (x[i] >= 0) {
			ans++;
			cnt += x[i];
		}
		else {
			ans++;
			cnt += x[i];
			pq.push(x[i]);
			while (cnt < 0) {
				ans--;
				cnt -= pq.top();
				pq.pop();
			}
		}
	}
	cout << ans << endl;
}

signed main() {
    Weakoying;
    int t = 1;
    //while (cin >> t)
	{
    	while (t--) {
            sol();
        }
    }
        
    return 0;
}