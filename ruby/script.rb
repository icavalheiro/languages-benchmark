input = ARGV

n = input[0].to_i
array = []

n.times.map {
    array.push(Random.rand(n))
}

array.sort!