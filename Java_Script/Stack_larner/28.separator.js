var arr = [1,2,3,4,5,6,7,8]
var arr1= [11,22,33,44,55,66,77,88,99]
console.log(arr.join(" | "))    //here join take a separator and then it convert the arrays element in a string using the separator

arr.fill(true)
console.log(arr)
var arr2 = arr.concat(arr1)
console.log(arr2)

var arr3= Array.from(arr1);
console.log(arr3)

/*Here we can think like about here we can directly assign an array to another array. But then why we are using a library funtion?
We use Array.form() because if we directly assing an array to another then the array1 send a refernce to array2(Donot send a copy). That's why if array2 changed then array1 also be changed. This is why if we pass a copy of array1 into array2, we use Array.form()  function.

*/