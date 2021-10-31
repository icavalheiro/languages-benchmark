import 'dart:math';

main(List<String> arguments) {
  var n = int.parse(arguments[0]);
  
  var array = List<int>.filled(n, 0);

  var rng = new Random();
  for ( var i = 0; i < n; i++ ) {
    array[ i ] = rng.nextInt(n);
  }

  array.sort();
}