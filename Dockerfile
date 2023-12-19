FROM ubuntu:latest

RUN apt-get update && apt-get install -y sudo file sed zsh strace ltrace nasm gdb gcc g++ && chsh -s /usr/bin/zsh
WORKDIR /app
