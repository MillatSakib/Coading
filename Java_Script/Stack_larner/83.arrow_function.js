/* From previous lecture we are know we can declare function using function declearation and function expression. It is quite larger syntax. But in ES6 we know about arrow function which one of the cute syntax.

*/

let a=5,b= 8;


function add(a,b){
    return a+b;
}

let sum = function (a, b){
    return a+b;
}


let summition = (a, b) => a+b   // we must be store arrow function in a variable

console.log(summition(a,b))
//If we execute single line commant no need to use curly bracess or return any value. Compiler do it implicitly

let sub = (a, b) => {
    return a - b;
}

console.log(sub(a,b))