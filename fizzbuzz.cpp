#include <iostream>
#include <string>
using namespace std;
int main(void) {
    int x = 100;
    string output;
    while (x-- > 0) {
        output = "";
        if (x%5 == 0) output += "Fizz";
        if (x%3 == 0) output += "Buzz";
        cout << (output == "")? x : output;
    }
}
