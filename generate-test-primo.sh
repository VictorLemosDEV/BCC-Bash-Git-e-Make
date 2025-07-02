#!/bin/bash

CASOS=${1:-10}
MAX=${2:-1000}

for i in $(seq 1 $CASOS); do
    NUM=$((RANDOM % MAX + 1))
    echo $NUM
done
