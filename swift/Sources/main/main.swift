let n = Int(CommandLine.arguments[1])!

var array = [Int]()

for _ in 0...n {
    array.append(Int.random(in: 0...n))
}

array.sort()
