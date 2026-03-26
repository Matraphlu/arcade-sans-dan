/*
** EPITECH PROJECT, 2025
** G-OOP-400-NCE-4-1-arcade-4
** File description:
** Drawable.hpp
*/

#pragma once
#include <string>

enum class TileType {
    Empty,
    Wall,
    SnakeHead,
    SnakeBody,
    Food,
    Text
};

struct Drawable {
    TileType type;
    int x;
    int y;
    std::string text;
};
