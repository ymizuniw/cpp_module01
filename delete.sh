#!/bin/bash

# find */ -name "*.o" -o -name "test*" | xargs rm -f
cd ex00/ && make fclean && ./test01
cd ../ex01 && make fclean
cd ../ex02 && make fclean
cd ../ex03 && make fclean
cd ../ex04 && make fclean
cd ../ex05 && make fclean
cd ../ex06 && make fclean