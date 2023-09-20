class Person{
  constructor(naem, birthYear, gender){
    this.name = name;
    this.birthYear = birthYear;
    this.gender = gender;

  }
  calcAge(){
    console.log(new Date().getFullYear()- this.birthYear);
  }

}

class employee extends Person{
  constructor(name, gender, birthyear, empid, salary){
    super(name, gender, birthYear);
    this.empid = empid;
    this.salary = salary;

  }
  calcsalary(){
  return this.salary*12;
}
empDetails(){
  console.log(this.name);
  console.log(this.empid);
  
}
}
