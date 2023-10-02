/*

If some task contain after try catch then we can use finally. Either try or catch are executed finally block must be executed alawys. So it remember it.




*/

try{

    console.log('I am line 1')
    throw new Error('I am an error')
    console.log('I am line 2')
    console.log('I am line 3')
} catch(e){

    console.log(e.message)
} finally {
    console.log('I am finally Block')
}