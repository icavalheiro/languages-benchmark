# Language benchmark

This is pretty much to keep track on languages progress when it comes to performance. It's just a small test, with almost no real world scenario. But again, it is just to give us some idea and reference between those languages being tested.


# Running yourself

Make sure you have `make` and `docker-compose` installed.

Most languages will use the newest availalbe docker image (which means, newest language version), with the exception of `.net` and `java`, since the oficial maintaners don't supply a generic, non-version-specific alpine-based docker image.

Just type:

```sh
$ make result
```

![example](./example.png)