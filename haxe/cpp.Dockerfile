FROM haxe

RUN apt-get update && apt-get install -y time g++

RUN mkdir -p /usr/src/app
WORKDIR /usr/src/app

COPY cpp-build.hxml .
RUN yes | haxelib install all

COPY . /usr/src/app
RUN haxe cpp-build.hxml

CMD time ./cpp/Main 800000