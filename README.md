# Коллекция полезных приёмов и шаблонов (C++20)

Все самые нужные функции и методы для решения задач по программированию.

Есть также аналогичные [шпаргалки для JS](https://github.com/avin/coding-algo-cheatsheets-js).

### 🔢 [Работа с векторами / списками](./array.cpp)

* 📌  **Создание вектора, резервирование памяти (`std::vector`)**
* 📌  **Итерирование по вектору**
* 📌  **Фильтрация элементов**
* 📌  **Поиск элемента / условия (`std::any_of`, `std::all_of`, `std::find`)**
* 📌  **Map-преобразование (`std::transform`)**
* 📌  **Reduce / fold (`std::accumulate`)**
* 📌  **Сортировка (`std::sort`)**
* 📌  **Поиск минимума / максимум (`std::min_element`, `std::max_element`)**
* 📌  **Подсчёт количества элементов (`size`)**
* 📌  **Срезы (`subvector`)**
* 📌  **Объединение векторов**
* 📌  **Разворот вектора (`std::reverse`)**
* 📌  **Удаление элементов по индексу (иммутабельно)**
* 📌  **Добавление элементов**
* 📌  **Проверка на пустоту (`empty`)**
* 📌  **Дедупликация (`std::unordered_set`)**
* 📌  **Разделение по условию (`std::partition`)**
* 📌  **Генерация последовательных значений (`std::iota`)**
* 📌  **Удаление элементов по условию (`std::remove_if`)**
* 📌  **Произвольное накопление (`std::accumulate` с лямбдами)**

***

### 🔤 [Работа со строками](./strings.cpp)

* 📌  **Преобразование строки в вектор символов и обратно**
* 📌  **Поиск подстроки**
* 📌  **Сравнение строк**
* 📌  **Слияние строк**
* 📌  **Удаление символов**
* 📌  **Замена символов / подстрок**
* 📌  **Регулярные выражения (`<regex>`)**

***

### 🔧 [Работа с множествами и словарями](./set_map.cpp)

* 📌  **Создание `std::set` / `std::unordered_set`**
* 📌  **Создание `std::map` / `std::unordered_map`**
* 📌  **Добавление / удаление элементов**
* 📌  **Проверка наличия элемента / ключа**
* 📌  **Итерирование по `std::set` / `std::map`**
* 📌  **Счётчик частот (`std::unordered_map`) и сортировка по значению**
* 📌  **Объединение / пересечение / разность множеств (`std::set`)**

***

### 🗄️ [Работа со структурами и картами](./objects.cpp)

* 📌  **Создание структуры и доступ к полям**
* 📌  **Деструктуризация (структурированные привязки)**
* 📌  **Итерирование по `std::map`**
* 📌  **Объединение / копирование `std::map`**
* 📌  **Проверка наличия ключа в `std::map`**

***

### 📦 [Алгоритмы и структуры данных](./algos.cpp)

* 📌  **Очередь (FIFO)**
* 📌  **Стек (LIFO)**
* 📌  **Двусторонняя очередь (`deque`)**
* 📌  **Односвязный список (`std::forward_list`)**
* 📌  **Двусвязный список (`std::list`)**
* 📌  **Множество (`std::set`, `std::unordered_set`)**
* 📌  **Словарь / хэш-таблица (`std::map`, `std::unordered_map`)**
* 📌  **Куча (`std::make_heap` / `std::push_heap` / `std::pop_heap`, `std::priority_queue`)**
* 📌  **Бинарный поиск (`std::binary_search`, `std::lower_bound`)**
* 📌  **Обход графа (`DFS`, `BFS`) используя список смежности**
* 📌  **Рекурсивный `DFS`**
* 📌  **Сортировка с пользовательским компаратором (`std::sort`)**
* 📌  **Разворот, циклический сдвиг и удаление дубликатов (`std::reverse`, `std::rotate`, `std::unique`)**

***

### 🔁 [Циклы и условия](./loops.cpp)

* 📌  **Цикл `for`**
* 📌  **Цикл `while`**
* 📌  **Цикл `do...while`**
* 📌  **`forEach` с индексом (эмуляция)**
* 📌  **Условные операторы (`if`, `else`, `switch`)**
* 📌  **Операторы `continue` / `break`**
* 📌  **Множественные условия (`&&`, `||`)**
* 📌  **Тернарный оператор (`?:`)**

***

### 🧮 [Математические утилиты](./math.cpp)

* 📌  **Наибольший общий делитель (НОД) (`std::gcd`)**
* 📌  **Наименьшее общее кратное (НОК) (`std::lcm`)**
* 📌  **Проверка на простое число**
* 📌  **Генерация простых чис (решето Эратосфена)**
* 📌  **Модульное возведение в степень (fast exponentiation)**
* 📌  **Факториал и комбинаторные формулы (`C(n, k)`)**
* 📌  **Возведение в степень (`std::pow`)**

***

### 🔢 [Работа с числами и диапазонами](./numbers.cpp)

* 📌  **Округление (`std::round`, `std::ceil`, `std::floor`)**
* 📌  **Целочисленное деление / остаток (`/`, `%`)**
* 📌  **Работа со знаками и модулем (`std::abs`)**
* 📌  **Генерация диапазона чисел**
* 📌  **Преобразование типов (`std::stoi`, `std::to_string`)**

***

### ⛓ [Рекурсия и стек](./recursion.cpp)

* 📌  **Базовая рекурсия**
* 📌  **Итерация через стек (`DFS`) для бинарного дерева**
* 📌  **Хвостовая рекурсия (`tail recursion`)**

***

### 🔢 [Комбинаторика и генерация](./combinatorics.cpp)

* 📌  **Генерация всех подмножеств (`power set`)**
* 📌  **Генерация всех перестановок (`permutations`)**
* 📌  **Генерация всех комбинаций (`combinations`)**
* 📌  **Генерация всех парных сочетаний (`allPairs`)**

***

### 🛠️ [Полезные утилиты](./utilities.cpp)

* 📌  **Обработка исключений**
* 📌  **Работа с файлами (`ifstream`, `ofstream`)**
* 📌  **Умные указатели (`std::unique_ptr`, `std::shared_ptr`, `std::weak_ptr`)**
* 📌  **Лямбда-выражения**
* 📌  **Многопоточность (`std::thread`, `std::mutex`)**
* 📌  **`std::optional` и `std::variant`**
* 📌  **Работа с файловой системой (`std::filesystem`)**
* 📌  **Чтение аргументов командной строки**

***

### 🖨 [Форматирование и отладка](./log.cpp)

* 📌  **Вывод данных (`std::cout`)**
* 📌  **Форматирование вывода**
* 📌  **Измерение времени выполнения (`std::chrono`)**
* 📌  **Отладочные принты**
* 📌  **Тестовые данные и генерация input’ов (`<random>`)**

***

### 🧵 [Многопоточность и синхронизация](./threads.cpp)

* 📌  **Создание потоков (`std::thread`)**
* 📌  **Присоединение и отсоединение потоков (`join`, `detach`)**
* 📌  **Мьютекс и `std::lock_guard`**
* 📌  **`std::unique_lock` и `std::condition_variable`**
* 📌  **Атомарные переменные (`std::atomic`)**
* 📌  **Асинхронные задачи (`std::async`, `std::future`)**