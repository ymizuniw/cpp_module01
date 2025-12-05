#!/bin/bash

make

read -p "Zombie num : " N_ZOMB
if [ $? != 0 ]; then
    exit 1
fi

read -p "Zombie name: " NAME_ZOMB
if [ $? != 0 ]; then
    exit 1
fi

./test << EOF
$N_ZOMB
$NAME_ZOMB
EOF
