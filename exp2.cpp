//Shivangi Singh
//24070123148
// B-3 
#include <iostream>
using namespace std;

class construct 
{
public:
    int a, b;

    construct() {  
        a = 21;
        b = 18;
    }

    void display() {
        cout << "a = " << a << ", b = " << b << endl;
    }
};

int main() 
{
    construct obj;   
    obj.display();   
    return 0;
}

//Output:
//a = 21, b = 18
