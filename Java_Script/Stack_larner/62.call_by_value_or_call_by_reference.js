var n = 10;

function change(n) {
  n = n + 100;
  console.log(n);
}

change(n);
console.log(n);     //Hera after calling change(n) function the value of n are not changed, because we use call by value. When we use premitive data to call a function then programme pass just value as argument. That's why the value of n are not changed.


var obj = {
  a: 10,
  b: 20,
};

function changeMe(obj) {
  obj.a = obj.a + 100;
  obj.b = obj.b + 100;
  console.log(obj);
}

changeMe(obj);
console.log(obj);   //Here we can see that when we call the function then the value of object change from the function. Because when we pass an object as argument then don't pass value of object. We just pass the refernce of the object.That's why the value of object are changed. This methode are call call by reference. 
