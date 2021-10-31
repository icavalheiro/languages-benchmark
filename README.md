# Language benchmark

This is pretty much to keep track on languages progress when it comes to performance. It's just a small test, with almost no real world scenario. But again, it is just to give us some idea and reference between those languages being tested.

### Result from 31/oct/2021

#### Machine specs

```
Pop_OS! 21.04 LTS
Docker version 20.10.7, build 20.10.7-0ubuntu1~21.04.2
16 Gb RAM, DDR 4, Dual Channel, 2400Mhz
nVidia GeForce GTX 1070 8GB GDDR5
AMD Ryzen 7 1700 3.1GHz
250GB SSD
```

#### Result

| #  | Language      | Time  |
|----|---------------|-------|
| 1  | C++           | 0.07s |
| 2  | Haxe (C++)    | 0.09s |
| 3  | C#            | 0.10s |
| 4  | C             | 0.11s |
| 5  | GO            | 0.19s |
| 6  | JavaScript    | 0.21s |
| 7  | PHP           | 0.27s |
| 8  | Haxe (HL/JIT) | 0.30s |
| 9  | Java          | 0.34s |
| 10 | Ruby          | 0.36s |
| 11 | Lua           | 0.42s |
| 12 | Dart          | 0.56s |
| 13 | Python        | 1.09s |


###### The strange C case

Yeah, C is not doing well, it should be on par with c++, BUT, since C lacks some features the sorting algorithm can't be as efficient as C++'s, that's why it performs even worse than C#.


# Running yourself

Make sure you have `make` and `docker-compose` installed.

Most languages will use the newest availalbe docker image (which means, newest language version), with the exception of `.net`, `haxe` and `java`, since the oficial maintaners don't supply a generic, non-version-specific alpine-based docker image or in the case of `haxe`, it's just messy.

Just type:

```sh
$ make result
```

![example](./example.png)