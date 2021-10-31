# Language benchmark

This is pretty much to keep track on languages progress when it comes to performance. It's just a small test, with almost no real world scenario. But again, it is just to give us some idea and reference between those languages being tested.

### Result from 31/oct/2021

#### Machine specs

```
Pop_OS! 20.04 LTS
Docker version 20.10.7, build 20.10.7-0ubuntu1~21.04.2
16 Gb RAM, DDR 4, Dual Channel, 2400Mhz
nVidia GeForce GTX 1070 8GB GDDR5
AMD Ryzen 7 1700 3.1GHz
250GB SSD
```

#### Result

| #  | Language    | Time  |
|----|-------------|-------|
| 1  | C++         | 0.07s |
| 2  | C#          | 0.10s |
| 3  | C           | 0.11s |
| 4  | GO          | 0.19s |
| 5  | JavaScript  | 0.21s |
| 6  | PHP         | 0.27s |
| 7  | Java        | 0.34s |
| 8  | Ruby        | 0.36s |
| 9  | Lua         | 0.42s |
| 10 | Dart        | 0.56s |
| 11 | Python      | 1.09s |


###### The strange C case

Yeah, C is not doing well, it should be on par with c++, BUT, since C lacks some features the sorting algorithm can't be as efficient as C++'s, that's why it performs even worse than C#.


# Running yourself

Make sure you have `make` and `docker-compose` installed.

Most languages will use the newest availalbe docker image (which means, newest language version), with the exception of `.net` and `java`, since the oficial maintaners don't supply a generic, non-version-specific alpine-based docker image.

Just type:

```sh
$ make result
```

![example](./example.png)