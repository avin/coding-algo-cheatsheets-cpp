#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>

// ---------------------------------------------------
// 📌 Создание std::set и std::unordered_set
// ---------------------------------------------------
void example_sets() {
    std::set<int> ordered = {1, 2, 3};
    std::unordered_set<int> unordered = {1, 2, 3};
}

// ---------------------------------------------------
// 📌 Создание std::map и std::unordered_map
// ---------------------------------------------------
void example_maps() {
    std::map<std::string, int> ordered_map;
    std::unordered_map<std::string, int> unordered_map;
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

    std::unordered_map<std::string, int> um = {{"a",1}};
    bool hasA = um.find("a") != um.end();
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
// 📌 Счётчик частот (std::unordered_map) и сортировка по значению (std::vector + std::sort)
// ---------------------------------------------------
void example_freq(const std::vector<int>& data) {
    std::unordered_map<int, int> freq;
    for (int x : data) {
        ++freq[x];
    }
    std::vector<std::pair<int,int>> vec(freq.begin(), freq.end());
    std::sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {
        return a.second < b.second;
    });
}

// ---------------------------------------------------
// 📌 Множества: объединение, пересечение, разность (std::set)
// ---------------------------------------------------
void example_set_operations(const std::set<int>& a, const std::set<int>& b) {
    std::set<int> uni;
    std::set_union(a.begin(), a.end(), b.begin(), b.end(), std::inserter(uni, uni.begin()));

    std::set<int> inter;
    std::set_intersection(a.begin(), a.end(), b.begin(), b.end(), std::inserter(inter, inter.begin()));

    std::set<int> diff;
    std::set_difference(a.begin(), a.end(), b.begin(), b.end(), std::inserter(diff, diff.begin()));
}