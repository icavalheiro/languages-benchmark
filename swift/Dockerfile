FROM swift as BUILD

WORKDIR /srv/app

COPY . .

RUN swift build -c release

FROM swift

RUN apt-get update && apt-get install -y time

WORKDIR /srv/app

COPY --from=BUILD /srv/app/.build/x86_64-unknown-linux-gnu/release/* ./

CMD time ./main 800000