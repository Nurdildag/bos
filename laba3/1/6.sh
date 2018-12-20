#!/bin/bash
echo "Домашний каталог пользователя"
whoami
echo "Содержит обычных файлов" 
ls -l ~/ | grep "^-" |wc -l
echo "Скрытых файлов"
ls -la ~/ | grep "^-" | awk '{print $9}'|grep "^\."| wc -l 
