FROM google/dart AS BUILD

RUN apt-get update && apt-get install -y time

RUN dart --disable-analytics

WORKDIR /srv2/app

COPY ./main.dart .

# RUN dart compile exe main.dart
#RUN echo "#!/usr/bin/bash \ntime ./main.exe 800000" > run.sh

RUN echo "#!/usr/bin/bash \ntime dart main.dart 800000" > run.sh
RUN chmod +x ./run.sh
CMD ./run.sh