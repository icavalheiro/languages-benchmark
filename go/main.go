package main

import (
	"math/rand"
	"os"
	"sort"
	"strconv"
)

func main() {
	n, _ := strconv.Atoi(os.Args[1])

	array := make([]int, n)
	for i := 0; i < n; i++ {
		array[i] = rand.Intn(n)
	}

	sort.Ints(array)
}
