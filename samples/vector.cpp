#include <iostream>
#include <algorithm>
#include <vector>

#define REP(i,n) for(long long i=0;i<(n);i++)
#define LL long long
using namespace std;

int sample_vector(void) {
    // template
    ios::sync_with_stdio(false);

    // ループして入力を受け取る
    LL val;
    vector<LL> v;
    REP(i, 100) {
        cin >> val;
        v.push_back(val);
    }

    // 昇順にsortする
    sort(v.begin(), v.end());
    // 降順にsortする
    sort(v.rbegin(), v.rend());
    
    REP(i, v.size()) {
    	cout << v[i] << endl;
    }
}
