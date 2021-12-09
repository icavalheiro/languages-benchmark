FROM ubuntu

RUN apt update && apt install -y wget unzip time libxcursor-dev libxinerama-dev libxrandr-dev libxi-dev libgl-dev

WORKDIR /var/app

RUN wget https://downloads.tuxfamily.org/godotengine/3.4/Godot_v3.4-stable_x11.64.zip

RUN unzip ./Godot_v3.4-stable_x11.64.zip -d .

RUN rm ./Godot_v3.4-stable_x11.64.zip

RUN mv ./Godot_v3.4-stable_x11.64 ./godot

RUN chmod +x ./godot

COPY ./main.gd main.gd

## not working yet cus current version still depends on x11
CMD time ./godot --no-window -s ./main.gd 800000