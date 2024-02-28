<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Document</title>
  <style>

    .image-container {
  display: flex;
  justify-content: center;
  align-items: center;
  height: 415px; /* Adjust this value as needed */
  
  
}

.rounded-image {
  border-radius: 50%; /* This will make the image rounded */
  max-width: 10%; /* Ensures the image doesn't exceed the container width */
}
#ko{
  background-color: #fff;
}
.container {
  display: flex;
  align-items: center;
  padding-left:885px;
}
.container p {
  margin-right: 10px; /* Adjust spacing between text and link */
  font-size: 20px;
  text-decoration:none;
  font-weight:light;
}

.container a{
  color:#2a2adf;
  font-size: 20px;
  text-decoration:none;
  font-weight:light;
}
form {
  text-align: center; /* Center-align the content */
}

input[type="text"] {
  width: 600px;
  
   /* Ensures each input field appears on a new line */
  margin:0px auto; /* Centers the input fields */
  padding-top: 50px;
  color: #000;
  border-left: 0px;
  border-right:0px;
  border-top:0px;
  padding-bottom:18px;
}
input,text{
  font-size: 21px;
}


#get{
  text-decoration: none;
  display: flex;
  text-align: center;
  padding-left: 910px;
  padding-top: 25px;
  font-size: 20px;
  color:#2a2adf;
}
button{
  width: 600px;
  height: 60px;
  background-color:#2a2adf;
  border:0px;
  border-radius:8px;
  color: #fff;
  font-size: 15px;
  font-style: normal;
  font-weight: bold;
}
.button1{
  text-decoration: none;
  display: flex;
  text-align: center;
  padding-left: 870px;
  padding-top: 25px;
  font-size: 20px;
  color: green;
}

  </style>
</head>
<body>
  <section>

  <div class="image-container">
    <img src="assets/Facebook icon.jpg" alt="Your Image" class="rounded-image">
  </div>
  </section>
  <section>
  <div class="container">
    <p>africaine .</p>
    <p> العربية.</p>
    <a href="oml">MORE...</a>
  </div>

  <form>
    <input type="text" id="inputField" name="inputField" placeholder="Phone or email"><br>
    
    <input type="text" id="inputField" name="inputField" placeholder="Password"><br><br><br>
    
    <!-- Add more input fields here as needed -->
      <button> <a href="landing page"class="btn"></a>Log in</button>
  </form>
  <a href="retrive password" id="get">Forgot Password ?</a><br><br><br>
 
 <a href="creat a new account"class="button1">Create new face book account</a>
 
  </section>
</body>
</html>
