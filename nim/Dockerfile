FROM nimlang/nim:alpine

WORKDIR /srv/app

COPY ./main.nim .

RUN nim c -d:release main.nim

CMD time ./main 800000