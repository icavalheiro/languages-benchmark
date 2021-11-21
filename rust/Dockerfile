FROM rust:alpine

WORKDIR /var/app
COPY . .
RUN cargo install --path .

CMD time main 800000