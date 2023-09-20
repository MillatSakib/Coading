//If we want to hide data from user or prgramme writer then we use abstruction.. I a word abstruction is a methode of hiding implementing datail or data data in oop. In javascript we can't directly use of abstruction.(vedio number: 117)

var Rectangle = function (width, height) {
  this.width = width;
  this.height = height;
  this.draw = function () {
    console.log("I am a rectangle");
    this.prinProperties();
    console.log(this);
  };
  this.printProperties = function () {
    console.log("My width is " + this.width);
    console.log("My Height is " + this.height);
  };
};
var rect7 = new Rectangle(45, 30);
