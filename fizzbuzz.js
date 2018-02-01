let x = 100;
let output;
while (x--) {
    output = "";
    if (x%5 === 0) output += "Fizz";
    if (x%3 === 0) output += "Buzz";
    console.log( (output)? output : x);
}