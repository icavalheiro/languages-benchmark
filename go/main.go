package main
import (
    "strconv"
    "os"
    "math/rand"
    "sort"
)

func main() {
    n, err := strconv.Atoi(os.Args[1])
    if(err != nil){
        os.Exit(1)
    }

    var array[] int
    for i := 0; i < n; i++ {
        array = append(array, rand.Intn(n))
    }

    sort.Ints(array)
}