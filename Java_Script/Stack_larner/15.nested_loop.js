/*

In nested loop we print the pattern given bellow

Pattern 1:

1
1 2
1 2 3 
1 2 3 4 
1 2 3 4 5




Pattern 2:

* * * * *
* * * * *
* * * * *
* * * * *
* * * * *



*/

var pattern1 = 5;
var pattern2 = 5;

for (var i = 1; i <= pattern1; i++) {
    var result = "";
    for (var j = 1; j <= i; j++) {
        result += j + " ";
    }
    console.log(result);
}
console.log("\n\n\n");

for (var i = 1; i <= pattern2; i++) {
    var result = "";
    for (var j = 1; j <= pattern2; j++) {
        result += "* ";
    }
    console.log(result);
}