function test() {
    console.log('Something')
}

// Write on console test

//write on console typeof test
//write on console test.constructor   

var Rect = new Function('width', 'height', `this.width = width
thsi.height = height
this.draw = function(){
    console.log('I am a rectangle')
    this.printProperties()
    console.log(this)
}

this.printProperties = function(){
    console.log('My width is '+ this.width)
    console.log('My Height is '+this.height)
}

`){

}

var rect5 = new Rect(4, 5)

console.log(rect5)