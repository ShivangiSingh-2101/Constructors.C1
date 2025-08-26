//Shivangi Singh
//24070123148
//B3

#include <string>
using namespace std;

class student {
    int rno;         
    string name;
    int fee;

public:
    // Parameterized constructor
    student(int rn, string nm, int fe) {
        rno = rn;
        name = nm;
        fee = fe;
    }

    // Copy constructor
    student(const student &t) {
        rno = t.rno;
        name = t.name;
        fee = t.fee;
        cout << "\nCopy constructor called" << endl;
    }

    // Display function
    void display() {
        cout << rno << "\t" << name << "\t" << fee << endl;
    }
};

int main() {
    student s(21, "Student1", 10); 
    s.display();

    student Student1(s);             
    Student1.display();

    return 0;
}

//Output:
//21	Student1	10

//Copy constructor called
//21	Student1	10
