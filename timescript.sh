#!/bin/bash

while true
do
starttime=$(date +%s%N)
./Generated 77031
endtime=$(date +%s%N)
echo $((endtime - starttime))
done
