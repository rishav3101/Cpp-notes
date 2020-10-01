//technicalities
/*
necessary evil
    programming language is a foreign language
    when learning a new language, look at grammer and vocab
Because
    programs need to be precisely and completely specific
*/

//Declarations
/*
Declarations introduces a name into a scope
Declarations also specifies a type
*/
int a; //an int named a is declared
double f = 9.6; //double f is declared AND initilized
const double cd = 8.7; //const means it will not change for the life of the program
double sqrt(double); //declares a function, a contract of what returns
std::vector<Token> v; //declares vector with type Token

//headers
/*
Frequently introduced into a program
headers is a file containing declarations of what the class should look like
    Much like an interface class in Java
This allows for abstraction
*/
#include <iostream> //I can use what iostream dedclared, like cout

//Scope
/*
a scope is a region of a program
    Global scope (outside any language construct)
    Class scope (within a class)
    Local scope (between {...})
    Statement scope (nested in conditionals i.e. if, foreach,etc)
a name in a scope can be seen by its nested scopes
    Global
        Class
            Local
                Statement
a scope keeps things sane
    a real program will have thousands of entities
    locality is good
    keep names as local as possible
        controls memory usage
*/

//call by value
int f(int a) { a = a+1; return a; }//x is passed as a copy of itself, x is still 0

int main() {
    int x = 0;
    int xx = f(x); //x is still 0
}

int f (int& a) { a = a+1; return a; }//x is passed as a reference

int main() {
    int x = 0;
    int xx = f(x); //x is now 1
}
//namespaces
/*
allows us to group common classes and functions into a scope of a namespace
allows us to have multiple definations of classes in which the names are shared
:: syntax will specify a namespace
*/
std::cout << "Hello World" << endl;

using namespace std; //tells compiler that, given no namespace, assume it this
