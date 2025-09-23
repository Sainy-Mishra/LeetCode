#include <iostream>
using namespace std;

class B {
public:
    int a;

    // Constructor
    B(int val = 0) {
        a = val;
    }

    // Overload + operator
    void operator+(B &obj) {
        int d1 = this->a;
        int d2 = obj.a;
        cout << "Output: " << d2 - d1 << endl;
    }
};

int main() {
    B obj1(3), obj2(7);

    obj1 + obj2;  // Calls overloaded operator+

    return 0;
}
