<?php

?>

<header>
   <div class="d-flex justify-content-around m-15">
<h1 class="mt-3">Liste</h1>
<div>
<a href="?page=add">
<button class="btn btn-success btn-block mb-4 mt-3">Ajouter</button>
</a>
<img src="darkthemeicon/moon.png" class="img-fluid" id="icon">
</div>
</div>
</header>
<main>
<div class="container p-3 mb-2 bg-light text-dark shadow-lg rounded">
<table class="table" id="myTable">
    <tr>
      <th scope="col">Nom</th>
    </tr>
   <?php for ($i=0; $i < 50; $i++) { ?>
    <tr>
           <td>
      <a href="?page=profil" class="text-dark text-decoration-none m-4 h5">
 Mark Otto
   </a>
   </td>

    </tr>
 <?php } ?>

</table>
</div>

</main>
