#include <string>
#include <iostream>
#include <iomanip>
#include <utility>
using namespace std;

struct A {
    string s;
    A() : s("test") { }
    A(const A& o) : s(o.s) { cout << "move(A) failed!" << endl; }
    A(A&& o) noexcept : s(move(o.s)) { cout << "move(A)" << endl; }
};

A f(A a) { return a; }

struct B : A {
    string s2;
    int n;
    // implicit move constructor B::(B&&)
    // calls A's move constructor
    // calls s2's move constructor
    // and makes a bitwise copy of n
};

struct C : B {
    ~C() { } // destructor prevents implicit move constructor C::(C&&)
};

struct D : B {
    D() { }
    ~D() { }          // destructor would prevent implicit move constructor D::(D&&)
    D(D&&) = default; // forces a move constructor anyway
};

int main() {
    cout << endl;
    cout << "Trying to move A\n";
    A a1 = f(A()); // move-constructs from rvalue temporary
    A a2 = move(a1); // move-constructs from xvalue

    cout << "Trying to move B\n";
    B b1;
    cout << "Before move, b1.s = " << quoted(b1.s) << "\n";
    B b2 = move(b1); // calls implicit move constructor
    cout << "After move, b1.s = " << quoted(b1.s) << "\n";

    cout << "Trying to move C\n";
    C c1;
    C c2 = move(c1); // calls copy constructor

    cout << "Trying to move D\n";
    D d1;
    D d2 = move(d1);
    cout << endl;
    return 0;
}

