function validate(){
    let user=document.getElementById("user").value;
    let pass=document.getElementById("pass").value;
    
    if(user.trim()==""){
        
        alert("username is required");
    }
    else if(pass.length<6||pass.length>12){
        alert("Password must be between 6 and 12 character ");
    }
    else
    {
       let pattern=/^.+@.+com$/;
       if(!pattern.test(user)){
           alert("invalid Email")
       }
       
    }
}
