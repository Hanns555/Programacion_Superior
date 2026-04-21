#!/bin/bash
echo "IMT-131" > Práctica\ 1/Materias/1-2026
echo "IMT-221" >> Práctica\ 1/Materias/1-2026
echo "IMT-123" >> Práctica\ 1/Materias/1-2026
echo "IND-260" >> Práctica\ 1/Materias/1-2026
echo "INB-212" >> Práctica\ 1/Materias/1-2026
echo "INB-234" >> Práctica\ 1/Materias/1-2026
cp Práctica\ 1/Materias/1-2026 Práctica\ 1/Semestre\ Actual/Materias\ Actuales
cat >> Práctica\ 1/Semestre\ Actual/Materias\ Actuales << EOF
Horarios:
IMT-131: Lunes 8:00
IMT-221: Martes 10:00
EOF
cat Práctica\ 1/Semestre\ Actual/Materias\ Actuales