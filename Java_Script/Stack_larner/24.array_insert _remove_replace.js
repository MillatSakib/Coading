var a = [1, 2, 3, 4, 5]
a.push(6)
console.log(a)
a.unshift(9)
console.log(a)
a.splice(3, 0, 7, 8, 9)  //splice(initial_position_of_trevesing, number_of_delete_item, intsert_items)
console.log(a)
a.splice(3, 2, 100, 200)
console.log(a)