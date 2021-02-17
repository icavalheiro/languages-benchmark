const sort = require( './quick-sort' );

let n = parseInt( process.argv[ 2 ] );

let array = new Array( n );

for ( let i = 0; i < n; i++ ) {
    array[ i ] = Math.random() * n;
}

sort( array );
