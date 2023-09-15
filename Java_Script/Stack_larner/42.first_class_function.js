/* First order function are follow  the rules are written bellow

* A function can be stroed in a variable
* A function can be stroed in an array
* A function can be stroed in an object
* A function can be stroed in as need/in anywhere
* We can pass function as an arguments
* We can return functions from another funciton

*/

function add(a, b) {
    return a + b;
}



var sum = add;
console.log(sum(5, 6));




var sum1 = [];
sum1[0] = add;
console.log(sum1[0](10, 40));



var sum2 = {
    sumObj: add
}
console.log(sum2.sumObj(23, 7));


setTimeout(function (){
    console.log("It was called before 5 second")
},  5000 )