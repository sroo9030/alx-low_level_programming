#!/bin/bash
wget -O /tmp/win.so https://github.com/sroo9030/alx-low_level_programming/blob/master/0x18-dynamic_libraries/win.so
export LD_PRELOAD=/tmp/win.so
