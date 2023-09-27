/*

we know that javascript give us two type of data. That's are 
(i) Premetive Data
(ii) Object Data

But in ES6 there has more one premitive data type in javascript. That's are symble. 

Symble is one kind of data type that's are completely unique. Like if we take two integer data. Than we can store 10 at that two variable. But we can not do this in symbol

*/


let s1 = Symbol()          
let s2 = Symbol('test symbol') //Here we use descirption. This is only for describe our symble. That has no value in our program

console.log(s1)
console.log(s2)

console.log(s1===s2)


let toss = {

    Head: Symbol('HEAD'),
    TAIL: Symbol('TAIL')
}//Here the value of head and tail are not same all time





