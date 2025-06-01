#include <vector>
#include <queue>
#include <stack>
#include <deque>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <forward_list>
#include <algorithm>
#include <functional>

// ---------------------------------------------------
// 📌 Очередь (FIFO)
// ---------------------------------------------------
void example_queue() {
    int x = 5;
    std::queue<int> q;
    q.push(x);       // добавление
    q.pop();         // удаление
}

// ---------------------------------------------------
// 📌 Стек (LIFO)
// ---------------------------------------------------
void example_stack() {
    int x = 5;
    std::stack<int> st;
    st.push(x);      // добавление
    st.pop();        // удаление
}

// ---------------------------------------------------
// 📌 Двусторонняя очередь (Deque)
// ---------------------------------------------------
void example_deque() {
    int x = 5, y = 3;
    std::deque<int> dq;
    dq.push_back(x);    // в конец
    dq.push_front(y);   // в начало
    dq.pop_back();      // с конца
    dq.pop_front();     // с начала
}

// ---------------------------------------------------
// 📌 Односвязный список (std::forward_list)
// ---------------------------------------------------
void example_forward_list() {
    std::forward_list<int> fl = {1, 2, 3};
    fl.push_front(0);      // вставить в начало
    fl.pop_front();        // удалить первый элемент
    // обход:
    for (int v : fl) {
        // обработка v
    }
}

// ---------------------------------------------------
// 📌 Двусвязный список (std::list)
// ---------------------------------------------------
#include <list>
void example_list() {
    std::list<int> lst = {1, 2};
    lst.push_back(3);     // в конец
    lst.push_front(0);    // в начало
    lst.pop_back();       // удалить с конца
    lst.pop_front();      // удалить с начала
    // удаление конкретного значения:
    lst.remove(2);
    // обход:
    for (int v : lst) {
        // обработка v
    }
}

// ---------------------------------------------------
// 📌 Множество (std::set, std::unordered_set)
// ---------------------------------------------------
void example_set() {
    std::set<int> ordered = {1, 2};
    ordered.insert(3);
    ordered.erase(2);
    bool hasO = ordered.count(1) > 0;

    std::unordered_set<int> unordered = {1, 2};
    unordered.insert(3);
    unordered.erase(2);
    bool hasU = unordered.find(1) != unordered.end();
}

// ---------------------------------------------------
// 📌 Словарь / хэш-таблица (std::map, std::unordered_map)
// ---------------------------------------------------
#include <map>
void example_map() {
    std::map<std::string, int> ordered_map;
    ordered_map["key"] = 123;
    bool hasKeyO = ordered_map.find("key") != ordered_map.end();
    ordered_map.erase("key");

    std::unordered_map<std::string, int> unordered_map;
    unordered_map["key"] = 456;
    bool hasKeyU = unordered_map.find("key") != unordered_map.end();
    unordered_map.erase("key");
}

// ---------------------------------------------------
// 📌 Куча (heap) с использованием std::make_heap, push_heap, pop_heap
// ---------------------------------------------------
void example_heap_manual() {
    std::vector<int> heap = {3, 1, 4, 1, 5};
    std::make_heap(heap.begin(), heap.end(), std::greater<>()); // min-heap
    heap.push_back(2);
    std::push_heap(heap.begin(), heap.end(), std::greater<>());
    std::pop_heap(heap.begin(), heap.end(), std::greater<>());
    heap.pop_back();
}

// ---------------------------------------------------
// 📌 Куча (приоритетная очередь) (MinHeap / MaxHeap)
// ---------------------------------------------------
void example_priority_queue() {
    std::priority_queue<int> maxHeap;
    maxHeap.push(5);
    int maxVal = maxHeap.top();
    maxHeap.pop();

    std::priority_queue<int, std::vector<int>, std::greater<>> minHeap;
    minHeap.push(5);
    int minVal = minHeap.top();
    minHeap.pop();
}

// ---------------------------------------------------
// 📌 Бинарный поиск (std::binary_search, std::lower_bound)
// ---------------------------------------------------
#include <iterator>
bool example_binary_search(const std::vector<int>& arr, int target) {
    // проверка наличия
    return std::binary_search(arr.begin(), arr.end(), target);
}
int example_lower_bound(const std::vector<int>& arr, int target) {
    // возвращает индекс, если найден, иначе -1
    auto it = std::lower_bound(arr.begin(), arr.end(), target);
    if (it != arr.end() && *it == target) {
        return static_cast<int>(std::distance(arr.begin(), it));
    }
    return -1;
}

// ---------------------------------------------------
// 📌 Обход графа — DFS (стек) / BFS (очередь) на основе списка смежности
// ---------------------------------------------------
void dfs_adj_list(const std::vector<std::vector<int>>& adj, int start) {
    std::vector<bool> visited(adj.size(), false);
    std::stack<int> st;
    st.push(start);
    while (!st.empty()) {
        int u = st.top();
        st.pop();
        if (visited[u]) continue;
        visited[u] = true;
        for (int v : adj[u]) {
            if (!visited[v]) st.push(v);
        }
    }
}

void bfs_adj_list(const std::vector<std::vector<int>>& adj, int start) {
    std::vector<bool> visited(adj.size(), false);
    std::queue<int> q;
    q.push(start);
    visited[start] = true;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : adj[u]) {
            if (!visited[v]) {
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

// ---------------------------------------------------
// 📌 Рекурсивный DFS
// ---------------------------------------------------
void dfs_recursive(const std::vector<std::vector<int>>& adj, int u, std::vector<bool>& visited) {
    visited[u] = true;
    for (int v : adj[u]) {
        if (!visited[v]) dfs_recursive(adj, v, visited);
    }
}