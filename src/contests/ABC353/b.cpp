#include <bits/stdc++.h>
using namespace std;

#define _overload3(_1,_2,_3,name,...) name
#define _rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)
#define rep(...) _overload3(__VA_ARGS__,repi,_rep,)(__VA_ARGS__)

#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
#define YesNo(a) (a)?cout<<"Yes"<<endl:cout<<"No"<<endl
#define YESNO(a) (a)?cout<<"YES"<<endl:cout<<"NO"<<endl
#define INF (2e9)
#define longINF (2e18)
#define PI (acos(-1))
#define all(x) (x).begin(),(x).end()
#define MOD 1000000007

typedef long long ll;

int main(){
    int N, K; cin >> N >> K;
    int A[N]; rep(i, N) cin >> A[i];

    int current_occupation = 0;
    int result = 0;
    rep(i, N) {
        if(current_occupation + A[i] <= K) {
            current_occupation += A[i];
        } else {
            current_occupation = A[i];
            result++;
        }
    }

    if(current_occupation > 0) result++;

    cout << result << endl;
}