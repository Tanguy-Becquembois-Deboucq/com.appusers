<!DOCTYPE html>

<html>

<head>

    <title>Image Upload in PHP</title>

</head>

<body>

    <div id="wrapper">

        <! specify the encoding type of the form using the 

                enctype attribute >

        <form method="POST" action="" enctype="multipart/form-data">        

            <input type="file" name="choosefile" value="" />

            <div>

                <button type="submit" name="uploadfile">

                UPLOAD

                </button>

            </div>

        </form>

    </div>

</body>

</html>


<?php

error_reporting(0);

?>

<?php

$msg = ""; 

// check if the user has clicked the button "UPLOAD" 

if (isset($_POST['uploadfile'])) {

    $filename = $_FILES["choosefile"]["name"];

    $tempname = $_FILES["choosefile"]["tmp_name"];  

        $folder = "uploads/".$filename;   

    // connect with the database

    $db = mysqli_connect("localhost", "root", "", "users"); 

        // query to insert the submitted data

        $sql = "INSERT INTO Picture (filename) VALUES ('$filename')";

        // function to execute above query

        mysqli_query($db, $sql);       

        // Add the image to the "image" folder"

        if (move_uploaded_file($tempname, $folder)) {

            $msg = "Image uploaded successfully";

        }else{

            $msg = "Failed to upload image";

    }

}

$result = mysqli_query($db, "SELECT * FROM Picture");


?>