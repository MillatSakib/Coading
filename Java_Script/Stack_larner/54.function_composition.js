//If the input of the first function can give the output of the second function, then it is called function composition.


function print(inp){
    console.log(inp)
}
function multiplyByFive(n){
    return n*5
}
function add(a, b){
    return a+b
}
print(multiplyByFive(add(3,5)))         //here we use function composition