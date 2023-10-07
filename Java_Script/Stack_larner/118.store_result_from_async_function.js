/*

Now we learned about asyncronus programming behavior.But if we use asyncronus programming then we face a problem multiple time. That problem is the syncronus line are execute before the asynchronus commands. That's why if the synchronus lines are depends on asyncronus line then it will return unexpected result. To solve this problem we have to execute all nessecary command into asynchronus function. 



*/


function sayMyName(name){
    let result
    setTimeout(() =>{
        result = name
        console.log('I have done....')
    }, 3000)
    return result
}


let output = sayMyName('HM Nayem')


console.log(output)




function sayMyName_(name) {
    setTimeout(()=>{
        console.log(name)
    },2000)
}

sayMyName_('SM Sakib')