
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;

    // 1. push()
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl;

    // 2. size()
    cout << "Size: " << s.size() << endl;

    // 3. pop()
    s.pop();

    cout << "After pop: " << s.top() << endl;

    // Display and remove all elements
    cout << "Stack elements: ";

    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    cout << endl;

    // 4. empty()
    cout << "Is empty? " << s.empty() << endl;

    return 0;
}
