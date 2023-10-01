/*





*/        

const _radius = Symbol()        //by using this Symbol we keep our data private
const _name = Symbol()
const _draw = Symbol()

class Circle{

    constructor(radius, name){
        this[_radius] = radius
        this[_name] = name
    }

    [_draw](){
        console.log('Drawing....')
    }
}


let c1 = new Circle(2)

console.log(c1)
console.log(Object.getOwnPropertyNames(c1))
let key = Object.getOwnPropertySymbols(c1)[1]
console.log(c1[key])



