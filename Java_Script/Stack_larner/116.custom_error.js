/*


Javascript gives us different type of error.Like EvalError, InternalError, RangeError, RefenceError, SyntaxError, TypeError, URIError etc.

But besides these Error we can cerate an custom error.This custom error are not use frequently. The usecase in Real life example is we want to show that in our website problem specifically. Like is it databese connection error or api call probelm or json coversion problem. In that case we have to use custom error.




*/

class CustomError extends Error {
    constructor(msg) {
        super(msg)
            if (Error.captureStackTrace) {  //we check here because this system will work with only V8 Engine only.This will detect where occure the exact error.

                Error.captureStackTrace(this, CustomError)
            }
        }
    }



try {

    console.log('I am line 1')
    throw new CustomError('I am resultant of your Error.')
    console.log('I am line 2')
    console.log('I am line 3')
} catch(e) {    //here through parameter(e) the custom error message are passing

    console.log(e)
} finally {
    console.log('I am Finally Block.')
}

