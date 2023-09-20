/*

Classes in javascript allows us to create a blueprint and based on that blueprint, we can instantiate objects.

Classes in Javascript are different from the traditional classes in other object oriented languages like Java and C++

Classes are sytactic sugar of function constructor and prototypical inheritance. it is not a new concept in itself.


*/



//In Javascript there are two way to create a class
// 1. Class declaretion
// 2. Class expression


//class declaration
class Person{
  constructor(name, birthYear, gender){    //this will alawys contructor keyward
    this.name = name;
    this.birthYear = birthYear;
    this.gender = gender;
    

  }

}

Person.prototype.calcAge= function() {
  console.log(new date().getFullYear() - this.birthYear);
}

let john = new Person('John', 1990, 'Male');
console.log(john);

let merry = new Person("Merry", 1995, "Female");
console.log(merry);

this.calcAge = function () {
  console.log(new date().getFullYear() - this.birthYear);
};

/*

1. Classes cannot be hoisted.You can't instantiate an object using a class before it is created. In a word you must have to declare a class first then you can instantiate(create) an object using the class.

2. Classes are first class citizen.That means we can pass a class to a function as its argument and we can return a class within a function. And this is possible because classes is a syntatic sugar of function consturctor. That means they are simply a function behind the seen.

3.classes are executed in strict mode. That means if you don't turn on the strick mode explicitly classes will be executed in strict mode.

*/