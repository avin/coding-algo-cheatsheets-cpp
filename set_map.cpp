#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <iterator>

// ---------------------------------------------------
// 📌 Создание std::set и std::map
// ---------------------------------------------------
void example_creation() {
    std::set<int> s = {1, 2, 3};
    std::map<std::string, int> m;
}

// ---------------------------------------------------
// 📌 Добавление / удаление
// ---------------------------------------------------
void example_insert_erase() {
    std::set<int> s = {1, 2, 3};
    s.insert(4);
    s.erase(2);
    std::map<std::string, int> m;
    m["a"] = 1;
    m.erase("a");
}

// ---------------------------------------------------
// 📌 Проверка наличия
// ---------------------------------------------------
void example_has() {
    std::set<int> s = {1, 2, 3};
    bool has1 = s.count(1) > 0;
    std::map<std::string, int> m = {{"a",1}};
    bool hasA = m.find("a") != m.end();
}

// ---------------------------------------------------
// 📌 Итерирование
// ---------------------------------------------------
void example_iteration() {
    std::set<int> s = {1, 2, 3};
    for (int val : s) std::cout << val << std::endl;
    std::map<std::string, int> m = { {"k1", 1}, {"k2", 2} };
    for (const auto& kv : m) std::cout << kv.first << " => " << kv.second << std::endl;
}

// ---------------------------------------------------
// 📌 Счётчик частот и сортировка по значению
// ---------------------------------------------------
void example_freq(const std::vector<int>& data) {
    std::map<int, int> freq;
    for (int x : data) {
        freq[x]++;
    }
    std::vector<std::pair<int,int>> vec(freq.begin(), freq.end());
    std::sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {
        return a.second < b.second;
    });
}

// ---------------------------------------------------
// 📌 Множества: объединение, пересечение, разность
// ---------------------------------------------------
void example_set_operations(const std::set<int>& a, const std::set<int>& b) {
    std::set<int> uni;
    std::set_union(a.begin(), a.end(), b.begin(), b.end(), std::inserter(uni, uni.begin()));
    std::set<int> inter;
    std::set_intersection(a.begin(), a.end(), b.begin(), b.end(), std::inserter(inter, inter.begin()));
    std::set<int> diff;
    std::set_difference(a.begin(), a.end(), b.begin(), b.end(), std::inserter(diff, diff.begin()));
}