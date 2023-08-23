var myName = "Md Sohan Millat Sakib"        //Rule for Declearetion of variable
console.log(myName);                 //Print the value of variable on console
console.log(typeof myName);     //Print the type of variable on console
var intData = 4323;
console.log(intData);
console.log(typeof intData);
var boolType = true;
console.log(boolType);
console.log(typeof boolType);
var gorur_rochona = "gorur 4ti pa ache";
gorur_rochona = gorur_rochona.toUpperCase();     //Converting string into uppercase using builtin function
console.log(gorur_rochona);
gorur_rochona = gorur_rochona.toLowerCase();     //Converting string into uppercase using builtin function
console.log(gorur_rochona);
var hablu = "Hablu vaia handsome sele";
console.log(hablu.split("Hablu"));
var hablu_goru = "Hablu vaia theke ami gorur rochna likha shiksi.";
console.log(hablu_goru.indexOf("ami"));
var stringToFloat = "43.898";
stringToFloat = parseFloat(stringToFloat);      //Convert string into float
console.log(stringToFloat);
var stringToInt = "53.9";  
stringToInt = parseInt(stringToInt);        //convert string into integer
console.log(stringToInt);
var numberToString = 43;
numberToString = "" + numberToString;
console.log(typeof numberToString);
var num1 = 78
var num2 = 10
console.log("Sum " + (num1 + num2));
console.log("Sub " + (num1 - num2));
console.log("Mul " + (num1 * num2));
console.log("Div " + (num1 / num2));
console.log("Remainder " + (num1 % num2));
num1 = 0.5;
console.log(Math.round(num1));          //Math round funtion use if the value is less then 0.5 it converted into 0 and if greater then 0.5 it converted into 1
num1 = 0.4;
console.log(Math.round(num1));      
console.log(Math.floor(num1));
console.log(Math.ceil(num1));
num1 = Math.random();           //random funtion use for generate random Number
num1 = (Math.round((num1 * 100000000) % 9999));
console.log("OTP is " + num1);
var a = 5;
var b = 9;

//if else condition starts Here


if (a < b) {
    console.log("a is small");
}
else if (b < a) {

    console.log("b is small");
}
else {
    console.log("a is equal to b");
}



//if else condition Ends Here






//switch case condition starts Here
switch (a) {
    case 1:
        console.log("You Entered 1");
        break;
    case 2:
        console.log("You Entered 2");
        break;
    case 3:
        console.log("You Entered 3");
        break;
    case 4:
        console.log("You Entered 4");
        break;
    case 5:
        console.log("You Entered 5");
        break;
    default:
        console.log("Number ta khuje pelam na.");
}
//swithc case  condition starts Here



//Here's all the frequently used date funtion.


var myDate = new Date();
console.log(myDate.toTimeString());
console.log(myDate.toLocaleTimeString());
console.log(myDate.toLocaleDateString());
console.log(myDate.getMonth());
console.log(myDate.getDate());
console.log(myDate.getHours());
console.log(myDate.getMinutes());
console.log(myDate.getSeconds());
console.log(myDate.getMilliseconds());



//This is array
var arr = ['Sakib', 'Saka', 'Abir'];
console.log(arr);
console.log(arr[1]);
arr.push('Tazbir');
console.log(arr);
arr.pop();
console.log(arr);
arr.unshift('Rafy');
console.log(arr);
arr.shift();
console.log(arr);
console.log(arr.slice(0, 2));
console.log(arr);
arr.splice(0, 1, "Asif", "Soyeb", "Sabbir", "Rakib", "Imran");
console.log(arr);
for (var a = 0; a < 10; a++) {
    console.log(a);
}
while (a < 20) {
    console.log(a);
    a++;
}


//Here i use Function
function multiplication(n1, n2) {
    var total = n1 * n2;
    return total;

}



var mul = multiplication(num1, num2);
console.log("Multiplication of " + num1 + " and" + num2 + "=" + mul);


for (var i = 0; i < 5; i++) {
    console.log((parseInt((Math.random()) * 5000)));
}

var newObj1 = { Name: "Md. Sohan Millat Sakib", Village: "Bonogram", ContactNo: 1613931087 }

console.log(newObj1);




//This is object

function MyInfo(yourName, village, contactNo) {
    this.yourName = yourName;
    this.village = village;
    this.contactNo = contactNo;

}

var infoData = new MyInfo("Md. Sohan Millat Sakib", "Bonogram", 1741089180);
console.log(infoData);
console.log(infoData.yourName + "  " + infoData.village + "  " + infoData.contactNo);





function MyInfo1(yourName, village, contactNo) {
    this.yourName = yourName;
    this.village = village;
    this.contactNo = contactNo;
    this.ShowMe = function () {
        console.log(this.yourName);
        console.log(this.village);
        console.log(this.contactNo);
    }

}
var infoData1 = new MyInfo1("Md. Sakibus Sayed Sakib", "Koromja", 1683947236);

infoData1.ShowMe();


//Here i use innerloop and outerloop

function outerloop() {
    let aVariable = 43;
    console.log("This is outerloop");
    function innerloop() {
        console.log("This is inner loop");
    }
    innerloop();
}
outerloop();