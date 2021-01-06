<?

$n = $argv[1];
$array = array_fill(0, $n, null);

for($i = 0; $i < $n; $i ++)
{
    $array[$i] = mt_rand ( 0, $n - 1);
}

sort($array);