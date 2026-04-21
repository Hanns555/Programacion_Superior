#!/bin/bash
# Crea un script que pida el nombre de una carpeta y dentro cree automáticamente esta estructura:
# carpeta/
# ├── docs/
# ├── imagenes/
# └── backup/
# Luego muestre el árbol completo.
read -p "Ingrese el nombre de una carpeta: " nombre_carpeta
mkdir -p $nombre_carpeta/{docs,imagenes,backup}
echo "La carpeta tiene esta estructura: "
tree $nombre_carpeta