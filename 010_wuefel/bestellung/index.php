<?php
// Updated array of food items
$food_items = [
    ["number" => 1, "name" => "Riso Cantonese", "price" => 3.50],
    ["number" => 2, "name" => "Riso Biancho", "price" => 2.50],
    ["number" => 3, "name" => "Pollo Aggrodolce", "price" => 5.50],
    ["number" => 4, "name" => "Involtini", "price" => 2.00],
    ["number" => 5, "name" => "Extra Bus für feli", "price" => 1000.50]
];

// Save order to a file
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $name = $_POST["name"];
    $orders = $_POST["orders"];

    $order_summary = "Name: $name\n";
    $total = 0;
    foreach ($orders as $item => $quantity) {
        if ($quantity > 0) {
            $price = $food_items[$item]["price"];
            $cost = $price * $quantity;
            $total += $cost;
            $order_summary .= $food_items[$item]["name"] . " x $quantity - $" . number_format($cost, 2) . "\n";
        }
    }
    $order_summary .= "Total: $" . number_format($total, 2) . "\n\n";

    // Append order to orders.txt
    file_put_contents("orders.txt", $order_summary, FILE_APPEND);
    echo "<p class='success'>Order submitted successfully!</p>";
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Order Chinese Food</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            background-color: #f7f7f7;
            color: #333;
            display: flex;
            justify-content: center;
            align-items: center;
            height: 100vh;
            margin: 0;
        }
        .container {
            width: 400px;
            background-color: #fff;
            padding: 20px;
            border-radius: 8px;
            box-shadow: 0 4px 8px rgba(0, 0, 0, 0.1);
            text-align: center;
        }
        h1 {
            color: #e74c3c;
        }
        .menu-item {
            display: flex;
            justify-content: space-between;
            padding: 10px 0;
            border-bottom: 1px solid #ddd;
        }
        .menu-item:last-child {
            border-bottom: none;
        }
        label {
            font-weight: bold;
            display: block;
            margin-top: 20px;
            color: #555;
        }
        input[type="text"] {
            width: 100%;
            padding: 10px;
            margin: 10px 0;
            border: 1px solid #ddd;
            border-radius: 4px;
        }
        input[type="number"] {
            width: 60px;
            padding: 5px;
            border: 1px solid #ddd;
            border-radius: 4px;
        }
        .button {
            background-color: #e74c3c;
            color: #fff;
            padding: 10px 20px;
            border: none;
            border-radius: 4px;
            cursor: pointer;
            font-size: 16px;
            margin-top: 20px;
        }
        .button:hover {
            background-color: #c0392b;
        }
        .success {
            color: #27ae60;
            font-weight: bold;
            margin-top: 15px;
        }
        .view-orders {
            display: block;
            margin-top: 20px;
            color: #3498db;
            text-decoration: none;
        }
        .view-orders:hover {
            text-decoration: underline;
        }
    </style>
</head>
<body>
    <div class="container">
        <h1>Order Chinese Food</h1>
        <form action="index.php" method="POST">
            <label for="name">Your Name:</label>
            <input type="text" id="name" name="name" required>
            
            <h2>Menu</h2>
            <?php foreach ($food_items as $index => $item): ?>
                <div class="menu-item">
                    <span><?php echo "{$item['number']}. {$item['name']}"; ?></span>
                    <span>$<?php echo number_format($item['price'], 2); ?></span>
                    <input type="number" name="orders[<?php echo $index; ?>]" value="0" min="0">
                </div>
            <?php endforeach; ?>
            
            <button type="submit" class="button">Place Order</button>
        </form>
        <a href="orders.php" class="view-orders">View All Orders</a>
    </div>
</body>
</html>
