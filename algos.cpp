#include <queue>
#include <stack>
#include <deque>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <functional>
#include <string>

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
// 📌 Связный список (ручная реализация)
// ---------------------------------------------------
struct Node {
    int val;
    Node* next;
    Node(int v): val(v), next(nullptr) {}
};

void example_linked_list() {
    Node* head = new Node(1);
    head->next = new Node(2);
    delete head->next;
    delete head;
}

// ---------------------------------------------------
// 📌 Множество (set)
// ---------------------------------------------------
void example_set() {
    std::set<int> s = {1, 2};
    s.insert(3);
    s.erase(2);
    bool has = s.count(1) > 0;
}

// ---------------------------------------------------
// 📌 Хэш-таблица / словарь (unordered_map)
// ---------------------------------------------------
void example_map() {
    std::unordered_map<std::string, int> mp;
    mp["key"] = 123;
    int value = mp["key"];
    bool hasKey = mp.find("key") != mp.end();
    mp.erase("key");
}

// ---------------------------------------------------
// 📌 Куча (MinHeap)
// ---------------------------------------------------
void example_min_heap() {
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;
    minHeap.push(5);           // вставка
    int minVal = minHeap.top(); // получение минимума
    minHeap.pop();             // удаление минимума
}

// ---------------------------------------------------
// 📌 Бинарный поиск (на отсортированном векторе)
// ---------------------------------------------------
int binarySearch(const std::vector<int>& arr, int target) {
    int l = 0, r = static_cast<int>(arr.size()) - 1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

// ---------------------------------------------------
// 📌 Обход графа — DFS (стек) / BFS (очередь)
// ---------------------------------------------------
struct GraphNode {
    int val;
    std::vector<GraphNode*> neighbors;
    GraphNode(int v): val(v) {}
};

void dfs(GraphNode* root) {
    if (!root) return;
    std::stack<GraphNode*> st;
    std::unordered_set<GraphNode*> visited;
    st.push(root);
    while (!st.empty()) {
        GraphNode* node = st.top();
        st.pop();
        if (visited.count(node)) continue;
        visited.insert(node);
        for (GraphNode* neighbor : node->neighbors) {
            st.push(neighbor);
        }
    }
}

void bfs(GraphNode* root) {
    if (!root) return;
    std::queue<GraphNode*> q;
    std::unordered_set<GraphNode*> visited;
    q.push(root);
    while (!q.empty()) {
        GraphNode* node = q.front();
        q.pop();
        if (visited.count(node)) continue;
        visited.insert(node);
        for (GraphNode* neighbor : node->neighbors) {
            q.push(neighbor);
        }
    }
}