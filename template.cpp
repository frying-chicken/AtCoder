// ver 1.6.0
// 駆け出したプログラマ

#include <bits/stdc++.h>
#include <atcoder/all>

#ifdef LOCAL
constexpr bool is_debug = true;
#else
constexpr bool is_debug = false;
#endif

//----------------------------------------------------------------
using i8 = int8_t;
using i16 = int16_t;
using i32 = int32_t;
using i64 = int64_t;

using u8 = uint8_t;
using u16 = uint16_t;
using u32 = uint32_t;
using u64 = uint64_t;

template <typename T>
using vec = std::vector<T>;

//----------------------------------------------------------------
template <typename T>
struct is_vector : std::false_type {};
template <typename T>
struct is_vector<vec<T>> : std::true_type {};

//----------------------------------------------------------------
template <class T, size_t idx = 0, size_t n>
auto make_vec(const size_t(&d)[n], const T v = {})
{
    if constexpr (idx < n)
        return vec(d[idx], make_vec<T, idx + 1>(d, v));
    else
        return v;
}

//----------------------------------------------------------------
template<int m>
std::istream& operator>>(std::istream& is, atcoder::static_modint<m>& x);
template<int m>
std::ostream& operator<<(std::ostream& os, const atcoder::static_modint<m>& x);

//----------------------------------------------------------------
template <typename T>
void _in(T& x) { std::cin >> x; }
template <typename T, typename U>
void _in(std::pair<T, U>& x) { std::cin >> x.first >> x.second; }
template <typename... Ts>
void _in(std::tuple<Ts...>& x) { std::apply([](auto &...xs) { (_in(xs), ...); }, x); }
template <std::ranges::range T>requires(!std::convertible_to<T, std::string_view>)
void _in(T& x) { for (auto& i : x)_in(i); }
template <typename... Ts>
void in(Ts &...xs) { (_in(xs), ...); }

struct _Input {
    template<typename T>
    operator T() { T x;_in(x);return x; }
}input;

template <typename T, typename std::enable_if<!is_vector<T>::value, std::nullptr_t>::type = nullptr>
T in() { return static_cast<T>(input); }
template <typename T, typename U, typename... V>
std::tuple<T, U, V...> in() { return in<std::tuple<T, U, V...>>(); }
template <typename T, typename std::enable_if<is_vector<T>::value, std::nullptr_t>::type = nullptr>
T in(size_t n = input) { T x(n);_in(x);return x; }

//----------------------------------------------------------------
template <typename T>
void _out(const T& x) { std::cout << x << " "; }
template <typename T, typename U>
void _out(const std::pair<T, U>& x) { std::cout << x.first << " " << x.second << " "; }
template <typename... Ts>
void _out(const std::tuple<Ts...>& x) { std::apply([](const auto &...xs) { (_out(xs), ...); }, x); }
template <std::ranges::range T>requires(!std::convertible_to<T, std::string_view>)
void _out(const T& x) { for (const auto& i : x)_out(i); }
template <typename... Ts>
void out(const Ts &...xs) { (_out(xs), ...);_out("\n"); }

template <typename... Ts>
void debug(const Ts &...xs) { if constexpr (is_debug)out("debug: ", xs...); }

//----------------------------------------------------------------
constexpr i8 dx[8] = { 0, 1, 0, -1, 1, -1, 1, -1 };
constexpr i8 dy[8] = { 1, 0, -1, 0, 1, -1, -1, 1 };

constexpr bool in_bounds(i64 x, i64 n) { return 0 <= x && x < n; }
constexpr bool in_bounds(i64 y, i64 x, i64 h, i64 w) { return in_bounds(y, h) && in_bounds(x, w); }

template <typename T>
bool chmin(T& a, const T& b) { return a > b ? a = b, true : false; }
template <typename T>
bool chmax(T& a, const T& b) { return a < b ? a = b, true : false; }

template<std::integral... Args>
std::common_type_t<Args...> max(const Args... args) { return std::max<std::common_type_t<Args...>>({ static_cast<std::common_type_t<Args...>>(args)... }); }
template<std::integral... Args>
std::common_type_t<Args...> min(const Args... args) { return std::min<std::common_type_t<Args...>>({ static_cast<std::common_type_t<Args...>>(args)... }); }

bool YESNO(bool b) { _out(b ? "YES" : "NO");return b; }
bool YesNo(bool b) { _out(b ? "Yes" : "No");return b; }
bool yesno(bool b) { _out(b ? "yes" : "no");return b; }

template<int m>
std::istream& operator>>(std::istream& is, atcoder::static_modint<m>& x) { int a;is >> a;x = a;return is; }
template<int m>
std::ostream& operator<<(std::ostream& os, const atcoder::static_modint<m>& x) { os << x.val();return os; }

void set_fixed_precision(int n = 0)
{
    if (n > 0)
        std::cout << std::fixed << std::setprecision(n);
}

void Init();
void Main();
int main() {
    Init();
    do {
        Main();
        if constexpr (!is_debug) break;
        std::cout << "Run Main() again? [y/N]" << std::endl;
    } while (in<char>() == 'y');
}

//----------------------------------------------------------------
//================================================================
//----------------------------------------------------------------
#define int i64
#define uint u64

using mint = atcoder::static_modint<1>;

void Init()
{
    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);
    set_fixed_precision();
}

using namespace std;

//================================================================
//----------------------------------------------------------------
//================================================================

void Main()
{
    out("a", 1);
}