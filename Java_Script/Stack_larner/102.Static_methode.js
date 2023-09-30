/*

Static Methode is that methode by which we can create an object without new keyword. Like Math.random.

 

*/


class Person{
    constructor(name, email){

        this.name = name
        this.email = email


    }

    print(){

        console.log(this.name, this.email)
    }

    static create(str){

        let person = JSON.parse(str)
        return new Person(person.name,person.email)
    }
}


let str = '{"name":"SM Sakib", "email": "millatsakib01@gmail.com"}'


let p1 = Person.create(str)
console.log(p1)
console.log(p1 instanceof Person)
p1.print()