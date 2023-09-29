/*

Map is one kind of data structure which main concept is key value pair like javascript object. But the difference is in javascript object we can define anything as variable. But in map funciton we can use anything to define an object Like we can keep a key as a Number or object.

*/


let map = new Map([
    ['a', 10],
    ['b',20],
    ['c', 30]
])
map.set('d', 40)
console.log(map)
console.log(map.size)
map.delete('c')
console.log(map)
console.log(map.get('a'))
console.log(map.values())
console.log(map.keys())
console.log(map.entries())
for(let [k,v] of map){
    console.log(v,k)
}

map.forEach((v,k)=>{
console.log(k,v)
})