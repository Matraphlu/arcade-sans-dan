/*
** EPITECH PROJECT, 2025
** G-OOP-400-NCE-4-1-arcade-4
** File description:
** Drawable.hpp
*/

#ifndef Drawable_HPP
    #define Drawable_HPP

#include <string>

enum class TileType {
    Empty,
    Wall,

    Player,
    Enemy,

    Collectible,
    Obstacle,
    Projectile,

    Text
};

struct Drawable {
    TileType type;
    int x;
    int y;
    std::string text;
};

#endif /* Drawable_HPP */
