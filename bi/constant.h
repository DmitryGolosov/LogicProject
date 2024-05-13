#pragma once
// Константы для генерации уровней
const int MIN_COUNT_LEVELS = 5; // Миниманльное число уровней
const int MAX_COUNT_LEVELS = 5; // Максимальное число уровней

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