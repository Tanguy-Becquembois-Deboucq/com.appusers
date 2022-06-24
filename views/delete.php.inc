  <?php    $profilid = $_GET['user'];  ?>
  <header>
   <div class="d-flex justify-content-around m-15 align-items-center">
    <h1>Êtes-vous sûr ?</h1>
    <div class="d-flex justify-content-between align-items-center">
    <a href="/">
      <button class="btn btn-danger btn-block mb-4 mt-4">Retour</button>
    </a>
      <img src="darkthemeicon/moon2.png" class="img-fluid" id="icon">
      </div>
  </div>
  </div>
  </header>
  <main>
<div class="container p-3 mb-2 bg-light text-dark shadow-lg rounded">

  <div class="row m-2">

                <div class="col-6"><a href="?page=delete&user=<?php echo $profilid?>&action=del"><button 
                  class="btn btn-success btn-block w-100 text-white" type="button">Yes</button></a></div>  
                <div class="col-6"><a href="/"><button class="btn btn-danger btn-block w-100" type="button">No</button></a></div>

</div>
</div>
</main>



<?php 

  $action = @$_GET['action'];

  if ($action == "del")
{


$sql = "DELETE FROM users WHERE id = $profilid";


        if ($conn->query($sql) === TRUE) {
          echo "<h3>Suppression Effectuer</h3>";
        } else {
          echo "Error: " . $sql . "<br>" . $conn->error;
        }





    $conn->close();
  }

    ?>

