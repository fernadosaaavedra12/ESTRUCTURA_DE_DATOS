db = db.getSiblingDB('examen_db');

db.registros_finales.insertMany([
  { id: 1, tema: "Listas Enlazadas", dificultad: "Media" },
  { id: 2, tema: "Pilas", dificultad: "Baja" },
  { id: 3, tema: "Colas", dificultad: "Baja" },
  { id: 4, tema: "Árboles Binarios", dificultad: "Alta" },
  { id: 5, tema: "Grafos", dificultad: "Alta" },
  { id: 6, tema: "Tablas Hash", dificultad: "Media" },
  { id: 7, tema: "Heaps", dificultad: "Alta" },
  { id: 8, tema: "Recursividad", dificultad: "Media" },
  { id: 9, tema: "Ordenamiento", dificultad: "Baja" },
  { id: 10, tema: "Búsqueda", dificultad: "Baja" }
]);