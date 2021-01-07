FROM alpine

#RUN apk update && apk add lua
RUN apk update && apk add luajit

WORKDIR /srv/app

COPY ./main.lua /srv/app/main.lua

#CMD time lua main.lua 800000
CMD time luajit main.lua 800000