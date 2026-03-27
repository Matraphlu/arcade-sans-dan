/*
** EPITECH PROJECT, 2025
** Drawable.hpp
*/

#ifndef DRAWABLE_HPP_
    #define DRAWABLE_HPP_

#include <string>
#include <unordered_map>

enum class DrawableType {
    Rectangle,
    Sprite,
    Text
};

struct Drawable {
    DrawableType type;
    float x = 0;
    float y = 0;
    float width = 1;
    float height = 1;
    std::string asset;
    std::string text;
    int color = 0;
    std::unordered_map<std::string, std::string> props;
};

#endif // DRAWABLE_HPP_