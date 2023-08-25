//Arithmetic Operator   + - * / % ++ --
var a = 10;
var b = 42;
console.log(a + b);
console.log(a - b);
console.log(a * b);
console.log(a / b);
console.log(a % b);
console.log(a++);
console.log(b--);
console.log(++a);
console.log(--b);


//Assignment Operator +=  -=  /=  *=  %=

console.log(a += b);
console.log(a -= b);
console.log(a *= b);
console.log(a /= b);
console.log(a %= b);

//Comparison operator ==  !=  <=  >=  <  >  ===  !==

console.log(a == b);
console.log(a != b);
console.log(a <= b);
console.log(a >= b);
console.log(a < b);
console.log(a > b);
a = "12"
console.log(a === b);
console.log(a !== b);

/*Here a delicate difference between === and == in javascript.If one variable are number and another variable are string an we use == then the java script compiler convert the stirng into a number and then compare is it either true all false. On the other hand if we use === then the javascript compiler directly compare doesnot preform any convertion.
*/