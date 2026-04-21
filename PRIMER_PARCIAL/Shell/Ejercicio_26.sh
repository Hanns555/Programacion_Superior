#!/bin/bash
echo "Buscar Palabra error"
echo "[INFO] Sistema iniciado correctamente" > sistema.log
echo "[INFO] Conectado con la base de datos" >> sistema.log
echo "[WARNING] Uso de memoria alto" >> sistema.log
echo "[INFO] Usuario admin inició sesión" >> sistema.log
echo "[ERROR] No se pudo conectar al servidor" >> sistema.log
echo "[INFO] Servicio reiniciado" >> sistema.log
echo "[ERROR] Archivo de configuración no encontrado" >> sistema.log
echo "[INFO] Operacion completada" >> sistema.log
grep -i "error" sistema.log