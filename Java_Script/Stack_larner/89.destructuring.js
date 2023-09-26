//some time we have to breakout a data form object(structure) or array. Then we use destructor. The appropiate example are given bellow

var person = {
    name1: 'HM Nayem',
    email1: 'hasan.m.nayem@gmail.com'
}

let name = person.name
let email = person.email    //before ES6  we use this methode for distructing data from an object. But from now we use the methode bellow

let { name1, email1 } = person;
console.log(name1, email1);

//now we will learn how we can destructin a multilevel object. 

var person1 = {
    name2: 'SM Sakib',
    email2: 'millatsakib01@gmail.com',
    address: {
        city: 'Narayongonj',
        country: 'Bangladesh'
    }
}

let { name2, email2, address: { city, country } } = person1;
console.log(name2,email2,city,country);




//we can also use destructor on array. But it is not usefull because we have to use index for  an array. So for destructoing array the easy methode is using array index.


let arr = [1,2,3,4,5]

let [first, second, , , last] = arr;

console.log(first, second, last)
