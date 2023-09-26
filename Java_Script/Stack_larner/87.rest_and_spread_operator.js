/*

... this three dot  means sometimes Rest operator and sometimes spread operator.The operator name depends on where it define.When it define on function's parameter then it called rest operator. And it in another place in code then it called spread operator. 




*/





function sum() {       //we can find some using this methode. But this process is quite lengthy that's why we can use the Rest operator, which example are given bellow.
    let sum = 0;
    for (let i = 0; i < arguments.length; i++) {

        sum += arguments[i];
    }
    return sum;
}

console.log(sum(1, 2, 3, 4, 5))






function sum1(...rest) {    //we can take also another operator as argument, but these another operator are must be defined before rest operator. Rest operator alaws contain in last element.You know that Rest operator is one kind of array.

    return rest.reduce((a, b) => a + b)  //here we use fataro function

}

console.log(sum(1, 2, 3, 4, 5))




/*



*/

let a = [1, 2, 3]
console.log(...a)   //here we spread this arrya using three dot notation. In the other word we separate the array in single element using the spread operator.Like this we can work with an object.





let obj = {
    a: 10,
    b: 20,
    c: 30
}


let obj2 = {

    ...obj  //here ...obj use for clone object. We can use object.create  methode for clone an object. But from now we use this spread operator for clone object.

}

console.log(obj2)

