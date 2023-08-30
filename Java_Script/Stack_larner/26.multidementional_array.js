var multiArr = [
    [1, 2, 3, 4, 5, 6, 7, 8, 9],
    [10, 20, 30, 40, 50, 60, 70, 80, 90],
    [100, 200, 300, 400, 500, 600, 700, 800, 900],
    [1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000]
]

// console.log(multiArr.length)

for (var i = 0; i < multiArr.length; i++) {
    for (var j = 0; j < multiArr[i].length; j++) {
        console.log("Element " + i + "is : " + multiArr[i][j]);
    }
}