#!/bin/bash
echo "Каталоги"
ls -la "$1" | grep '^d'
echo "Обычные файлы"
ls -la "$1" | grep '^-'
echo "Символьные ссылки"
ls -la "$1" | grep '^l'
echo "Символьные устройста"
ls -la "$1" | grep '^c'
echo "Блочные  устройста"
ls -la "$1" | grep '^b'


