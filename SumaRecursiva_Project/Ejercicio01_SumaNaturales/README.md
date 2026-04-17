# Ejercicio 1: Suma de los primeros N números naturales

## Descripción
Este programa calcula la suma acumulada de todos los números enteros desde 1 hasta un número `N` proporcionado por el usuario, utilizando un enfoque **recursivo**.

## ¿Cómo funciona la recursividad aquí?
La lógica se basa en que la suma de `N` es igual a `N + Suma(N - 1)`.
- **Caso Base:** Cuando `N` llega a 1, la función deja de llamarse a sí misma y devuelve 1.
- **Caso Recursivo:** Mientras `N > 1`, la función se llama a sí misma reduciendo el valor de `N` en cada paso.

## Método de Ejecución
1. Asegúrate de tener instalado el SDK de .NET.
2. Abre una terminal en esta carpeta.
3. Ejecuta el comando:
   ```bash
   dotnet run