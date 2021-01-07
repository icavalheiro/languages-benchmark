run:
	make build
	make up
	
up:
	docker-compose up

result:
	make up | grep real

build:
	docker-compose build