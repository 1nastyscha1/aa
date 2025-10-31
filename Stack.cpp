#include <iostream>
#include <vector>

class Stack {
    std::vector<int> data;
public:
    void push(int val) { data.push_back(val); }
    void pop() { if (!data.empty()) data.pop_back(); }
    int top() { return data.back(); }
    bool empty() { return data.empty(); }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    std::cout << s.top() << std::endl; // 20
    s.pop();
    std::cout << s.top() << std::endl; // 10
}
