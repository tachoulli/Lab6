# Laboratorio 6 - Ordenamiento de estructuras en C

## Descripción

Este laboratorio implementa un programa en lenguaje C que utiliza una estructura (`struct`) para almacenar información de personas.

Cada persona contiene:

- Nombre
- Edad
- Altura

El programa muestra la lista original y posteriormente la ordena utilizando la función `qsort()` de la biblioteca estándar de C.

Los criterios de ordenamiento son:

1. Nombre
2. Edad
3. Altura

---

## Archivos

- `main.c` : Código fuente.
- `Makefile` : Automatiza la compilación y ejecución.
- `README.md` : Descripción del proyecto.
- `reporte_lab6.md` : Reporte del laboratorio.

---

## Compilación

```bash
make
```

---

## Ejecutar

```bash
./main
```

---

## Verificar memoria

```bash
make valgrind
```

---

## Limpiar archivos compilados

```bash
make clean
```

---

## Compilación manual

```bash
gcc -Wall -Wextra -std=c11 main.c -o main
```

