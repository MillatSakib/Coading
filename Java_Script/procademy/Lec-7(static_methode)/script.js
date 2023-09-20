
class Person {
  constructor(name, birthYear, gender) {
    this.name = name;
    this.birthYear = birthYear;
    this.gender = gender;
  }

  calcAge() {
    console.log(new Date().getFullYear() - this.birthYear);
  }
  static greet() {
    console.log("Jey there! how are you");
  }
}

let john = new Person("Joohn", 1990, "Male");
console.log(john);
/*

If you go top console and expand the __proto__ tab you can't show the static greet() methode. This the difference between static methode and constuctor methode. The  reson is static methde bind with the class and constructor function bind with the instance.

*/
Person.greet();

//If we call the greet methode using the class then we can access the greet methde. Like -> Peson.greet(). That's it.

//static methode with function constructor

let Person1 = function (name, gender, birthYear) {
  this.name = name;
  this.gender = gender;
  this.birthYear = birthYear;
};
Person1.prototype.calcAge = function () {
  let age = new Date().getFullYear() - this.birthYear;
  console.log(age);
};
Person1.greet = function () {
  console.log("have a nice day");
};

let mark = new Person1("Mark", "Male", 1995);
console.log(mark);
mark.calcAge();
Person1.greet();
