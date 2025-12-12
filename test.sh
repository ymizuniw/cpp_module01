#!/bin/bash

printf '\n=====%s=====\n' "ex00"
cd ex00/ && make && ./test00
if [ $? != 0 ]; then
    echo "fail"
    exit 1
else
    echo "success"
fi
printf '\n=====%s=====\n' "ex01"
cd ../ex01 && make && ./test01
if [ $? != 0 ]; then
    echo "fail"
    exit 1
else
    echo "success"
fi
printf '\n=====%s=====\n' "ex02"
cd ../ex02 && make && ./test02
if [ $? != 0 ]; then
    echo "fail"
    exit 1
else
    echo "success"
fi
printf '\n=====%s=====\n' "ex03"
cd ../ex03 && make && ./test03
if [ $? != 0 ]; then
    echo "fail"
    exit 1
else
    echo "success"
fi
printf '\n=====%s=====\n' "ex04"
cd ../ex04 && make && ./test04.sh
if [ $? != 0 ]; then
    echo "fail"
    exit 1
else
    echo "success"
fi
printf '\n=====%s=====\n' "ex05"
cd ../ex05 && make && ./test05 <<< INFO
if [ $? != 0 ]; then
    echo "fail"
    exit 1
else
    echo "success"
fi
printf '\n=====%s=====\n' "ex06"
cd ../ex06 && make && ./test06 WARNING
if [ $? != 0 ]; then
    echo "fail"
    exit 1
else
    echo "success"
fi
echo "=================ALL TESTS CLEARED!================="