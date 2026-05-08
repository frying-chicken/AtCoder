#include <bits/stdc++.h>
using namespace std;

void Main();
int main()
{
    Main();
    cout << endl;
}

using i8 = int8_t;
using i16 = int16_t;
using i32 = int32_t;
using i64 = int64_t;

using u8 = uint8_t;
using u16 = uint16_t;
using u32 = uint32_t;
using u64 = uint64_t;

using vs = vector<string>;

using vi = vector<i64>;
using vu = vector<u64>;

#define int i64
#define uint u64

#define all(x) std::begin(x), std::end(x)

template <size_t idx = 0, typename... T, typename Function>
void for_each(tuple<T...> &x, Function f)
{
    if constexpr (idx < sizeof...(T))
    {
        f(get<idx>(x));
        for_each<idx + 1>(x, f);
    }
}
template <size_t idx = 0, typename... T, typename Function>
void for_each(const tuple<T...> &x, Function f)
{
    if constexpr (idx < sizeof...(T))
    {
        f(get<idx>(x));
        for_each<idx + 1>(x, f);
    }
}

template <class T, size_t idx = 0, size_t n>
auto make_vector(const size_t (&d)[n]) noexcept
{
    if constexpr (idx + 1 < n)
        return vector(d[idx], make_vector<T, idx + 1>(d));
    else
        return vector<T>(d[idx]);
}
template <class T, size_t idx = 0, size_t n>
auto make_vector(const size_t (&d)[n], const T v) noexcept
{
    if constexpr (idx < n)
        return vector(d[idx], make_vector<T, idx + 1>(d, v));
    else
        return v;
}

template <ranges::range T>
void _in(T &x);

template <typename T>
void _in(T &x) { cin >> x; }
void _in(string &x) { cin >> x; }
template <typename... T>
void _in(tuple<T...> &x)
{
    for_each(x, [](auto &x)
             { _in(x); });
}
template <ranges::range T>
void _in(T &x)
{
    for (auto &i : x)
        _in(i);
}
void in() {};
template <typename Head, typename... Tail>
void in(Head &&head, Tail &&...tail)
{
    _in(head);
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

template <typename T>
T in() { return static_cast<T>(input); }
template <typename T, typename U, typename... V>
tuple<T, U, V...> in() { return in<tuple<T, U, V...>>(); }

template <typename... T>
void _out(const tuple<T...> &x);

template <typename T>
void _out(const T &x) { cout << x << " "; }
void _out(const string &x) { cout << x << " "; }
template <typename... T>
void _out(const tuple<T...> &x)
{
    for_each(x, [](const auto &x)
             { _out(x); });
}
template <ranges::range T>
void _out(const T &x)
{
    for (const auto &i : x)
        _out(i);
}
void out() {};
template <class Head, class... Tail>
void out(Head &&head, Tail &&...tail)
{
    _out(head);
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
}