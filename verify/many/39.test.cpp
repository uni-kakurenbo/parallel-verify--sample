/*
 * @uni_kakurenbo
 * https://github.com/uni-kakurenbo/competitive-programming-workspace
 *
 * CC0 1.0  http://creativecommons.org/publicdomain/zero/1.0/deed.ja
 */
/* #language C++ 20 GCC */

#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_D"

#include <iostream>

signed main() {
    long t; std::cin >> t;
    std::cout << (t / (60 * 60)) << ':' << ((t / 60) % 60) << ':' << (t % 60) << '\n';
}
