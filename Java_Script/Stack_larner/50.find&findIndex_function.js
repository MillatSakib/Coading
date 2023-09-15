var arr = [7,4,8,6,2,1,70,3]
var result = arr.find(function (value){
    return value === 6;
})

console.log(result);

var arr = [7,4,8,6,2,1,70,3]
var result = arr.findIndex(function (value){
    return value === 6;
})

console.log(result);




function myFind(arr, cb){
    for(var i=0; i< arr.length; i++){
        if(cb(arr[i])){
            return arr[i];
        }
    }
}



function myFindIndex(arr, cb){
    for(var i=0; i< arr.length; i++){
        if(cb(arr[i])){
            return i;
        }
    }
}


var result = myFind (arr, function(value){
    return value ===6;
})

var result1 = myFindIndex (arr, function(value){
    return value ===6;
})
console.log(result)
console.log(result1)