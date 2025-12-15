FROM ubuntu:24.04
WORKDIR /app
COPY ../src/* .
RUN apt update
RUN apt install -y gcc
RUN gcc mini.c -o mini
ENV MESSAGE="Good, Night!"
CMD  ["./mini"]