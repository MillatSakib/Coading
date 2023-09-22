//From here we are going to start es6. In ES6 we use stirng tamplete. For using string tamplete we have to use backtick(`) which is situeted up on TAB key.There has many opportunities in this string tamplete. That's are if we want to declare multiline string that is one kind of hassle for us. But in string tamplete we can write string as general. And if there have multiple line of string it donot cause any kind of problem in our programme. And if we want to show a variable value in a string then it is also quite hassle for us. But in string tamplate we can use variable in string usgin ${name} formate. And ES6 we also get some new functin in string.


// This is all about string tamplete


var str = `     My
name is

Md Sohan Millat Sakib`


console.log(str)
console.log(str.trim())     //trim is not element of ES6, it is element of ES5

var age = 23
var name = 'SM Sakib'

console.log('My name is '+ name + ' and I am ' + age + ' years old');

console.log(`My name is ${name} and I am ${age} years old. I am ${age<18 ? 'not ' : '' }adult.`)    //in the curly braces we can also weite single line code


console.log(name.padStart(15))
console.log(name.padEnd(15, '*'))
console.log(name.repeat(10))
//last three funciton are ES6
