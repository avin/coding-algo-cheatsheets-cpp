#include <iostream>
#include <string>
#include <map>

// ---------------------------------------------------
// 📌 Создание структуры и доступ к полям
// ---------------------------------------------------
struct Person {
    std::string name;
    int age;
};

void example_struct() {
    Person person{"Иван", 25};
    std::cout << person.name << std::endl;    // через точку
    std::cout << person.age << std::endl;     // через точку
}

// ---------------------------------------------------
// 📌 Деструктуризация объектов (структурированные привязки)
// ---------------------------------------------------
struct Person2 {
    std::string name;
    int height = 180;
};

void example_destructuring() {
    Person2 person{"Иван", 0};
    auto& [firstName, height] = person;
    std::cout << firstName << ", " << height << std::endl;
}

// ---------------------------------------------------
// 📌 Итерация по std::map
// ---------------------------------------------------
void example_map_iteration() {
    std::map<std::string, int> m = { {"age", 25}, {"score", 100} };
    for (const auto& kv : m) {
        std::cout << kv.first << " = " << kv.second << std::endl;
    }
}

// ---------------------------------------------------
// 📌 Объединение / копирование std::map
// ---------------------------------------------------
void example_merge_maps() {
    std::map<std::string, int> defaults = { {"active", 1}, {"role", 0} };
    std::map<std::string, int> settings = { {"role", 1}, {"theme", 2} };
    std::map<std::string, int> merged = defaults;
    for (const auto& kv : settings) {
        merged[kv.first] = kv.second;
    }
}

// ---------------------------------------------------
// 📌 Проверка наличия ключа в std::map
// ---------------------------------------------------
void example_has_key() {
    std::map<std::string, int> settings = { {"theme", 1} };
    bool hasTheme = settings.find("theme") != settings.end();
    bool hasHeight = settings.count("height") > 0;
}