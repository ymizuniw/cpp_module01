#!/bin/bash

cd ex00/ && make && ./test01
cd ../ex01 && make && ./test02
cd ../ex02 && make && ./test03
cd ../ex03 && make && ./test03
cd ../ex04 && make && ./test04
cd ../ex05 && make && ./test05 <<< INFO
cd ../ex06 && make && ./test06 WARNING
