//If a function recive another function as a argument that is called callback function and those function which received the function as a argument that called Higher order function(from Anisul Islam vedio)


//Now we can called where we use callback function?
//If the full are totally same but in a specific line there have change depending on input ...There we can write code usign callback function.By this methode we can skip repetitive code.



function sample(a, b, cb) {
    var c = a + b;
    var d = a - b;
    var result = cb(c, d)    //here cb denote call back.
    return result;
}
function sum(a, b) {
    return a + b;
}
var result = sample(5, 8, sum)
console.log(result)
var result2 = sample(5, 8, function (c, d) {
    return c - d
})
sample(4, 3, function () {
    return c - d
})
console.log(result2) 