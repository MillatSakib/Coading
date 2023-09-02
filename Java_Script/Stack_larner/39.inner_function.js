function welcomeMessage(a){
    function hi(){
        console.log("Hi my dear fridend.");
    }
    function bye(){
        console.log("Get Lost. You are not my friend.");
    }

    if(a){
        hi();
    }
    else{
        bye();
    }
}

// hi()       //we cann't call from here


welcomeMessage(1);