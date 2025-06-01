#include <vector>
#include <numeric>
#include <algorithm>
#include <cmath>

// ---------------------------------------------------
// 📌 Наибольший общий делитель (НОД)
// ---------------------------------------------------
int gcd(int a, int b) {
    return std::gcd(a, b);
}

// ---------------------------------------------------
// 📌 Наименьшее общее кратное (НОК)
// ---------------------------------------------------
int lcm(int a, int b) {
    return std::lcm(a, b);
}

// ---------------------------------------------------
// 📌 Проверка на простое число
// ---------------------------------------------------
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

// ---------------------------------------------------
// 📌 Генерация простых чисел (решето Эратосфена)
// ---------------------------------------------------
std::vector<int> sieve(int n) {
    std::vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    std::vector<int> primes;
    for (int i = 2; i <= n; ++i) {
        if (is_prime[i]) primes.push_back(i);
    }
    return primes;
}

// ---------------------------------------------------
// 📌 Модульное возведение в степень (быстрое возведение в степень)
// ---------------------------------------------------
long long modPow(long long base, long long exponent, long long mod) {
    long long result = 1;
    base %= mod;
    while (exponent > 0) {
        if (exponent & 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exponent >>= 1;
    }
    return result;
}

// ---------------------------------------------------
// 📌 Факториал и комбинаторные формулы (C(n, k))
// ---------------------------------------------------
long long factorial(int n) {
    long long res = 1;
    for (int i = 2; i <= n; ++i) res *= i;
    return res;
}

long long C(int n, int k) {
    if (k > n) return 0;
    return factorial(n) / (factorial(k) * factorial(n - k));
}

// ---------------------------------------------------
// 📌 Возведение в степень (std::pow)
// ---------------------------------------------------
double example_pow_abs(double x, double y) {
    return std::pow(x, y);
}
