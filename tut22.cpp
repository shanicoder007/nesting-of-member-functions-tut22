#include <iostream>
#include <string>
using namespace std;

class binary
{

    string s;

public:
    void read(void);
    void chk_bin(void);
};

void binary ::read(void)
{

    cout << "Enter the binary numbers :" << endl;
    cin >> s;
}

// void binary ::chk_bin(void)
void binary::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format: " << endl;
            exit(0);
        }
    }
}

int main()
{
    // oops - class and objects

    // c++ --->   initially called   --->  C with classes bt stroustroup.
    // John stroustroup ny C(lang...) ma classes add kardi thi jisse usko C++ ka naam dy dia gya tha.
    // Class   --->  is a basically Extention of structures in C.
    // structures are limitations
    //         ----> Members are public
    //         --->No add methods

    // Basically what is classes ?
    // Answer is ------> classes are basically ----->  structures + more
    // Classes can have ----> methods(functios) and properties(values).
    // Classes can make few members as private or public.

    /* Zeeshan.salary = 56000   Makes no sense if salary is private. If we take it salary is private we can use
    different methods*/

    // Nesting of member functions.

    binary b;
    b.read();
    b.chk_bin();
    return 0;
}