<? php
$sname = "localhost";
$unmae = "Nautoptegs";
$password = "HYHMVX9Sp5F2syqn";
$db_name = "Nautoptegs";
$conn = mysqli_connect($sname, $unmae, $password, $db_name);
if (!$conn) {
	echo "Connection failed!";
}
$conrun = mysqli_connect($sname, $unmae, $password, $db_name);

if (!$conrun) {
	echo "Connection failed!";
}
?>