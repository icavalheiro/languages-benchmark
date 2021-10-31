package main

import (
	"math/rand"
	"os"
	"sort"
	"strconv"
)

func main() {
	n, err := strconv.Atoi(os.Args[1])
	if err != nil {
		os.Exit(1)
	}

	array := make([]int, n)
	for i := 0; i < n; i++ {
		array = append(array, rand.Intn(n))
	}

	sort.Ints(array)
}
