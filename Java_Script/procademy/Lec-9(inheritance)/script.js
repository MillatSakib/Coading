let Person = function (name, gender, birthYear) {
  this.name = name;
  this.gender = gender;
  this.birthYear = birthYear;
};
Person.prototype.calcAge = function () {
  let age = new Date().getFullYear() - this.birthYear;
  console.log(age);
};

let john = new Person("John", "Male", 1990);
console.log(john);
//Employee function constructor
//this = mark
//Employee - child class
let Employee = function (name, gender, birthYear, empId, salary) {
  Person.call(this, name, gender, birthYear);
  this.empId = empId;
  this.salary = salary;
};


Employee.prototype = Person.prototype;

Employee.prototype.calcsalary = function () {
  return this.salary * 12;
};
