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


function setCookie(cname, cvalue, exdays) {
  const d = new Date();
  d.setTime(d.getTime() + (exdays*24*60*60*1000));
  let expires = "expires="+ d.toUTCString();
  document.cookie = cname + "=" + cvalue + ";" + expires;
}

function getCookie(cname) {
  let name = cname + "=";
  let decodedCookie = decodeURIComponent(document.cookie);
  let ca = decodedCookie.split(';');
  for(let i = 0; i <ca.length; i++) {
    let c = ca[i];
    while (c.charAt(0) == ' ') {
      c = c.substring(1);
    }
    if (c.indexOf(name) == 0) {
      return c.substring(name.length, c.length);
    }
  }
  return "";
}

    var icon = document.getElementById('icon');

    icon.onclick = function(){
      document.body.classList.toggle("dark-theme");
      if(document.body.classList.contains("dark-theme")){
        icon.src ="darkthemeicon/sun.png";
        setCookie("darkmode",true);
      } else {
        icon.src = "darkthemeicon/moon2.png";
        setCookie("darkmode",false);
      }
    }
    window.onload = function(){
      let darkmode = getCookie("darkmode");
      if (darkmode === "true") {
              document.body.classList.toggle("dark-theme");
                      icon.src ="darkthemeicon/sun.png";
      }

    }
  </script>
  </body>
  <footer></footer>
</html>
