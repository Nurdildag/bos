#!/bin/bash
echo "Каталоги"
ls -la ~ | grep '^d'
echo "Обычные файлы"
ls -la ~ | grep '^-' 
echo "Символьные ссылки"
ls -la ~ | grep '^l'
echo "Символьные устройста"
ls -la ~ | grep '^c'
echo "Блочные  устройста"
ls -la ~ | grep '^b'

