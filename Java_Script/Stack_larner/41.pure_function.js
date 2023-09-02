/*
What is pure function

It return same result if we give the same arguments

It does not cause any observable side effect like change the value of outside function

*/

function squr(n){
    return n*n;
}

console.log(squr(9))    //This is a pure function because if we give the same valu thousand times then it return the same value. And it has no observeable side effect. Thats why it is a pure function


var isPure =10;

function impure(){  //This is not a pure function because it change the value of variable which is outsibe of function
    isPure = 15;
    console.log(isPure);
}
impure();
console.log(isPure);