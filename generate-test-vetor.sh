#!/bin/bash

CASOS=${1:-5}
TAMANHO=${2:-10}
MAX=${3:-100}

for i in $(seq 1 $CASOS); do
    echo "$TAMANHO"
    for j in $(seq 1 $TAMANHO); do
        echo -n "$((RANDOM % MAX + 1)) "
    done
    echo
done
