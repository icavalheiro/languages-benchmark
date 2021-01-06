run:
	make build
	make up
	
up:
	docker-compose up

build:
	docker-compose build