  <?php


  ?>
  <header>
   <div class="d-flex justify-content-around m-15 align-items-center">
    <h1>Nouveau Contact</h1>
    <div class="d-flex justify-content-between align-items-center">
    <a href="/">
      <button class="btn btn-danger btn-block mb-4 mt-4">Retour</button>
    </a>
      <img src="darkthemeicon/moon2.png" class="img-fluid" id="icon">
      </div>
  </div>
  </header>
  <main>
    <div class="container p-3 mb-2 bg-light text-dark shadow-lg rounded">
      <form method="post" action="?page=add&form=insert">
        <!-- 2 column grid layout with text inputs for the first and last names -->
        <div class="row mb-4">
          <div class="col">
            <div class="form-outline">
              <label class="form-label" for="name">Prenom</label>
              <input type="text" name="name" class="form-control" placeholder="Prenom" required/>

            </div>
          </div>
          <div class="col">
            <div class="form-outline">
              <label class="form-label" for="Last_name">Nom</label>
              <input type="text" name="Last_name" class="form-control" placeholder="Nom" required/>

            </div>
          </div>
        </div>

        <!-- Text input -->
        <div class="form-outline mb-4">
          <label class="form-label" for="Job_Function">Fonction</label>
          <input type="text" name="Job_Function" class="form-control" placeholder="Fonction"/>

        </div>

        <!-- Text input -->
        <div class="form-outline mb-4">
          <label class="form-label" for="Mobile">Mobile</label>
          <input type="tel" name="Mobile" class="form-control" placeholder="Mobile" pattern="[0-9]{10}" required/>

        </div>

                <!-- Number input -->
        <div class="form-outline mb-4">
          <label class="form-label" for="Phone">Telephone</label>
          <input type="tel" name="Phone" class="form-control" placeholder="Telephone" pattern="[0-9]{10}" required/>

        </div>

        <!-- Email input -->
        <div class="form-outline mb-4">
          <label class="form-label" name="email">Email</label>
          <input type="email" name="email" class="form-control" placeholder="Email" required/>

        </div>




          <div class="mb-3">
            <label for="Picture" class="form-label">Photo</label>
            <input class="form-control" type="file" name="photo" id="fileSelect">
        </div>


        <!-- Submit button -->
        <button type="submit" class="btn btn-primary btn-block mb-4" value="Upload">Enregistrer</button>
      </form>

    </div>
<?php

$action = @$_GET['form'];

if ($action == "insert") {


$test = true;

$testName = @$_POST['name'];
if(strlen($testName) < 100){
$Name = filter_var($testName, FILTER_SANITIZE_STRING, FILTER_FLAG_STRIP_LOW);


} else {
  echo "<h3>le prenom est trop long</br></h3>";
  $test = false;
}

$testEmail = @$_POST['email'];
if(strlen($testEmail) < 250){
$Email = filter_var($testEmail, FILTER_VALIDATE_EMAIL);

} else {
  echo "<h3>l'email est trop long</br></h3>";
    $test = false;
}
/*

if((strlen($testEmail) < 250){
    echo "Email invalide truc";
    echo '<br>';
  }else {
    $Email = htmlspecialchars($_POST['email']);
}
*/

$testLast_Name = @$_POST['Last_name'];

if(strlen($testLast_Name) < 100){
$Last_Name = filter_var($testLast_Name, FILTER_SANITIZE_STRING, FILTER_FLAG_STRIP_LOW);

} else {
  echo "<h3>le nom est trop long</br></h3>";
    $test = false;
}
/*$Last_Name = htmlspecialchars($_POST['Last_name']);*/


$testJob_Function = @$_POST['Job_Function'];


if(strlen($testJob_Function) < 55){
$Job_Function = filter_var($testJob_Function, FILTER_SANITIZE_STRING, FILTER_FLAG_STRIP_LOW);

} else {
  echo "<h3>le Job est trop long</br></h3>";
    $test = false;
}
/*$Job_Function = htmlspecialchars($_POST['Job_Function']);*/



    // Check if file was uploaded without errors
    if (isset($_FILES["photo"]) && $_FILES["photo"]["error"] == 0)
    {
        $allowed_ext = array("jpg" => "image/jpg",
                            "jpeg" => "image/jpeg",
                            "gif" => "image/gif",
                            "png" => "image/png");
        $file_name = $_FILES["photo"]["name"];
        $file_type = $_FILES["photo"]["type"];
        $file_size = $_FILES["photo"]["size"];
    
        // Verify file extension
        $ext = pathinfo($file_name, PATHINFO_EXTENSION);

        if (!array_key_exists($ext, $allowed_ext))  
            die("Error: Please select a valid file format.");
        
        // Verify file size - 2MB max
        $maxsize = 2 * 1024 * 1024;

        if ($file_size > $maxsize)  
            die("Error: File size is larger than the allowed limit of 2MB");    
    
        // Verify MYME type of the file
        if (in_array($file_type, $allowed_ext))
        {
            // Check whether file exists before uploading it
            if (file_exists("upload/".$_FILES["photo"]["name"]))        
                echo $_FILES["photo"]["name"]." already exists!";
            
            else
            {
                move_uploaded_file($_FILES["photo"]["tmp_name"],
                        "uploads/".$_FILES["photo"]["name"]);
                echo "Your file uploaded successfully.";
            }
        }
        else
        {
            echo "Error: Please try again!";
        }
    }
    else
    {
        echo "Error: ". $_FILES["photo"]["error"];
    }

$Phone = htmlspecialchars($_POST['Phone']);

$Mobile = htmlspecialchars($_POST['Mobile']);

$Picture = htmlspecialchars($_POST['photo']);



if ($test == true) {

$sql = "INSERT INTO users (Name, Last_Name, Email, Job_Function, Phone, Mobile, Picture)
VALUES ('$Name', '$Last_Name', '$Email', '$Job_Function', '$Phone', '$Mobile', '$Picture')";

if ($conn->query($sql) === TRUE) {
  echo "New record created successfully";
} else {
  echo "Error: " . $sql . "<br>" . $conn->error;
}
}

}




$conn->close();

?>
  </main>


