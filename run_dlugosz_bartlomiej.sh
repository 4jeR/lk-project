#!/bin/bash
if [ $1 = "clone" ]; then
    git clone https://github.com/4jeR/lk-project.git lk-project
    rm -rf lk-project/.git
elif [ $1 = "run" ]; then
    if [[ -d "lk-project" ]]
    echo "[run]"
    then
        cd lk-project
    fi
    
elif [ $1 = "clean" ]; then
    rm -rf lk-project
    rm -rf find_here
else
    echo "Podaj opcję: clone / run / clean"
fi