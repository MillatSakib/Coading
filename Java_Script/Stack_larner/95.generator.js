/*generator is one kind of system.To make anything or return iterator from any objet is the task of iterator.









*/

let arr = [11, 22, 33]


let obj = {

    start: 1,
    end: 5,

    [Symbol.iterator]: function* (){
        let currentValue = this.start
        while(currentValue<= this.end){
            yield currentValue++    //yeild means pause the system
        }
    }
}

let iterate = obj[Symbol.iterator]()
console.log(iterate.next())
console.log(iterate.next())
console.log(iterate.next())
console.log(iterate.next())
console.log(iterate.next())
console.log(iterate.next())
console.log(iterate.next())
console.log(iterate.next())
console.log(iterate.next())


function* generate(){   //to make generate function we have to use * sign

    yield 1
    yield 2
    yield 3
}

let it = generate()
console.log(it.next())
console.log(it.next())
console.log(it.next())
console.log(it.next())

function* generate1(collection){
    for(let i = 0; i < collection.length; i++){
        yield collection[i];
    }
}

let it1 = generate1(arr)
console.log(it1.next())
console.log(it1.next())
console.log(it1.next())
console.log(it1.next())
