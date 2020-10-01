
//concise operators
a += c; //= a = a + c
a *= scale //= a = a * scale
++a; //means a += 1, increment by one before reading contents of a
a++; //means a += 1, add 1 after the fact

//Statements
a = b;
double d2 = 2.5;
if (x == 2) y = 4;
while (cin >> number) {
    numbers.push_back(number); //will add number to end of vertex
}

//conditionals
if (x > 5) {
    max = y;
} else {
    max = x;
}

cin >> answer;
switch (answer) {
    case 1:
        removeIndex = 0;
        break;
    case 2:
        removeIndex = 1;
        break;
    default:
        cout << "Please specify 1 or 2" << endl;
        break;
}

//iteration
int i = 0;
while(i < 100) {
    cout << i << '\t' << square(i) << endl;
}

for (int i = 0; i < 100; ++i) { //++i gets done last, so we need it increments now
    cout << i << '\t' << square(i) << endl;
}

//function
int square(int x) {
    return x*x;
}

//errors
/*
reasons for errors
poor specifications, what is it suppose to do?
incomplete program
unexpected arguments
unexpected input
code that dosent do what its suppose to do
*/

/*
types of errors
compile times
    syntax errors
    type errors
Link-time errors
Run-time errors
    detected by computer(crash)
    detected by libraries(exceptions)
    detected by user code
Logic errors
    detected by programmer or user(code runs, produces wrong output)
*/

//exceptions
/*exception handling is general
    dont forget about exceptions, the program will terminate if its not handled
*/

//vectors
/*
Collection of data
most useful standard library data type
same as ArrayList in Java
*/
std::vector<double> listNumbers;
