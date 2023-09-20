function Person(name){
    this.name = name
}

var p1 = new Person('HM Nayem')

Person.prototype.PI = 3.1416

var p1 = new Person('Hm Nayem');
var p2 =  new Person('Namyem')
console.log(Object.getPrototypeOf(p1))
console.log(Person.prototype)
console.log(p1)
console.log(p2)
