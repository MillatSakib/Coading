/*


Before we can convert an object into array using Object.entries() methode. But from now we can convert an array into an object using Object.fromEntries()  methode.

*/

var obj = {

    a: 10,
    b: 20

}


console.log(Object.entries(obj))

var objArr =  [

    ['a',10],
    ['b', 20]
]

console.log(Object.fromEntries(objArr))