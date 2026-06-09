#!/bin/bash

find logs -name "*.log" -type f
grep -r "ERROR" logs > errores.txt
grep -rl "ERROR" logs > errores_procesados.log
