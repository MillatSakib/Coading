var person = {
name: 'HM Nayem'
}


console.log(person)
for(var i in person){
    console.log(i)
}


console.log(Object.keys(person))

var descriptor = Object.getOwnPropertyDescriptor(person, 'name')
console.log(descriptor)


let baseObj = Object.getPrototypeOf(person)
let descriptor1 = Object.getOwnPropertyDescriptor(baseObj, 'toString')

console.log(descriptor1)


Object.defineProperty(person, 'name', {
    enumerable: false,
    writable: false,
    configurable: false,
    value: 'hasan Mahmud Nayem'
})

