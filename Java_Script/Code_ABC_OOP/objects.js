const computer = function (name, model) {
  console.log(this);
};

const pc = computer(); //this refer window  Object
const newPc = new computer(); //this refer computer object(empty object)

//4 rules of Function Constructor

//1.create an empty object
//2. this refer that object wich we are created
//3.object link to the prototype
//4.ojcect will return automatcally
