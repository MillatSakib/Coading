/*


function makeWords(text) {
        let str = text.trim()
        let words = str.split(' ')
        return words
    }
let words = makeWords(86)
console.log(words)

If we execute this program then we get a error in red mark. And we can't solve it using else if. Here we have to use try..catch to handle the error.







*/

//let result = changeToInt('85.96')
//console.log(result)


function makeWords(text) {

    try{
        let str = text.trim()
        let words = str.split(' ')
        return words
    } catch(e){

        // console.log(e)       //this will show all error
        // console.dir(e)      //this will show all error using object details
        // console.log(e.message)       //this print error message
        console.log("Please provide a valid text.")      //by this we can show custom error message
    }
}


let words = makeWords(85.44)

console.log(words)


words = makeWords('fa fsdafa cfvaf');
console.log(words)