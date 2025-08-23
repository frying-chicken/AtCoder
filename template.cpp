#include <bits/stdc++.h>
using namespace std;

void Main();
int main() { Main(); }

#define int long
using ui = unsigned int;
using ll = long long;
using ull = unsigned long long;

using vs = vector<string>;

using vi = vector<int>;
using vui = vector<ui>;
using vll = vector<ll>;
using vull = vector<ull>;

template <typename T>
concept IO = requires(T t) {
    cin >> t;
    cout << t;
};

template <typename T>
concept Tuple = requires { tuple_size<T>::value; };

template <typename C>
concept Container = requires(C c) {
    begin(c);
    end(c);
} && !same_as<C, string>;

template <Tuple T, typename Function, size_t idx = 0>
void for_each(T &t, Function f)
{
    if constexpr (idx < tuple_size<T>::value)
    {
        f(get<idx>(t));
        for_each<T, Function, idx + 1>(t, f);
    }
}
template <size_t n, class T, size_t idx = 0>
auto make_vec(const size_t (&d)[n], const T &v) noexcept
{
    if constexpr (idx < n)
        return vector(d[idx], make_vec<n, T, idx + 1>(d, v));
    else
        return v;
}

void in() {};
template <IO T>
void in(T &x) { cin >> x; }
template <Tuple T>
void in(T &t)
{
    for_each(t, [](auto &x)
             { in(x); });
}
template <Container C>
void in(C &c)
{
    for (auto &i : c)
        in(i);
}
template <typename T, typename... U>
void in(T &head, U &...tail)
{
    in(head);
    in(tail...);
}

struct Input
{
    template <typename T>
    operator T()
    {
        T x;
        in(x);
        return x;
    }
} input;

template <typename... Args>
tuple<Args...> in() { return input; }

void out() {};
template <IO T>
void out(const T &x) { cout << x << " "; }
template <Tuple T>
void out(const T &t)
{
    for_each(t, [](auto &x)
             { out(x); });
};
template <Container C>
void out(const C &c)
{
    for (auto &i : c)
        out(i);
}
template <class Head, class... Tail>
void out(const Head &head, const Tail &...tail)
{
    out(head);
    out(tail...);
}

void YESNO(bool b) { out(b ? "YES" : "NO"); }
void YesNo(bool b) { out(b ? "Yes" : "No"); }
void yesno(bool b) { out(b ? "yes" : "no"); }

template <typename T>
bool chmin(T &a, const T &b) { return a > b ? a = b, true : false; }
template <typename T>
bool chmax(T &a, const T &b) { return a < b ? a = b, true : false; }

constexpr int dx[8] = {0, 1, 0, -1, 1, -1, 1, -1};
constexpr int dy[8] = {1, 0, -1, 0, 1, -1, -1, 1};

struct Fast
{
    Fast()
    {
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
    }
} fast;
//----------------------------------------------------------------
//================================================================
//----------------------------------------------------------------

void Main()
{
    auto [a, b, c] = in<int, string, double>();
    out(a, b, c);
}