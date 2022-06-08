<?php
$page = @$_GET['page'];
require('core/conn.php.inc');
?>
<!doctype html>
<html lang="en">
  <head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title>Bootstrap demo</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.2.0-beta1/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-0evHe/X+R7YkIZDRvuzKMRqM+OrBnVFBL6DOitfPri4tjfHxaWutUpFmBp4vmVor" crossorigin="anonymous">
      <link rel="stylesheet" href="dark-mode.css">
  </head>
  <body>
    <?php 
if ($page == '') { require('views/list.php.inc'); }
if ($page == 'add') { require('views/form.php.inc'); }
if ($page == 'profil') { require('views/profil.php.inc'); }
    ?>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.2.0-beta1/dist/js/bootstrap.bundle.min.js" integrity="sha384-pprn3073KE6tl6bjs2QrFaJGz5/SUsLqktiwsUTF55Jfv3qYSDhgCecCxMW52nD2" crossorigin="anonymous"></script>
  </script>
  <script>
    var icon = document.getElementById('icon');

    icon.onclick = function(){
      document.body.classList.toggle("dark-theme");
      if(document.body.classList.contains("dark-theme")){
        icon.src ="darkthemeicon/sun.png";
      } else {
        icon.src = "darkthemeicon/moon.png";
      }
    }
  </script>
  </body>
  <footer></footer>
</html>
