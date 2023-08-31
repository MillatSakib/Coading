/*

We can traveste array manually and using (for in) loop. Use of for in loop are given bellow.

*/


var a = {
    x: 10,
    y: 20,
    z: 30,
}

console.log('x' in a)
console.log('abc' in a)


for(var i in a){
    console.log(i)
    console.log(a[i])
}