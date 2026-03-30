/*
** EPITECH PROJECT, 2025
** G-OOP-400-NCE-4-1-arcade-4
** File description:
** Drawable.hpp
*/

#ifndef DRAWABLE_HPP_
    #define DRAWABLE_HPP_

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

#endif // DRAWABLE_HPP_
