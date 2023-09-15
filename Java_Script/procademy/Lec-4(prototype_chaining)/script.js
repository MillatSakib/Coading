
let Person = function (name, gender, birthYear) {
  this.name = name;
  this.gender = gender;
  this.birthYear = birthYear; 
}

Person.prototype.calcAge = function () {      //here we implement the concept of prototypical inheritance
  let age = new Date().getFullYear() - this.birthYear;
  console.log(age);
}

let john = new Person('John' , 'Male', 1990)
// john.calcAge()
console.log(john)

let merry = new Person('Merry', 'Female', 1995)
// merry.calcAge()
console.log(merry)

let steve = new Person('Steve', 'Male', 1989)
// steve.calcAge();
console.log(steve)

let mark = {
  name: 'Mark',
  birthYear: 1992,
  gender: 'Male'
}   //write the command -> mark instanceof Object    -> it will return true




console.log(mark.hasOwnProperty('name'))
//^-- Here  at first the compiler work like -> let mark = new Object(); -empty object
//then -> mark.name = 'Mark';
//mark.birthYear = 1992;
//mark.gender = 'Male';