# Language benchmark

Make sure you have `make` and `docker-compose` installed.

Most languages will use the newest availalbe docker image (which means, newest language version), with the exception of `.net`, because microsoft cannot create container tags for `alpine` that are generic enough....

Just type:

```sh
$ make run
```

![example](./example.png)