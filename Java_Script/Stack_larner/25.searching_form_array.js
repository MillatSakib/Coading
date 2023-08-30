var a = [1, 2, 33, 7, 4, 5, 6, 6, 7, 7, 8, 9]
var isFound = true;
for (var i = 0; i < a.length; i++) {
    if (a[i] === 50) {
        console.log("Item found at " + i + " index")
        isFound = false;
        break
    }
}
if (isFound) {
    console.log("Item not found at array")
}