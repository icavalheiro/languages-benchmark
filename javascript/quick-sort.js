//extracted from:
//https://stackoverflow.com/questions/38732480/native-javascript-sort-performing-slower-than-implemented-mergesort-and-quicksor/38733191

function quickSort ( arr, leftPos, rightPos, arrLength ) {
    let initialLeftPos = leftPos;
    let initialRightPos = rightPos;
    let direction = true;
    let pivot = rightPos;
    while ( ( leftPos - rightPos ) < 0 ) {
        if ( direction ) {
            if ( arr[ pivot ] < arr[ leftPos ] ) {
                quickSort.swap( arr, pivot, leftPos );
                pivot = leftPos;
                rightPos--;
                direction = !direction;
            } else
                leftPos++;
        } else {
            if ( arr[ pivot ] <= arr[ rightPos ] ) {
                rightPos--;
            } else {
                quickSort.swap( arr, pivot, rightPos );
                leftPos++;
                pivot = rightPos;
                direction = !direction;
            }
        }
    }
    if ( pivot - 1 > initialLeftPos ) {
        quickSort( arr, initialLeftPos, pivot - 1, arrLength );
    }
    if ( pivot + 1 < initialRightPos ) {
        quickSort( arr, pivot + 1, initialRightPos, arrLength );
    }
}
quickSort.swap = ( arr, el1, el2 ) => {
    let swapedElem = arr[ el1 ];
    arr[ el1 ] = arr[ el2 ];
    arr[ el2 ] = swapedElem;
};

module.exports = function ( array ) {
    let length = array.length;
    quickSort( array, 0, length - 1, length );
};