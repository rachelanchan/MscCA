<?php
    $servername="localhost";
    $username="rachel";
    $password="123456789";

    //create connection
    $conn = new mysqli($servername,$username,$password);

    //check conn
      if($conn->connect_error){
        die("Connection failed: ".$conn->connect_error);
      }

      echo "Connected successfully";
      $conn->close();
?>
