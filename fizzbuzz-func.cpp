#include <string>
#include <iostream>

string fizz(int x) {
    return (x%3 == 0)? "Fizz" : "";
}

string buzz(int x) {
    return (x%5 == 0)? "Buzz" : "";
}

string fizzBuzz(int x) {
    return (fizz(x) + buzz(x) == "")? x : fizz(x) + buzz(x);
}

int x = 100;

int main(void) {
    while (x-- > 0) {
        cout << fizzBuzz(x) << endl
    }
}