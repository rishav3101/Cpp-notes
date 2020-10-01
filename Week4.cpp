//classes, Implementation and interfaces, constructors, member functions, and enumerations

//Classes are equivilliant to a class in java
//encapsulates states and behaviours

//one of the classes we used is the Vector class, these classes are the building blocks
//build upon these building blocks to build these larger programs

class X { //class x
public: //public members -- the interface to users, accessble to all
    int a = 5; //data is often best kept private
    int getInt() {return a;} //functions

private: //private members, accessble to the class only
    int x = 3;
    void initilize(){get.stuff.done();}

protected: //protected members, accesblie by child classes (inheritance)
}
// declarations go to the .h file
// definations go to the .cpp file
// anyone wanting to use the class will use the .h file
#include<hash.h>

// why use public and private?
// public variables can be changed without the class knowing about it
// private one can only be changed by the class
// if someone on the outside wants to change these variables, they can use the setters and getters functions

// class building
// constructors, builds the class for use, defaults to nothing
// destructor, closes and makes sure the class data is cleared.
Date d; //error, no arguments
Date d(6, 8, 1928);
Date d2 = d; //Copies d into d2
d = d2; //Copies d2 into d

// constructors
// intis the state of your class
// typically public
// is called when the class is declared
// can be overloaded to take multiple kinds of arguments

// enums
// enums aloows us to define our own type of data (i.e. ints, floats, chars.etc)
enum Month {jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};
Month m = feb; //works
m = 7; //does not work, cant assign int to month
int n = m; //works, gets numeric value for m
Month mm = Month(7); //works, converts int into Month (unchecked)
