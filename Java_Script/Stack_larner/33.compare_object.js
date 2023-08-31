/*

We can  easily compare premitive data using == operator. But we can't campare directly using == operator of two object. If we write obj1==obj2 then it compare that the address of obj1 and obj2 are same or not. But if we want to compare two object are same or not then we have to compare each properties value with each other. then it return true then we can say that's are same object.
But we can use another methode to compare two object. If we convert the json object into string and compare them  and if it return true then we can easily say that the objects are same.

*/

var obj1 = {
    name: "Md. Sohan Millat Sakib",
    occupation: "Student",
    age: 23,
}
var obj2 = {
    name: "Md. Sohan Millat Sakib",
    occupation: "Student",
    age: 23,
}

if (obj1.name == obj2.name && obj1.occupation == obj2.occupation && obj1.age == obj2.age) {
    console.log(true)
} else {
    console.log(false)
}


//using json object into string
console.log(JSON.stringify(obj1) == JSON.stringify(obj2))