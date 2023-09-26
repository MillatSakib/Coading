let a = 10, b = 20

let obj = {
    a: a,
    b: b,
    print: function () {
        console.log(this)
    }
}

console.log(obj)
obj.print();

//we can write it shortly in ES6. which example are given bellow

let obj1 = {
    a,
    b,
    print() {
        console.log(this)
    }
}

console.log(obj1)
obj1.print();
