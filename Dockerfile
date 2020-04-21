FROM ubuntu:20.04

RUN apt-get update -y
RUN apt-get install -y gcc nano 
RUN echo "deb [arch=amd64] http://packages.microsoft.com/repos/vscode stable main" | sudo \
   tee /etc/apt/sources.list.d/vs-code.list

RUN curl https://packages.microsoft.com/keys/microsoft.asc | gpg --dearmor > microsoft.gpg
RUN mv microsoft.gpg /etc/apt/trusted.gpg.d/microsoft.gpg
RUN sudo apt-get update
RUN sudo apt-get install code


COPY README.md /home/root/
COPY skrypt.pdf /home/root


WORKDIR /home/root