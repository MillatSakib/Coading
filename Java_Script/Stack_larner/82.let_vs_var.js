/*
var vs let vs const

The one and only one difference between let & cons is we can reassign the value of let but we can't reassign the value of const.Without this all the rule are applicabel on let and const similarly.

In javascript if, for or karli braces are not cearte block. that's why we face problem on declearing variable in block. That's why in ES6 let and const type are added which are block data type.

*/

const PI = 3.1416
console.log(PI)
for(var i = 0; i < 10; i++){

}

console.log(i)      //from here we can access i variable

for (let j = 0; j < 10; j++) {}

//console.log(j);     //from here we can't access j variable


//In previous we can only cretre block using immidiate invoking funciton. But from now we can use let to declare bolck variable.

(function (){
    var abc= 'ABC'
    console.log(abc)
})()

// console.log(abc)