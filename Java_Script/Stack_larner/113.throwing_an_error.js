/*

It is not mandetory that try..catch are alawys contain in a function.We can open try catch in anywhere..


In try..catch block system try will terminated when it get an error. You can see that after throw Error methode all ather line in try block are quite dim color. Because these line will not execute never.And there donot cause any error in try block catch() block will never called.



*/


try {

    console.log('I am line 1')
    console.log('I am line 2')
    console.log('I am line 3')
    throw new Error('I am an Error')
    console.log('I am line 4')
} catch(e){
    console.log(e.message)
} 