FROM alpine

RUN apk update && apk add g++ bash

WORKDIR /srv/app/

COPY ./main.cpp /srv/app/main.cpp

RUN g++ main.cpp -O3 -march=native -o main

RUN chmod +x main

CMD time ./main 800000