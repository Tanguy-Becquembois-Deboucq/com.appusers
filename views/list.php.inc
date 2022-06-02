<?php

?>

<header>
   <div class="d-flex justify-content-around m-15">
<h1 class="mt-3">Liste</h1>
<a href="http://localhost/com.appusers/?page=add">
<button class="btn btn-success btn-block mb-4 mt-3">Add</button>
</a>
</div>
</header>
<main>
<div class="container p-3 mb-2 bg-light text-dark shadow-lg rounded">
<table class="table">
  <thead>
    <tr>
      <th scope="col">#</th>
      <th scope="col">Prénom</th>
      <th scope="col">Nom</th>
      <th scope="col">Job</th>
      <th scope="col">Portable</th>
      <th scope="col">Tél</th>
      <th scope="col">Email</th>
    </tr>
  </thead>
  <tbody>
   <?php for ($i=0; $i < 50; $i++) { ?>
    <tr>
      <th scope="row">
         <img src="https://lipsum.app/100x100/" class="shadow"></th>
      </th>
      <td>Mark</td>
      <td>Otto</td>
      <td>Acrobate</td>
      <td>8888888888</td>
      <td>9999999999</td>
      <td>@mdo</td>
      <td><button class="btn btn-danger btn-block mb-4 mt-3">Delete</button></td>
      <td><button class="btn btn-warning btn-block mb-4 mt-3">Edit</button></td>

    </tr>
 <?php } ?>

  </tbody>
</table>
</div>

</main>
