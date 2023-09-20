function Otp(){
    let otp=parseInt(((Math.random())*10000000000)%999999);
    if(otp<100000){
        var otpDif=100000-otp;
        otp=otp+otpDif+(parseInt((Math.random())*5000));
    }
    return otp;
}
for(var i=0;i<500000;i++){
    console.log("You are registering on Lorem Co. Your OTP is "+Otp());
}
