//this must be run on devtool console
//in general we can think prototype as a parent class
//in javascript all object class has a prototype(parent object) without one class.

var obj = {}


var obj2 = new Object()



obj2



obj.__proto__ === obj2.__proto__

Object.getPrototypeOf(obj) === Object.getPrototypeOf(obj2)  //it return ture.