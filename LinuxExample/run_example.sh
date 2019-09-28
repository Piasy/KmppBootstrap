#!/bin/zsh

gcc -I../libs/Linux -L../libs/Linux -o LinuxExample LinuxExample.c -lkmpp && \
export LD_LIBRARY_PATH=`pwd`/../libs/Linux:$LD_LIBRARY_PATH && \
./LinuxExample
