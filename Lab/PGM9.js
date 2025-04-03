function validate(){
    let user=document.getElementById("user").value;
    
    if(user.trim()=="")
    {
        alert("username is required");
    }
}
