#!/bin/bash
wget https://github.com/ActuaryEmma/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libtest.so -P /tmp
LD_PRELOAD=/tmp/libtest.so
