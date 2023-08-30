/*
There are two methode to declare a string. That's are

(i)Array Literal (   var arr= [1,2,3,4])
(ii)Array constructor (  var arr= Array(1,2,3,4)    )
*/

var arr = [1, 2, 3, 4, 5]
arr[5] = 6
arr[10] = 11
console.log(arr)
console.log(arr[15])
console.log(arr.length)

var arr2 = Array(42, 32, 3)
console.log(arr2)