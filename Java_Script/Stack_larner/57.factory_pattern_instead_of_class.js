/*

In Javascirpt there has not class. But class is curcial for DRY(Don't Repeat Yourself) methode. That's why we have to make them using different type Pattern. They are 
(i)Factory Pattern
(ii)Constructor Pattern

In this conde we will know about Factory Pattern

*/


var createRect = function(width, height){
    return {
        width: width,
        height: height,
        draw: function(){
            console.log('I am a rectangle')
            this.printProperties()
            console.log(this)
        },
        printProperties: function(){
            console.log('My width is '+ this.width)
            console.log('My Height is '+ this.height)
        }
    }
}

var rect1 = createRect(10, 8)
rect1.draw()
var rect2 = createRect(40, 30)
rect2.draw()