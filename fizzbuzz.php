<?php
$x = 100;
while ($x--) {
    $o = '';
    if ($x%5 == 0) $o += 'Fizz';
    if ($x%3 == 0) $o += 'Buzz';
    echo ($o)? $o : $x;
}