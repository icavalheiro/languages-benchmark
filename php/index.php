<?

$n = $argv[1];
$array = Array();

for($i = 0; $i < $n; $i ++)
{
    $array[$i] = mt_rand ( 0, $n - 1);
}

sort($array);