/*
If we want to merge two or more string then we can use concat() methode.

We can check the first strig or last string using startsWith() and endsWith() methode.

We can convert uppercase using toUpperCase() methode and we can convert lowercase using toLowerCase() methode.

If we give unnesseccery space on before first word or after last word then we can use trim() methode.

And at last if we want to convert a string into an array then we can use split() methde.

*/



var a = "I am"
var b = "Md  Sohan Millat Sakib"
var c = "Now I read in Green University."


var strAdd = a.concat(" ", b, ". ", c)
console.log(strAdd)

console.log(c.startsWith('Now'))
console.log(c.endsWith('sity.'))
console.log(a.toUpperCase())
console.log(b.toLowerCase())
console.log("      fadslj       ".trim())
console.log(c.split(" "))