

const xhr = new XMLHttpRequest()

xhr.open('get', 'https://jsonplaceholder.typicode.com/user')

xhr.onreadystatechange = function(e){
    if(xhr.readyState === 4){
        if(xhr.status === 200){
            let user = JSON.parse(xhr.response)
            console.log(users)
        } else {

            console.log(xhr.status)

        }
    }
}


xhr.send()

function gerRequest(url, callback) {
    const xhr = new XMLHttpRequest()
}