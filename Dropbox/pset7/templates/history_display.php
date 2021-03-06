
    <style>

    .history { width: 800px; margin: auto; border: 3px solid black; }
    tr.heading { font-weight: bold; text-align: center; }
    td { padding-left: 40px; padding-right: 40px; }

    </style> 
    
<div class="history">
    <table >
        <tr class="heading">
            <td>Transaction</td>
            <td>Date/Time</td>
            <td>Symbol</td>
            <td>Shares</td>
            <td>Price</td>
        </tr>      
             
        <?php 
        
        // display transaction history
        $history_data = query("SELECT * FROM history WHERE id = ?", $_SESSION["id"]);
        
        foreach ($history_data as $row): ?>
        
            <tr>
                <td><?= $row["transaction"] ?></td>
                <td><?= date('m/d/y, g:i a', strtotime($row["datetime"])) ?></td>
                <td><?= $row["symbol"] ?></td>
                <td><?= $row["shares"] ?></td>
                <td><?= $row["price"] ?>
            </tr>

        <?php endforeach ?>
        
    </table>
</div>

<br/>

<div>
    Return to <a href="/">main</a>
</div>

