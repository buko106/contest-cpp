#include <iostream>
#include <algorithm>
#include <vector>

#define REP(i, n) for(long long i=0;i<(n);i++)
#define LL long long
using namespace std;

vector<LL> sample_vector(void) {
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

    return v;
}

template<typename T>
T vector_min(vector<T> v) {
    return *min_element(v.begin(), v.end());
}

template<typename T>
T vector_max(vector<T> v) {
    return *max_element(v.begin(), v.end());
}

template<typename T>
istream &operator>>(istream &is, vector<T> &v) {
    for (LL i = 0; i < v.size(); i++)
        is >> v[i];
    return is;
}

template<typename T>
ostream &operator<<(ostream &os, const vector<T> &v) {
    for (LL i = 0; i < v.size(); i++) {
        os << v[i] << (i + 1 != v.size() ? " " : "");
    }
    return os;
}