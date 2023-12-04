/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
/*
class 
object
inheritance
polymorphism
encapsulation
abstraction

inheritance
base
derived - u can use base methods/variables(public, protected) inside derived class or with derived object.


protected access specifier
constructor
destructor
parametrized constructor

type of inheritance
multilevel
hierarchical
hybrid
multiple
*/

class Room
{

int sftarea;
public:
Room()
{
    cout << "From Room constructor" << endl;
}
Room(int sft)
{
    sftarea = sft;
    cout << "From Room param constructor" << sftarea << endl;
}
void getsftarea(){}
void getwindows(){}
void getentries(){}
~Room()
    {
        cout << "From Room destructor" << endl;
    }
};

class Theatre: public Room
{
    
    public:
    Theatre()
    {
        cout << "From Theater constructor" << endl;
    }
    Theatre(int sarea): Room(sarea)
    {
        cout << "From Theater param constructor" << endl;
    }
    void getexit()
    {
        getsftarea();
    }
    void getentry(){}
    int getnoofseats(){ return 0;}
    string getrunningmovie(){return "";}
    ~Theatre()
    {
        cout << "From Theater destructor" << endl;
    }
};

// class Minitheater: public Theatre
// {
//     public:
//     Minitheater()
//     {
//         cout << "From MiniTheater destructor" << endl;
//     }
//     ~Minitheater()
//     {
//         cout << "From MiniTheater destructor" << endl;
//     }
// };
int main()
{
    
    Theatre obj;
    //Theatre obj1(9000);
    
    return 0;
}
