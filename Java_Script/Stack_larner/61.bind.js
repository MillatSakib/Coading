function myFunc(c, d) {
  console.log(this);
  console.log(this.a + this.b + c + d);
}
/*
If we use call with a function then the function called instantly. But we can say here if we call a function directly then it also call instantly.. Then why we use call function.If we directly called a function then this keyword refer window object. On the other hand if we use call function then this keyword refer an empty object. This is the difference.

*/
myFunc.call({ a: 40, b: 25 }, 10, 5);
//For call methode we have to pass a object at first. Then all argument will side by side with separeded by comma.

myFunc.apply({ a: 400, b: 250 }, [10, 5]);
//apply methode like a call methode. But the difference is in call methode we first input is object then all the argument are positioned side by side separedetd by comma and in apply mehtode first argument is an object and second argument is an array.

myFunc.bind({a:7, b:3}, 5, 5)
//for this we can't get any output in console. Because if we use bind mehtde it don't call function. it only bind the function with data.We have to use variable for binding data . And when we have to print the data then we derectly console.log the variabel.

var testBind = myFunc({ a: 7, b: 3 }, 5, 5);
testBind();
//or
var testBind = myFunc({ a: 7, b: 3 });
testBind(5, 5);  //better approch
