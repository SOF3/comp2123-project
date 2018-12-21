#!/bin/bash
while read cmd
do
	[ "$cmd" == "run.sh" ] || ./"$cmd" > "$cmd".stdout.log 2> "$cmd".stderr.log
done
