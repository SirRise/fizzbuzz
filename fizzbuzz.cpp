#include <iostream>
#include <string>
using namespace std;
int main(void) {
    int x = 100;
    string output;
    while (x-- > 0) {
        cout << (x%5==0)?"Fizz"+(x%3==0)?"Buzz":x;:(x%3==0)?"Buzz":x;
    }
}

/*
        output = (x % 5 == 0)? "Fizz":;
        output += (x % 3 == 0)? "Buzz":;
        cout << output;
*/