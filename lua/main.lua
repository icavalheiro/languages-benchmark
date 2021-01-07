local n = arg[1]
local array = {}

math.randomseed(os.time())

for i = 1, n do
    array[i] = math.random(0, n)
end

table.sort(array)


