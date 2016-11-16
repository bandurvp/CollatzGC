#!/bin/bash

startnum=77031
currnum=$startnum
maxnum=$((startnum + 0))

while ((currnum <= maxnum))
do
	echo "Up to $maxnum:"
	valgrind --tool=massif --time-unit=ms --max-snapshots=1000 --massif-out-file=massif.out ./Generated $currnum > /dev/null && ms_print massif.out | head -30

	currnum=$((currnum + 1))
done
