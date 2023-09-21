function Square(width) {
  this.width = width;
  this.getWidth = function () {
    console.log("Width is " + this.width);
    this.draw();
  };
}

Square.prototype = {
  draw: function () {
    console.log("Draw");
  },
  toString: function () {
    return "My width is = " + this.width;
  },
};

var sqr1 = new Square(10);

var sqr2 = new Square(5);

console.log(Object.keys(sqr1));

for (var i in sqr1) {
  console.log(i);
}

/*

write the command bellow on devtool console

sqr1.hasOwnProperty('width')

sqr1.hasOwnProperty('getWidth')

sqr1.hasOwnProperty('draw')

*/
