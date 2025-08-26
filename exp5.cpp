//Shivangi Singh
//24070123148
// B 3
#include <iostream>
using namespace std;

class CopyConst {
    int x, y;

public:
    // Parameterized Constructor
    CopyConst(int a, int b) {
        x = a;
        y = b;
    }

    // Copy Constructor
    CopyConst(CopyConst &obj) {
        x = obj.x;
        y = obj.y;
    }

    void show() {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main() {
    CopyConst c1(10, 20);   // parameterized constructor
    c1.show();

    CopyConst c2(c1);       // copy constructor called
    c2.show();

    return 0;
