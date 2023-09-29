/*


Weakset is a different type of set. When we normolly declare a set and if there have a object that set are not garbage cleaned.




*/


let a = { a: '10' }, b = { b: 20 }

let set = new Set([a, b])

a = null	//here by using null we say to the compiler clear all data which are related to it.And when we write a=null, normolly it should clear all memoey from anywhere. But it can't do it.

console.log(set)	//BUT from here we can see that that set are not clare from memory. For solving this problem the weakSet methode are come. The relation between object and set are weak if we use weakset.

let arr = [...set]	//in weakset we can't store any kind of primitive data.If we contain than the programme show error.

console.log(arr[0])



let weakSet = new WeakSet([a, b])
a = null
console.log(weakSet.has(b))

