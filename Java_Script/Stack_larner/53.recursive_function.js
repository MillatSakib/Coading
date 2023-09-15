function sayHi(n){
    if(n===0){
        return 
    }
    console.log("Hi, I am Calling")
    sayHi(n - 1)
}
sayHi(10)








var arr=[1,2,3,4,5]
function sumOfArray(arr, lastIndex){
    if(lastIndex < 0){
        return 0
    }
    return arr[lastIndex]+ sumOfArray(arr, lastIndex - 1)
}
console.log(sumOfArray(arr,arr.length-1))

