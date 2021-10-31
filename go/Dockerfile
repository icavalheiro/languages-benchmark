FROM golang:alpine

WORKDIR /usr/local/go/src/main

COPY ./main.go .

RUN go build

RUN chmod +x main

CMD time ./main 800000