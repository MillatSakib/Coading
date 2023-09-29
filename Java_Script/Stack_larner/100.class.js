/*


The most interesting part on ES6 class.


In ES6 class is a syntactic sugar. We called it sytactic sugar because though we use class in ES6 but behind on the seen the class are work using prototypical Inharitance.






*/


class Rectangle {

    constructor(width, height) {
        this.width = width
        this.height = height

    }
    draw() {
        console.log('Drawing....')

    }

}


let rect1 = new Rectangle(45, 23)

console.log(rect1)

console.log(typeof Rectangle)   // here we can see this is function because we tell that in js class is syntactic sugar