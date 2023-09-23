/*

We if we call this in a function then the function are inclusive of an object then this return this object and if is not inclusive any object then it refer an window object of global object. If we run the program in browser then it refer window object and we run it in node then it refer global object.

*/

function testMe() {
  console.log(this);
}

testMe();

let obj = {
  name: "HM Nayem",
  print: function () {
    console.log(this);
  },
};

obj.print();

let obj1 = {
  name: "HM Nayem",
  print: function () {
    //here this.name is valid.
    setTimeout(function () {
      //but is not include in object. That's why here this will refer window object.And name is not accosiated with window object. name is accosiated with obj1 object. That's why here this.name is undefined.

      console.log(`Hello, ${this.name}`);
    }, 1000);
  },
};

obj1.print();

//the solution are given bellow

let obj2 = {
  name: "HM Nayem",
  print: function () {
    let self = this; //here we store this in variable
    setTimeout(function () {
      console.log(`Hello, ${self.name}`); //here we use self to get this reference
    }, 1000);
  },
};

obj2.print();

//the another solution is here.

let obj3 = {
  name: "HM Nayem",
  print: function () {
    setTimeout(
      function () {
        console.log(`Hello, ${this.name}`);
      }.bind(this),
      1000
    ); //binding this in setTimeout methode
  },
};

obj3.print();

//the best solution is here.(arrow function)

let obj4 = {
  name: "HM Nayem",
  print: function () {
    setTimeout(() => {
      //we can't use bind,call,apply for define value of this in arrow function

      console.log(`Hello, ${this.name}`); //here this refer parant object's (this)
    }, 1000);
  },
};

obj4.print();
