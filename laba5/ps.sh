#!/bin/bash
ps -eo -euser,ruser,comm | awk '{if ($1 != $2) print $3}' 
