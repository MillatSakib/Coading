function Shape() {}

Shape.prototype = {
  common: function () {
    console.log("I am Common Methode");
  },
};

function Square(width) {
  this.width = width;
}

Square.prototype = Object.create(Shape.prototype);      //this line are cause inheritance..



Square.prototype.draw = function () {
  console.log("Drawing");
};

var shape = new Shape();
var sqr = new Square(45);

//shape-> Shape -> Object
//sqr -> Square -> Object
//sqr --> Square -> Shape -> Object
