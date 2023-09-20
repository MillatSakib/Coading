/*

Property discrioptor is one kind of object.

By property discriptor we can get information about an object's property and we can teke action on that. 
We can change writing permission,enumarable permission(looping prosess) and configurable permission(remove prosecess)


*/

var person = {
  name: "HM Nayem",
};

console.log(person);
for (var i in person) {
  console.log(i);
}

console.log(Object.keys(person));

var descriptor = Object.getOwnPropertyDescriptor(person, "name");   //from here we get all property descriptor
console.log(descriptor);

let baseObj = Object.getPrototypeOf(person);
let descriptor1 = Object.getOwnPropertyDescriptor(baseObj, "toString");  //here we chage the enumerable value into false. That's why we can't iterate this object from object using loop and object.keys()  can't find it.

console.log(descriptor1);

Object.defineProperty(person, "name", {   //here we change default value
  enumerable: false,
  writable: false,
  configurable: false,
  value: "hasan Mahmud Nayem",
});
