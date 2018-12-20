#!/bin/bash
echo "Процессов пользователя"
whoami
ps aux | grep "$USER"
echo "Процессов пользователя root"
ps aux | grep "root"


