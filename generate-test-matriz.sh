#!/bin/bash

TAMANHO=${1:-3}
MAX=${2:-10}

OPERACOES=('a' 's' 'm')

if [ -z "$3" ]; then
    OPERACAO=${OPERACOES[$((RANDOM % 3))]}
else
    OPERACAO=$3
fi

echo "$TAMANHO"
for i in $(seq 1 $TAMANHO); do
    for j in $(seq 1 $TAMANHO); do
        echo -n "$((RANDOM % MAX + 1)) "
    done
    echo
done

for i in $(seq 1 $TAMANHO); do
    for j in $(seq 1 $TAMANHO); do
        echo -n "$((RANDOM % MAX + 1)) "
    done
    echo
done

echo "$OPERACAO"
