/*

Which error are not syntactical or if the error are logical then we have to handle that error using if else.

One example are given bellow. ___
                                |
                                |
                               \-/
                                *


*/


function changeToInt(v){

    let result = Number.parseInt(v)
    // if(result === NaN){     //here we can't compare by this. Because NaN===NaN is alawys false
        if(!result){
        console.log("Please enter a value which is able to convert in Integer.")
        return undefined;
    }
    return result;
}

let result = changeToInt('jflksdlaj89.33afjkla')
console.log(result)