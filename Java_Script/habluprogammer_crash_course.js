var myName = "Md Sohan Millat Sakib"
console.log(myName);
console.log(typeof myName);
var intData = 4323;
console.log(intData);
console.log(typeof intData);
var boolType = true;
console.log(boolType);
console.log(typeof boolType);
var gorur_rochona = "gorur 4ti pa ache";
gorur_rochona = gorur_rochona.toUpperCase();
console.log(gorur_rochona);
gorur_rochona = gorur_rochona.toLowerCase();
console.log(gorur_rochona);
var hablu = "Hablu vaia handsome sele";
console.log(hablu.split("Hablu"));
var hablu_goru = "Hablu vaia theke ami gorur rochna likha shiksi.";
console.log(hablu_goru.indexOf("ami"));
var stringToFloat = "43.898";
stringToFloat = parseFloat(stringToFloat);
console.log(stringToFloat);
var stringToInt = "53.9";
stringToInt = parseInt(stringToInt);
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
console.log(Math.round(num1));
num1 = 0.4;
console.log(Math.round(num1));
console.log(Math.floor(num1));
console.log(Math.ceil(num1));
num1 = Math.random();
num1 = (Math.round((num1 * 100000000) % 9999));
console.log("OTP is " + num1);
var a = 5;
var b = 9;
if (a < b) {
    console.log("a is small");
}
else if (b < a) {

    console.log("b is small");
}
else {
    console.log("a is equal to b");
}

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

 var arr=['Sakib', 'Saka', 'Abir'];
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
 console.log(arr.slice(0,2));
 console.log(arr);
    arr.splice(0,1,"Asif","Soyeb","Sabbir","Rakib","Imran");
    console.log(arr);
 for(var a=0;a<10;a++){
console.log(a);
 }
 while(a<20){
    console.log(a);
    a++;
 }

 
 
function multiplication(n1, n2){
    var total= n1*n2;
    return total;

}

    var mul = multiplication(num1, num2);
    console.log("Multiplication of "+num1+" and"+num2+"="+mul);


for(var i=0;i<500;i++){
    console.log((parseInt((Math.random())*5000)));
}