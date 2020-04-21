#!/bin/bash
if [ $1 = "clone" ]
then
    git clone https://github.com/4jeR/lk-project.git lk-project
    rm -rf lk-project/.git
elif [ $1 = "run" ]
then
    if [[ -d "lk-project" ]]
    then
        cd lk-project
    fi

    echo "      "
    echo "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"
    echo "@ Budowanie środowiska dockerowego. @"
    echo "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"
    echo "      "

    docker build -t dlugoszbartlomiej:1.0 .

    echo "      "
    echo "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"
    echo "@ Budowanie środowiska dockerowego. OK @"
    echo "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"
    echo "      "

    echo "      "
    echo "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"
    echo "@       Włączanie środowiska.       @"
    echo "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"
    echo "      "

    docker run -it dlugoszbartlomiej:1.0

    echo "      "

    echo "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"
    echo "@       Włączanie środowiska.  OK   @"
    echo "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"
    echo "      "
elif [ $1 = "clean" ]
then
    if [[ ! -d "lk-project" ]]
    then
        cd ..
    fi    
    rm -rf lk-project
else
    echo "Podaj opcję: clone / run / clean"
fi