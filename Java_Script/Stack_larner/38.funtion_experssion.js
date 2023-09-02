/* In Javascript funtion is not only a statement, it can also behave like an expression.In this program we learn about Javascirpt expression.

*/

var addition = function (a, b) {        //this is annonymus funtion becouse there has no name of the function
    return a + b;
}


setTimeout(function () {
    console.log("I will call after 5 second")
}, 5000);           //this will call after the funtion call given bellow for assyncronus behaviour



var callingAddition = addition;
console.log(callingAddition(5, 43))