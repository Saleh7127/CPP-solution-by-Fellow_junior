#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define pi acos(-1)
using u32 = uint32_t; /* 0 ~ 4,294,967,295 */
using u64 = uint64_t; /* 0 ~ 18,446,744,073,709,551,615 */
#define m 1000000000000000000
void Main() {
    u32 N;
    cin >> N;
    Vec<u64> A(N);
    for (u32 i = 0; i < N; i++) {
        cin >> A[i];
        if (A[i] == 0) {
            cout << "0" << endl;
            return;
        }
    }
    u64 ans = 1;
    for (u32 i = 0; i < N; i++) {
        u64 b = ans;
        ans *= A[i];
        if (ans / A[i] != b || ans > 1000000000000000000) {
            cout << "-1" << endl;
            return;
        }
    }
    cout << ans << endl;

}
