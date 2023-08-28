/*
break statement are use if we have to terminate a loop for a specific condition

On the other hand continue statement are use for skip an iteration of a loop uder a condition

*/


var a = 100;
for (var i = 0; i < a; i++) {
    if (i == 30) {
        break;
    }
    console.log(i);
}
console.log("\n\n\n")
var a = 100;
for (var i = 0; i < a; i++) {
    if (i == 30) {
        continue;
    }
    console.log(i);
}
