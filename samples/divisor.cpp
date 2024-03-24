#include <iostream>
#include <algorithm>
#include <vector>

#define REP(i, n) for(long long i=0;i<(n);i++)
#define LL long long
using namespace std;

// https://algo-method.com/descriptions/84 を改変
// N の約数をすべて求める関数
vector<LL> calc_divisors(LL N) {
    vector<LL> res;

    // 各整数 i が N の約数かどうかを調べる
    for (LL i = 1; i * i <= N; ++i) {
        // i が N の約数でない場合はスキップ
        if (N % i != 0) continue;

        // i は約数である
        res.push_back(i);

        // N ÷ i も約数である
        // 平方数の場合に重複しないようにする
        if (N / i != i) res.push_back(N / i);
    }

    // 約数を小さい順に並び替えて出力
    sort(res.begin(), res.end());
    return res;
}