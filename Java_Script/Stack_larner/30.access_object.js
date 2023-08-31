/*

In object we can access a property using two methode. They are 
(i)Dot Notation
(ii)Array Notation

Maximum time we use Dot Notation.If the property are known and it enter directly in program by code then we can easily use the Dot Notation. But if the requeirment are an user enter a key or string then we  get the  string and we have to use Array Notation. Like the input value is showVAlue= "name " and we try to access like obj.showValue then it show undefied. because there has no property of obj object. In  this case we use Array Notation
*/


var obj = {
    name: "Md. Sohan Millat Sakib",
    id: 222902036,
    depertment: "CSE",
    batch: 222,
}

console.log(obj.batch)

var showValue = "name"
//console.log(obj.showValue)
console.log(obj[showValue])
console.log(obj["name"])

