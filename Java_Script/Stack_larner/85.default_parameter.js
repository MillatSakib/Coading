//Before ES6 we work with default parameter in differnt way.

function sqr(n = 1){
    return n*n
}

console.log(sqr(null))

function greet (name = 'HM Nayem', msg = 'Hello'){
    console.log(name.length)
    console.log(`${msg}! ${name}`)
}

greet( null, 'Hello')  //here we will get an error because we provide null as argument


//if we use default parameter then can't sent null or undefined value as argument. If we do it then it is a big mistake.


