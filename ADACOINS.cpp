#include <bits/stdc++.h>

using namespace std;

#define sz(x) (int)x.size()
#define MASK(i) ((1LL) << (i))
#define all(x) x.begin(), x.end()
#define BIT(x, i) ((x) >> (i) & (1LL))
#define dbg(...) cerr << "#" << __LINE__ << ":[" << #__VA_ARGS__ \
<< "] = [" ,DBG(__VA_ARGS__)

string to_string(const string& s) { return '"' + s + '"'; }
void DBG() { cerr << "]" << endl; }
template<class H, class... T> void DBG(H h, T... t) {
        cerr << to_string(h); if(sizeof...(t)) cerr << ", "; DBG(t...);
}

template <class T>
inline bool maximize(T &a, const T &b) { return (a < b ? (a = b) : 0); }
template <class T>
inline bool minimize(T &a, const T &b) { return (a > b ? (a = b) : 0); }

const int MAXN = 1e5 + 6;
const int MAXM = 1e4 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;

int n, q, a[MAXN];
bitset<MAXM> f, g;

void solve() {
	cin >> n;

	for (int i = 1; i <= n; i++) cin >> a[i];
	
	if (n > 100) return (void) (cout << "YES\n");
	
	f.reset(), g.reset();
	
	for (int i = 1; i <= n; i++) {
		int x = a[i];
		f[x] = 1;
		f |= ((g) << (x));
		f |= ((g) >> (x));
		
		g = f;
		
		if (g[0]) return (void) (cout << "YES\n");
	}
	
	cout << "NO" << '\n';
}

#define TASK ""
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen(TASK".inp", "r", stdin);
    //freopen(TASK".out", "w", stdout);

    int ntest = 1;
    cin >> ntest;
    while (ntest--) solve();

    return 0;
}
//612

