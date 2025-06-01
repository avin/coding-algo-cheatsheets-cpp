#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <iostream>
#include <unordered_set>

// ---------------------------------------------------
// 📌 Создание вектора
// ---------------------------------------------------
void example_vector() {
    std::vector<int> arr;
    arr = {}; // инициализация пустого вектора
    arr.reserve(100); // зарезервировать память
}

// ---------------------------------------------------
// 📌 Итерация по вектору
// ---------------------------------------------------
void example_iteration(const std::vector<int>& arr) {
    for (size_t i = 0; i < arr.size(); ++i)
        std::cout << arr[i] << std::endl;

    for (const auto& x : arr)
        std::cout << x << std::endl;

    std::for_each(arr.begin(), arr.end(), [](int x) {
        std::cout << x << std::endl;
    });
}

// ---------------------------------------------------
// 📌 Фильтрация
// ---------------------------------------------------
std::vector<int> example_filter(const std::vector<int>& arr) {
    std::vector<int> filtered;
    std::copy_if(arr.begin(), arr.end(), std::back_inserter(filtered),
                 [](int x) { return x > 0; });
    return filtered;
}

// ---------------------------------------------------
// 📌 Поиск и условия
// ---------------------------------------------------
void example_find(const std::vector<int>& arr) {
    auto it = std::find(arr.begin(), arr.end(), 1);
    int index = (it != arr.end()) ? static_cast<int>(std::distance(arr.begin(), it)) : -1;
    bool hasValue = (it != arr.end());
    bool any = std::any_of(arr.begin(), arr.end(), [](int x) { return x > 10; });
    bool all = std::all_of(arr.begin(), arr.end(), [](int x) { return x > 0; });
}

// ---------------------------------------------------
// 📌 Map-преобразование
// ---------------------------------------------------
std::vector<int> example_map(const std::vector<int>& arr) {
    std::vector<int> mapped;
    mapped.reserve(arr.size());
    std::transform(arr.begin(), arr.end(), std::back_inserter(mapped),
                   [](int x) { return x * 2; });
    return mapped;
}

// ---------------------------------------------------
// 📌 Reduce / fold
// ---------------------------------------------------
int example_reduce(const std::vector<int>& arr) {
    return std::accumulate(arr.begin(), arr.end(), 0,
                           [](int acc, int x) { return acc + x; });
}

// ---------------------------------------------------
// 📌 Сортировка (не мутируя оригинал)
// ---------------------------------------------------
std::vector<int> example_sort(const std::vector<int>& arr) {
    std::vector<int> sorted = arr;
    std::sort(sorted.begin(), sorted.end());
    return sorted;
}

// ---------------------------------------------------
// 📌 Минимум / максимум
// ---------------------------------------------------
void example_min_max(const std::vector<int>& arr) {
    if (!arr.empty()) {
        int minVal = *std::min_element(arr.begin(), arr.end());
        int maxVal = *std::max_element(arr.begin(), arr.end());
    }
}

// ---------------------------------------------------
// 📌 Количество элементов
// ---------------------------------------------------
size_t example_count(const std::vector<int>& arr) {
    return arr.size();
}

// ---------------------------------------------------
// 📌 Срезы (subvector)
// ---------------------------------------------------
std::vector<int> example_slice(const std::vector<int>& arr) {
    std::vector<int> firstTwo(arr.begin(), arr.begin() + std::min(arr.size(), size_t(2)));
    std::vector<int> rest(arr.begin() + std::min(arr.size(), size_t(2)), arr.end());
    return rest;
}

// ---------------------------------------------------
// 📌 Объединение векторов
// ---------------------------------------------------
std::vector<int> example_combine(const std::vector<int>& arr1, const std::vector<int>& arr2) {
    std::vector<int> combined = arr1;
    combined.insert(combined.end(), arr2.begin(), arr2.end());
    return combined;
}

// ---------------------------------------------------
// 📌 Разворот вектора (без мутации исходного)
// ---------------------------------------------------
std::vector<int> example_reverse(const std::vector<int>& arr) {
    std::vector<int> reversed = arr;
    std::reverse(reversed.begin(), reversed.end());
    return reversed;
}

// ---------------------------------------------------
// 📌 Удаление элемента по индексу (иммутабельно)
// ---------------------------------------------------
std::vector<int> example_remove_by_index(const std::vector<int>& arr, size_t indexToRemove) {
    std::vector<int> result;
    result.reserve(arr.size());
    for (size_t i = 0; i < arr.size(); ++i) {
        if (i != indexToRemove) result.push_back(arr[i]);
    }
    return result;
}

// ---------------------------------------------------
// 📌 Добавление элементов
// ---------------------------------------------------
void example_add_elements(std::vector<int>& arr) {
    arr.insert(arr.begin(), 0); // в начало
    arr.push_back(99);          // в конец
}

// ---------------------------------------------------
// 📌 Проверка на пустоту
// ---------------------------------------------------
bool example_is_empty(const std::vector<int>& arr) {
    return arr.empty();
}

// ---------------------------------------------------
// 📌 Дедупликация
// ---------------------------------------------------
std::vector<int> example_dedup(const std::vector<int>& arr) {
    std::unordered_set<int> s(arr.begin(), arr.end());
    std::vector<int> unique(s.begin(), s.end());
    return unique;
}

// ---------------------------------------------------
// 📌 Разделение по условию (std::partition)
// ---------------------------------------------------
std::vector<int> example_partition(const std::vector<int>& arr) {
    std::vector<int> part = arr;
    std::partition(part.begin(), part.end(), [](int x) { return x % 2 == 0; });
    return part;
}

// ---------------------------------------------------
// 📌 Генерация последовательных значений (std::iota)
// ---------------------------------------------------
void example_generate(std::vector<int>& arr) {
    std::iota(arr.begin(), arr.end(), 1); // заполняет 1,2,3,...
}

// ---------------------------------------------------
// 📌 Удаление элементов по условию (std::remove_if)
// ---------------------------------------------------
std::vector<int> example_remove_if(const std::vector<int>& arr) {
    std::vector<int> result = arr;
    result.erase(std::remove_if(result.begin(), result.end(), [](int x) { return x < 0; }), result.end());
    return result;
}

// ---------------------------------------------------
// 📌 Произвольное накопление (std::accumulate с лямбдами)
// ---------------------------------------------------
int example_accumulate_custom(const std::vector<int>& arr) {
    return std::accumulate(arr.begin(), arr.end(), 1, [](int acc, int x) { return acc * x; }); // произведение
}