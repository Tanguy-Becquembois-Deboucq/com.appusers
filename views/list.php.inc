<?php

?>

<header>
   <div class="d-flex justify-content-around m-15 align-items-center">
     <h1>Liste</h1>
     <div class="d-flex justify-content-between align-items-center">
        <a href="?page=add">
         <button class="btn btn-success btn-block mb-4 mt-4">Ajouter</button>
      </a>
      <img src="darkthemeicon/moon2.png" class="img-fluid" id="icon">
   </div>
</div>
</header>
<main>
   <div class="container p-3 mb-2 bg-light text-dark shadow-lg rounded">
      <table class="table" id="myTable">
        <tr>
         <th scope="col">Nom</th>
      </tr>
      <?php
      $sql = "SELECT id, Name, Last_Name FROM users";
      $result = $conn->query($sql);

      if ($result->num_rows > 0) {
  // output data of each row
       while($row = $result->fetch_assoc()) {
         ?>
         <tr>

          <td>
            <a href="?page=profil&user=<?php echo $row["id"]?>" class="text-dark text-decoration-none m-4 h5">

              <?php echo $row["Name"]. " " . $row["Last_Name"]; ?>

           </a>
        </td>


     </tr>
     <?php
  }
} else {
 echo "0 results";
}

$conn->close();
?>

</table>
</div>

</main>
