var obj = {
    x: 40,
    y: 60,
    z: 75,
}

console.log(Object.keys(obj))
console.log(Object.values(obj))
console.log(Object.entries(obj))

var obj1= obj
obj1.x=50
obj1.z=85
console.log(obj1)
console.log(obj)
//here you can see that after changing  obj1, obj array also be changed.For this we have to use Object.assign() methode


var obj2 = Object.assign({}, obj)
console.log(obj2)
obj2.z =100;
console.log(obj) 
console.log(obj2)