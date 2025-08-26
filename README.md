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
