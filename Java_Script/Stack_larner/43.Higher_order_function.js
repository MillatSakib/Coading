//Higher order function
/*
If a function can return from another function or when we can pass a function to another function as an argument then we called it Higher order function.

*/

function add(a, b) {
    return a + b;
}
function mainpulate(a, b, func) {
    var c = a + b;
    var d = a - b;
    function multyply() {
        var m = func(c, d)
        return c * d * m;
    }
    return multyply;


}


var multiply = mainpulate(3, 5, add);
console.log(multiply());