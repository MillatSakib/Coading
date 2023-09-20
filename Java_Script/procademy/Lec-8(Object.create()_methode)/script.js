let person = {
  calcAge(){
    return new Date().getFullYear() - this.birthYear;

  },
  greet(){
    return 'Have a nice day!';
  },
  init(name, birthYear, gender){
  this.name = name;
  this.birthYear = birthYear;
  this.gender = gender;
}
}

let john = Object.create(person);
john.name = 'John';
john.birthYear = 1899;
john.gender = 'Male';
console.log(john);
console.log(john.calcAge());
let merry = Object.create(person, {
  name: {value: 'Merry1'},
  birthYear: {value: 1995},
  gender: {value: 'Female'}
});
console.log(merry);


let mark = Object.create(person);
mark.init('Mark', 2002, 'Male');
console.log(mark);
