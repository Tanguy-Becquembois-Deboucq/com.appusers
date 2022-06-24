  <?php  ?>
  <header>
   <div class="d-flex justify-content-around m-15 align-items-center">
    <h1>Profil</h1>
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
  <div class="text-center">
    <?php
    $profilid = $_GET['user'];
   $sql = "SELECT id, Name, Last_Name, Job_Function, Phone, Mobile, Picture, Email FROM users WHERE id = $profilid";
$result = $conn->query($sql);
$data = $result->fetch_assoc();

?>
         <img src="uploads/<?php echo $data["Picture"]; ?>" class=" shadow rounded-circle" style="width: 150px;"></th>
            <h2 class="mt-3"><?php echo $data["Name"] . " " . $data["Last_Name"]; ?></h2>
          </div>
                    <div class="m-3 p-2 shadow bg-info text-white d-flex flex-row justify-content-between">
            <p class="m-0">Fonction: <?php echo $data["Job_Function"]; ?><br/> </p>
<i class="bi bi-person-square"></i>
  <svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" fill="currentColor" class="bi bi-person-square" viewBox="0 0 16 16">
  <path d="M11 6a3 3 0 1 1-6 0 3 3 0 0 1 6 0z"/>
  <path d="M2 0a2 2 0 0 0-2 2v12a2 2 0 0 0 2 2h12a2 2 0 0 0 2-2V2a2 2 0 0 0-2-2H2zm12 1a1 1 0 0 1 1 1v12a1 1 0 0 1-1 1v-1c0-1-1-4-6-4s-6 3-6 4v1a1 1 0 0 1-1-1V2a1 1 0 0 1 1-1h12z"/>
</svg>
          </div>
          <div class="m-3 p-2 shadow bg-info text-white d-flex flex-row justify-content-between">
            <p class="m-0">Telephone: <?php echo $data["Phone"]; ?><br/> </p>
            <i class="bi bi-telephone"></i>
            <svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" fill="currentColor" class="bi bi-telephone" viewBox="0 0 16 16">
  <path d="M3.654 1.328a.678.678 0 0 0-1.015-.063L1.605 2.3c-.483.484-.661 1.169-.45 1.77a17.568 17.568 0 0 0 4.168 6.608 17.569 17.569 0 0 0 6.608 4.168c.601.211 1.286.033 1.77-.45l1.034-1.034a.678.678 0 0 0-.063-1.015l-2.307-1.794a.678.678 0 0 0-.58-.122l-2.19.547a1.745 1.745 0 0 1-1.657-.459L5.482 8.062a1.745 1.745 0 0 1-.46-1.657l.548-2.19a.678.678 0 0 0-.122-.58L3.654 1.328zM1.884.511a1.745 1.745 0 0 1 2.612.163L6.29 2.98c.329.423.445.974.315 1.494l-.547 2.19a.678.678 0 0 0 .178.643l2.457 2.457a.678.678 0 0 0 .644.178l2.189-.547a1.745 1.745 0 0 1 1.494.315l2.306 1.794c.829.645.905 1.87.163 2.611l-1.034 1.034c-.74.74-1.846 1.065-2.877.702a18.634 18.634 0 0 1-7.01-4.42 18.634 18.634 0 0 1-4.42-7.009c-.362-1.03-.037-2.137.703-2.877L1.885.511z"/>
</svg>
          </div>
          <div class="m-3 p-2 shadow bg-info text-white d-flex flex-row justify-content-between">
            <p class="m-0">Mobile: <?php echo $data["Mobile"]; ?><br/> </p>
            <i class="bi bi-telephone"></i>
     <svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" fill="currentColor" class="bi bi-phone" viewBox="0 0 16 16">
  <path d="M11 1a1 1 0 0 1 1 1v12a1 1 0 0 1-1 1H5a1 1 0 0 1-1-1V2a1 1 0 0 1 1-1h6zM5 0a2 2 0 0 0-2 2v12a2 2 0 0 0 2 2h6a2 2 0 0 0 2-2V2a2 2 0 0 0-2-2H5z"/>
  <path d="M8 14a1 1 0 1 0 0-2 1 1 0 0 0 0 2z"/>
</svg>
          </div>
              <div class="m-3 p-2 shadow bg-info text-white d-flex flex-row justify-content-between"><p class="m-0">Email: <?php echo $data["Email"]; ?></p>
                <svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" fill="currentColor" class="bi bi-envelope-paper" viewBox="0 0 16 16">
  <path d="M4 0a2 2 0 0 0-2 2v1.133l-.941.502A2 2 0 0 0 0 5.4V14a2 2 0 0 0 2 2h12a2 2 0 0 0 2-2V5.4a2 2 0 0 0-1.059-1.765L14 3.133V2a2 2 0 0 0-2-2H4Zm10 4.267.47.25A1 1 0 0 1 15 5.4v.817l-1 .6v-2.55Zm-1 3.15-3.75 2.25L8 8.917l-1.25.75L3 7.417V2a1 1 0 0 1 1-1h8a1 1 0 0 1 1 1v5.417Zm-11-.6-1-.6V5.4a1 1 0 0 1 .53-.882L2 4.267v2.55Zm13 .566v5.734l-4.778-2.867L15 7.383Zm-.035 6.88A1 1 0 0 1 14 15H2a1 1 0 0 1-.965-.738L8 10.083l6.965 4.18ZM1 13.116V7.383l4.778 2.867L1 13.117Z"/>
</svg>
              </div>
              <div class="row m-2">


                <div class="col-6"><a href="?page=edit&id=<?php echo $profilid ?>"><button class="btn btn-warning btn-block w-100 text-white" type="button">Edit</button></a></div>    
                <div class="col-6"><a href="?page=delete&user=<?php echo $profilid?>"><button class="btn btn-danger btn-block w-100" type="button">Supprimer</button></a></div>

</div>

</div>

</main>