CREATE TABLE estudiantes (
    id SERIAL PRIMARY KEY,
    nombre VARCHAR(100),
    codigo_materia INT
);

CREATE TABLE materias (
    id SERIAL PRIMARY KEY,
    nombre VARCHAR(100),
    creditos INT
);

INSERT INTO materias (nombre, creditos) VALUES ('Estructura de Datos II', 5), ('Base de Datos', 4);