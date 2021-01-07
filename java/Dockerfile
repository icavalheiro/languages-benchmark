FROM openjdk:16-alpine

WORKDIR /srv/app

COPY ./Program.java /srv/app/Program.java

RUN javac Program.java

CMD time java Program 800000