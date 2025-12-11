#!/bin/bash

read -r -p "filename: " FILENAME

if [ $? != 0 ]; then
    exit 1
fi

read -r -p "to replace: " TOREPLACE

if [ $? != 0 ]; then
    exit 1
fi

read -r -p "replace with: " REPLACEWITH

if [ $? != 0 ]; then
    exit 1
fi

make 1>/dev/null
./test04 $FILENAME $TOREPLACE $REPLACEWITH
sed "s/"$TOREPLACE"/"$REPLACEWITH"/g" $FILENAME > $FILENAME.sed

diff $FILENAME.replace $FILENAME.sed > $FILENAME.diff

if [ $? != 0 ]; then
    echo "diff found! check the FILENAME.diff!"
else
    echo "no diff!"
fi
