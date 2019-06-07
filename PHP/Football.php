<?php

$servername = "localhost";
$username = "root";
$password = "Creedforce!@3";


$conn = new mysqli($servername, $username, $password);
mysqli_select_db($conn,'football');

$query="SELECT * from matches";
$result=mysqli_query($conn,$query);
?>
<!DOCTRYPE html>
<head>
<title>Website </title>
<link rel="stylesheet" href="Menu.css">
</head>
<body>
  <div class="MainMenu">
    <a class="active" href="Home.html">Home</a>
    <a href="Sports.html">Sports</a>
    <a href="Cassino.html">Cassino</a>
    <a href="Electronic.html">Electronic Sports</a>
    <a href="Live.html">Live Games</a>
    <a href="News.html">News</a>
  </div>
  <table align="center" border="1px">
    <tr>
      <th align=  colspan="4" >Matches</th>
    </tr>
    <tr>
      <th> MatchNumber </th>
      <th>Home</th>
      <th>Guest</th>
      <th>league</th>
      <th>teamone</th>
      <th>x</th>
      <th>teamtwo</th>
      <th>date</th>
      <th>time</th>
    </tr>
    <?php
    while ($rows=mysqli_fetch_assoc($result)) {
    ?>
  <tr>
    <td><?php print_r ( $rows['id']); ?> </td>
    <td><?php print_r ( $rows['home']); ?> </td>
    <td><?php print_r ( $rows['guests']); ?> </td>
    <td><?php print_r ( $rows['league']); ?> </td>
    <td><?php print_r ( $rows['teamone']); ?> </td>
    <td><?php print_r ( $rows['x']); ?> </td>
    <td><?php print_r ( $rows['teamtwo']); ?> </td>
    <td><?php print_r ( $rows['date']); ?> </td>
    <td><?php print_r ( $rows['time']); ?> </td>
</tr>
 <?php } ?>
  </table>
</body>
</html>
