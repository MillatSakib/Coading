//We can access a private object using get methode 
//And we can write private object any data using set methode on javascript

 //If we want to access a private property in object then we can use get methode
 //And if we want to write on a private property in object then we can use set methode in javascript
var Rectangle = function (width, height){
    var position = {
        x: 56,
        y: -100
    }
    this.width = width
    this.height = height
    var printProperties = function(){
        console.log('My width is ' + this.width)
        console.log('My height is '+ this.height)
    }.bind(this)

 this.draw = function(){
    console.log('I am rectangle')
    printProperties()
    console.log('Position: X= '+ position.x + 'Y = ' + position.y)
 }


 Object.defineProperty(this, 'position',{
    get: function() {
        return position;
    },
    set: function(value) {
        position = value
    }
 })
}
var rect7 = new Rectangle(45, 30)
rect7.draw()
rect7.position = {

    x: 456,
    y: -123
}

console.log(rect7.position)