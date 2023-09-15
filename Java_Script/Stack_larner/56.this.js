//This programme run on Browser console to get detailed Output
//this get its value on execution phase.
//In javascript all of the thing associate with an object.In a word javascript think all of the thing as an object
//if this are in an object or methode it refer an that object and if it is not in any object then it refer window object.
var rect = {
    width: 100,
    height: 50,
    
    draw: function(){
        console.log("I am a rectangle.")
        this.printProperties()
    },
    printProperties: function(){
        console.log("My width is "+ this.width)
        console.log("My height is "+ this.height)
    }
}

rect.draw()



function myFunction(){
    console.log(this)
}
new myFunction()


var another = {
    width : 47,
    height: 56,
    print: rect.printProperties
}

console.log(another.print)
another.print