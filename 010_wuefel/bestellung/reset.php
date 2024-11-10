<?php
// Reset orders
file_put_contents("orders.txt", "");
header("Location: orders.php");
exit;
?>
