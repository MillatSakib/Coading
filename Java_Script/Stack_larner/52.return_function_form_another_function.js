function greet (msg){
    function greetings (name){
        return msg + ',' + name + '!'
    }
    return greetings
}
var gm = greet ('Good Morning')
var gn = greet ('Good Night')
var hello= greet('Hello')

var msg = gm('HM Nayem')
console.log(gn('Twinkle Cats'))
console.log(msg)
console.log(hello('Shegufa Taranjum'))













//function for find out power

function base(b){
    return function (n){
        var result = 1
        for (var i =0; i<b; i++){
            result*=n
        }
        return result
    }
}
var base10= base(10)
console.log(base10(2))