FROM alpine

RUN apk update && apk add g++

WORKDIR /srv/app/

COPY ./main.c /srv/app/main.c

RUN g++ main.c -O3 -march=native -o main

RUN chmod +x main

CMD time ./main 800000