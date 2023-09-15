//Constructor function
let Person = function (name, gender, birthYear) {
  this.name = name;
  this.gender = gender;
  this.birthYear = birthYear;
  this.calcAge = function () {
    let age = new Date().getFullYear() - this.birthYear;
    console.log(age)
    // return age;
  }
  //return this;  happens for new keyword
};

let john = new Person("John", "Male", 1990); //we must use new keyword on function constructor
john.calcAge();
console.log(john);
/*

A new ooperator does three things while creating an object using function constructor

(i) the new operator firs creates an empty object on fucntion constructor

(ii) It also makes sure that the 'this' variable in function constructor point to the newly created empty object.

(iii) Finally it returns the object form the function constructor

*/