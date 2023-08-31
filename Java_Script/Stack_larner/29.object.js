/*
In this code I will declare object and change value of an object and add a property of an object outside form object.

Like String and Array we can declare an Object in two way.That is 
Literal Methode.
Constructor Methode.


math: 79
Here math is property and 79 is value

*/

//Here i using object literal

var obj1 = {
    name: "Md. Sohan Millat Sakib",
    id: 222902036,
    depertment: "CSE",
    Batch: 222
}

console.log(obj1)
obj1.status = "He is now dropout"
console.log(obj1)

//Here I using string Constructor

var obj2 = Object();
obj2.status = "SMS is now dropout"
console.log(obj2)