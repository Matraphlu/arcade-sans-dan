/*
** EPITECH PROJECT, 2025
** G-OOP-400-NCE-4-1-arcade-5
** File description:
** IGraphical.hpp
*/

#pragma once
#include <vector>
#include "Event.hpp"
#include "Drawable.hpp"

class IGraphic {
public:
    virtual ~IGraphic() = default;
    virtual void init() = 0;
    virtual void clear() = 0;
    virtual void display() = 0;
    virtual Event pollEvent() = 0;
    virtual void draw(const std::vector<Drawable>& drawables) = 0;aaaa
};