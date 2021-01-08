FROM golang:alpine

WORKDIR /go/src/main

COPY ./main.go /go/src/main/main.go

RUN go build main

RUN chmod +x main

CMD time ./main 800000