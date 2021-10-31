FROM openjdk:18-alpine

WORKDIR /srv/app

COPY ./Program.java /srv/app/Program.java

RUN javac Program.java

CMD time java Program 800000