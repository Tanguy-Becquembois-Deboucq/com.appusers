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
      <form method="post" action="?page=add&form=insert"  enctype="multipart/form-data">
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
            <label for="fileSelect" class="form-label">Photo</label>
            <input class="form-control" type="file" name="choosefile" id="fileSelect">
        </div>



        <!-- Submit button -->
        <button type="submit" class="btn btn-primary btn-block mb-4" value="Upload" name="uploadfile">Enregistrer</button>
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



$msg = ""; 

// check if the user has clicked the button "UPLOAD" 

if (isset($_POST['uploadfile'])) {

    $filename = $_FILES["choosefile"]["name"];

    $tempname = $_FILES["choosefile"]["tmp_name"];  

        $folder = "uploads/".$filename;   

    // connect with the database

  /*  $db = mysqli_connect("localhost", "root", "", "users"); 

        // query to insert the submitted data

        $sql = "INSERT INTO Picture (filename) VALUES ('$filename')";

        // function to execute above query

        mysqli_query($db, $sql);       
*/
        // Add the image to the "image" folder"

        if (move_uploaded_file($tempname, $folder)) {

            $msg = "Image uploaded successfully";

        }else{

            $msg = "Failed to upload image";

    }

}

/*$result = mysqli_query($db, "SELECT * FROM Picture");*/

$Phone = htmlspecialchars($_POST['Phone']);

$Mobile = htmlspecialchars($_POST['Mobile']);

$Picture = htmlspecialchars($filename);



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


