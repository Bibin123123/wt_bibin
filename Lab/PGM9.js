function validate(){
    let user=document.getElementById("user").value;
    let pass=document.getElementById("pass").value;
    
    if(user.trim()==""||pass.trim()=="")
    {
        alert("invalid username or password");
    }
}
