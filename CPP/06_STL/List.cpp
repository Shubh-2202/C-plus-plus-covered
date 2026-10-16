
#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {10, 20, 30, 20, 40};

    // 1. push_back()
    l.push_back(50);

    // 2. push_front()
    l.push_front(5);

    // Display list
    cout << "List: ";
    for (int x : l)
        cout << x << " ";
    cout << endl;

    // 3. pop_back()
    l.pop_back();

    // 4. pop_front()
    l.pop_front();

    // 5. front()
    cout << "First element: " << l.front() << endl;

    // 6. back()
    cout << "Last element: " << l.back() << endl;

    // 7. size()
    cout << "Size: " << l.size() << endl;

    // 8. empty()
    cout << "Is empty? " << l.empty() << endl;

    // 9. insert()
    auto it = l.begin();
    advance(it, 1);
    l.insert(it, 15);

    // 10. erase()
    it = l.begin();
    advance(it, 2);
    l.erase(it);

    // 11. remove()
    l.remove(20);

    cout << "After modifications: ";
    for (int x : l)
        cout << x << " ";
    cout << endl;

    // 12. sort()
    l.sort();

    cout << "Sorted list: ";
    for (int x : l)
        cout << x << " ";
    cout << endl;

    // 13. reverse()
    l.reverse();

    cout << "Reversed list: ";
    for (int x : l)
        cout << x << " ";
    cout << endl;

    // 14. clear()
    l.clear();

    cout << "Size after clear: " << l.size() << endl;
    cout << "Is empty now? " << l.empty() << endl;

    return 0;
}
