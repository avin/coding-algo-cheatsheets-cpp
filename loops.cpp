#include <iostream>
#include <vector>
#include <string>

// ---------------------------------------------------
// 📌 Цикл for / while / do...while, условия, тернарный оператор и т.д.
// ---------------------------------------------------
void example_loops() {
    // Цикл for
    for (int i = 0; i < 10; i++) {
        std::cout << i << std::endl;
    }

    // Цикл while
    int i = 0;
    while (i <= 10) {
        i++;
    }

    // do...while
    do {
        i--;
    } while (i > 0);

    // forEach с индексом (эмуляция)
    std::vector<int> arr = {1, 2, 3};
    for (size_t idx = 0; idx < arr.size(); ++idx) {
        std::cout << "index: " << idx << ", value: " << arr[idx] << std::endl;
    }

    // Условия if / else
    bool b = true;
    if (i == 0) {
        std::cout << 0 << std::endl;
    } else {
        std::cout << "non 0" << std::endl;
    }

    // switch-case
    switch (i) {
        case 0:
            std::cout << "=0" << std::endl;
            break;
        case 1:
            std::cout << "=1" << std::endl;
            break;
        default:
            std::cout << "other" << std::endl;
            break;
    }

    // break / continue
    for (int j = 0; j < 10; j++) {
        if (j % 2 == 0) continue;
        if (j > 8) break;
        std::cout << j << std::endl;
    }

    // Множественные условия
    if (i && b) std::cout << "both" << std::endl;
    if (i || b) std::cout << "one of" << std::endl;
    else std::cout << "no one" << std::endl;

    // Тернарный оператор
    int bar = 2;
    std::string foo = (bar == 2) ? "the 2" : "other";
}