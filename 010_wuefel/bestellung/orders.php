<?php
// Array of food items (make sure this matches index.php for consistency)
$food_items = [
    ["number" => 1, "name" => "Riso Cantonese", "price" => 3.50],
    ["number" => 2, "name" => "Riso Biancho", "price" => 2.50],
    ["number" => 3, "name" => "Pollo Aggrodolce", "price" => 5.50],
    ["number" => 4, "name" => "Involtini", "price" => 2.00],
    ["number" => 3, "name" => "Extra Bus für feli", "price" => 1000.50],
];

// Read orders from orders.txt
$orders = file_get_contents("orders.txt");

// Calculate grand total and aggregate order summary
$grand_total = 0;
$item_totals = array_fill(0, count($food_items), ["quantity" => 0, "cost" => 0]);

$lines = explode("\n", trim($orders));
$current_order_total = 0;

foreach ($lines as $line) {
    // Check if the line contains a total
    if (strpos($line, 'Total: $') !== false) {
        // Add to grand total
        $current_order_total = floatval(substr($line, strpos($line, '$') + 1));
        $grand_total += $current_order_total;
    } else {
        // Check for ordered items and parse quantity and cost
        foreach ($food_items as $index => $item) {
            if (strpos($line, $item["name"]) !== false) {
                preg_match('/x (\d+)/', $line, $matches);
                $quantity = intval($matches[1]);
                $cost = $item["price"] * $quantity;

                // Add quantity and cost to total list for this item
                $item_totals[$index]["quantity"] += $quantity;
                $item_totals[$index]["cost"] += $cost;
            }
        }
    }
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>All Orders</title>
</head>
<body>
    <h1>All Orders</h1>
    <pre><?php echo htmlspecialchars($orders); ?></pre>
    
    <h2>Aggregate Order Summary</h2>
    <table border="1" cellpadding="5">
        <tr>
            <th>Item</th>
            <th>Total Quantity</th>
            <th>Total Cost</th>
        </tr>
        <?php foreach ($food_items as $index => $item): ?>
            <tr>
                <td><?php echo $item["name"]; ?></td>
                <td><?php echo $item_totals[$index]["quantity"]; ?></td>
                <td>$<?php echo number_format($item_totals[$index]["cost"], 2); ?></td>
            </tr>
        <?php endforeach; ?>
    </table>

    <p><strong>Grand Total for All Orders: $<?php echo number_format($grand_total, 2); ?></strong></p>
    <p><a href="reset.php">Reset Orders</a></p>
</body>
</html>
