let n = parseInt( process.argv[ 2 ] );

let array = new Array( n );

for ( let i = 1; i < n; i++ ) {
    array[ i ] = Math.random() * n;
}

array.sort();