#pragma once
// Константы для определения функций
const int COUNT_FUNCTIONS = 14; // Число функций [0, 13]
const int MIN_COUNT_NUMBERS_AT_FUNCTIONS = 1; // Минимальное число параметров в функции

// Константы для генерации уровней
const int MIN_COUNT_LEVELS = 2; // Миниманльное число уровней
const int MAX_COUNT_LEVELS = 10; // Максимальное число уровней

// Константы для генерации уровня
const int MIN_COUNT_NUMBERS_ANY_LEVEL = 1; // Минимальное число переменных на уровне
const int MAX_COUNT_NUMBERS_FIRST_LEVEL = 10; // Максимальное число переменных на уровне 1
const int MAX_COUNT_NUMBERS_INTERMEDIATE_LEVEL = 6; // ...
const int MAX_COUNT_NUMBERS_PENULTIMATE_LEVEL = 4; // ...
const int MAX_COUNT_NUMBERS_LAST_LEVEL = 2; // ...

// Константы для генерации чисел
const int MIN_NUMBER_SYSTEM = 2; // Минимальное основание числа
const int MAX_NUMBER_SYSTEM = 10; // Максимальное основание числа
const int MAX_BIT_DEPTH_NUMBER = 4; // Разрядность числа
const int MAX_NUMBER_IN_DECIMAL_SYSTEM = 15; // 2^4, [0, 15]
