let person = {
  calcAge() {
    return new Date().getFullYear() - this.birthYear;
  },
  personInit(name, birthYear, gender) {
    this.name = name;
    this.birthYear = birthYear;
    this.gender = gender;
  }
}

let employee = Object.create(person);
employee.employeeInit = function (name, birthYear, gender, empId, salary) {
  employee.personInit.call(this, name, birthYear, gender);
  this.empId = empId;
  this.salary = salary;
}
console.log(employee)

let mark = Object.create(employee);
mark.employeeInit('Mark', 1990, 'Male', 301, 24000)

console.log(mark);
