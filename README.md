Program 1

Aim:
To write a C++ program using a class named student that demonstrates the concept of constructors by:
Accepting student details (roll number, name, and fee) from the user using the constructor.
Displaying the entered details using a member function.

 Theory:
In Object-Oriented Programming (OOP), classes and objects are core concepts. This program illustrates:
Class: A user-defined data type that holds both data and functions.
Constructor: A special member function that is automatically called when an object is created. In this program, it is used to initialize the object with user input.
Encapsulation: Binding of data (rollno, name, fee) and member functions (constructor and display()) inside the class.
Access specifiers:
private (default for class): Members that can't be accessed directly outside the class.
public: Allows access to class members outside the class.
Functions Used:
cin >> and cin.getline(): Used to take input.
cout <<: Used to display output.
cin.ignore(): Used to ignore the newline character left in the input buffer to avoid issues with getline().

 Algorithm:
- Start
- Define a class student with the following members:
- Private data members: rollno, name, fee
- Public:
- Constructor:
- Prompt and input rollno
- Use cin.ignore() to handle newline after integer input
- Prompt and input name using getline()Prompt and input fee
- display() function to output the stored values
- In main():
- Create an object s of class student which calls the constructor
- Call s.display() to show the student data
- End

Program 2
Aim:
To write a C++ program that demonstrates the concept of default constructors by initializing data members of a class and displaying them using a member function.

Theory:

In Object-Oriented Programming (OOP), constructors are special member functions used to initialize objects of a class. This program specifically illustrates the use of a default constructor.
Key Concepts
Class: A blueprint for creating objects. It contains variables (data members) and functions (member functions).
Constructor:
Has the same name as the class.
Is automatically invoked when an object is created.
Can be used to initialize class members.
This program uses a default constructor (no parameters).
Access Specifiers:
public: Allows the data and functions to be accessed from outside the class.
Member Function (display):
Used to print the values of the data members.
Benefits of Using Constructors:
Ensures automatic initialization of object data.
Enhances code readability and maintainability.

 Algorithm:
-  Start
- Define a class named construct with:
- Public data members: a, b
- A default constructor that:
- Initializes a to 10
- Initializes b to 20
- A display() function to output the values of a and b
- In the main() function:
- Create an object obj of class construct which calls the default constructor
- Call obj.display() to print the initialized values
- End

Program 3

Aim:

To write a C++ program to demonstrate the use of a parameterized constructor and a copy constructor to initialize and copy the data of objects.**

 Theory:

In Object-Oriented Programming (OOP), constructors are special functions used to initialize objects. This program demonstrates:
 Parameterized Constructor:
A constructor that takes arguments to initialize an object with specific values.
Example:
student(int rn, string nm, int fe)
 Copy Constructor:

A constructor that creates a new object by copying data from an existing object.
It takes a reference to an object of the same class.
Syntax:
student(const student &t)
The copy constructor is called:
When an object is initialized from another object.
When an object is passed by value to a function.
When an object is returned by value.
 Display Function:
 A member function that prints the object's data.

Algorithm:
- Start
- Define a class student with:
- Data members: rno, name, and fee
- A parameterized constructor to initialize these members
- A copy constructor to copy data from another student object
- A display() function to output the values
- In main():
- Create object s using the parameterized constructor
- Call s.display() to show the initialized values
- Create another object Student1 by copying s (this calls the copy constructor)
- Call Student1.display() to show the copied values
- End

Program 4


Aim:
To write a C++ program to demonstrate the working of constructors and destructors by counting the number of objects created and destroyed.
Theory:
In Object-Oriented Programming (OOP), constructors and destructors are special member functions of a class:
Constructor:
A special function automatically called when an object is created.
Used to initialize data members or perform setup tasks.
Syntax:
class_name() { ... }
Destructor:
A special function automatically called when an object goes out of scope or is explicitly deleted.
Used to release resources or perform cleanup.
Syntax:
~class_name() { ... }

 Global Variable count:

Used to keep track of how many objects are currently alive.
It is incremented in the constructor and decremented in the destructor.
 Key Concepts Demonstrated:
Scope: Objects inside a block {} are destroyed when the block ends.
Order of destruction is reverse of object creation.
Global tracking using a static/global variable.

 Algorithm:
- Start
- Define a class deconstruct with:
- A constructor that:
-  Increments the global variable count
- Displays the number of objects created
- A destructor that:
- Decrements count
- Displays the number of objects destroyed
- In the main() function:
- Create object obj1
- Create a block scope {}:
- Create two more objects obj2 and obj3
- These will be destroyed when the block ends
- Create object obj4
-  Observe constructor and destructor calls
- End
