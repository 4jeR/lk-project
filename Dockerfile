FROM ubuntu:20.04

RUN apt-get update -y
RUN apt-get install -y gcc nano 


COPY find_here /home/root/find_here/
COPY task1.c /home/root
COPY task2.c /home/root
COPY run_dlugosz_bartlomiej.sh /home/root

WORKDIR /home/root