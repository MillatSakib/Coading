//IF a value use in a function from another function without passing arguments or if a value are used in another scope where it are not defined then it called clauser.

var b = 10;
function a() {
    var x = 5;
    return function () {
        console.log(x)
    }

}
var abc = a()
console.dir(abc)


//This programme need to run on browser console then we can get the full output
