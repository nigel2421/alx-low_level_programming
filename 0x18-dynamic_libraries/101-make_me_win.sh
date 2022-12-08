#!/bin/bash
wget -p /tmp https://github.com/nigel2421/alx-low_level_programming/raw/master/0x18-dynamic_libraries/putshack.so
>>>>>>> 0394d93fc8cbf2069dd383b66814cd8b3ec76966
export LD_PRELOAD=/tmp/putshack.so
