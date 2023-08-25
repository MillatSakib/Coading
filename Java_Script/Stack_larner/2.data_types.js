/*

In Javascript there are two Datatype.
1.  Premetive
2.  Object


    Premetive Datatype
   ------------------------
        Number
        String
        Boolean
        Undefined
        Nan(Not a Number)
        Null
        Infinite

    Object Datatype:
   ------------------------
        Array 
        Object
        Function

*/

var n = 5543
var f = 3.1416
var nn = Number('45.55');
console.log(nn);
console.log(Number.MAX_VALUE);      //This use for find out maximum num
console.log(Number.MIN_VALUE);      //This use for find out minumum num
console.log(1 / 0);
console.log("abc" * 43);


//Different rule for define string

var str1 = 'String';
var str2 = "String";
var str3 = `String`;
var str4 = String("String");
var str5 = String(53);
console.log(str1, str2, str3, str4, str5);

//null vs undefind

var aaa = null;
var bbb;
console.log(aaa);
console.log(bbb);

//hexadecimal and octal value store in variable

var hex = 0xff;
var oct = 0o74;
console.log(hex);
console.log(oct);