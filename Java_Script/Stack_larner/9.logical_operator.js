/*

In javascript there are different type  of logical operator. But we use three type of operator frequently. That's are

AND Logical Operator (&&)
OR Logical Operator (||)
NOT Logical Operator (!)


*/


var date = new Date();
var todayDate = date.getDate();
var today = date.getDay();


if ((todayDate == 25) || (today = 5)) {
    console.log("Hurrah!! In this day pattern you learn Logical operator in javascript");

}
else {
    console.log("Sorry!!! Nothing to say..");
}