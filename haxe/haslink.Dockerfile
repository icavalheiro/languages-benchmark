FROM haxe

RUN apt-get update && apt-get install -y apt-utils unzip git g++ gcc time make \
    libpng-dev libturbojpeg-dev libvorbis-dev libopenal-dev libsdl2-dev \
    libmbedtls-dev libuv1-dev

WORKDIR /usr/tmp

RUN git clone https://github.com/HaxeFoundation/hashlink.git

WORKDIR /usr/tmp/hashlink

RUN make
RUN make install
RUN ldconfig

RUN mkdir -p /usr/src/app
WORKDIR /usr/src/app

COPY haslink-build.hxml .
RUN yes | haxelib install all

COPY . /usr/src/app
RUN haxe haslink-build.hxml

CMD time hl Main.hl 800000