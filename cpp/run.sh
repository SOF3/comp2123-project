#!/bin/bash
while read cmd
do
	([ "$cmd" == "run.sh" ] || ./"$cmd" > "$cmd".log 2>&1) || true
done
