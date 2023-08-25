var str = "432";
var num = 432;
var num1 = 4543;
console.log(Number.parseInt(str));      //converted into number
console.log(String(num));       //converted into sting
console.log(num1.toString());   //this also converted into string
console.log(Number(Infinity));  // It will not be converted into number
console.log(String(Infinity));  //But it will converted into string
//Thats mean we can't use type convert for all Data Type


/*Falsy Value

False value are the value which are not actually  false but the javascrip conider it as a false value..These are called falsy value.

The falsy value in javascript are 
""
0
null
Undefined
Nan

*/


console.log(Boolean(""));
console.log(Boolean("fa"));
console.log(Boolean(0));
console.log(Boolean(324));
console.log(Boolean(null));
console.log(Boolean(undefined));
console.log(Boolean(NaN));