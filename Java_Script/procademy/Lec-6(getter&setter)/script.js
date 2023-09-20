
/*

Accessor properties are methods that gets or sets the value of an objects property.
There are two types of Objects Property
1.getter properties - read objects property value
2. setter properties - set a objecs property value


*/

let john = {
  name: 'John',
  birthYear: 1990,
  AnnualSalary: 12000,
  get getName(){
    return this.name;
  },
  set setName(val){
    if(val.length < 4){
      alert('Name should be of atlest 4 character!');

    }
    else{
    this.name = val;
    }

  }
}

console.log(john.getName)
john.setName = 'John Smith';
console.log(john.geName);

console.log(john.name);

john.name = 'John Doe';
console.log(john.name);