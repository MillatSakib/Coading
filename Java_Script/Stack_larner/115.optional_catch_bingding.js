try {

    console.log('I am line 1')
    throw new Error('I am an error')
    console.log('I am line 2')
    console.log('I am line 3')
} catch{
    /*

    There has no reuire of error parameter in real life. This is why ES6 are remove this from catch. So from ES6 it is not mandatory to use e as argument of catch.

    */

    console.log('This is a custom error message inside catch block')
} finally {
    console.log('I am finally Block')
}