
<?php

/*WAP to print Good Morning if the seconds are <30 and Good afternoon if >30 */
echo "Hello World";

$time=date("s");
echo "<br>$time";

if($time<30)
echo "<br>Good Morning";

else
echo "<br>Good afternoon";
?>
