/*
** EPITECH PROJECT, 2025
** G-OOP-400-NCE-4-1-arcade-5
** File description:
** IGraphical.hpp
*/
#include <string>
// IGraphical.hpp
#pragma once
class IGraphical {
public:
    virtual ~IGraphical() = default;

    virtual void init() = 0;
    virtual void stop() = 0;

    virtual void clear() = 0;
    virtual void display() = 0;

    virtual int getInput() = 0;

    virtual void draw(int x, int y, char c) = 0;
    virtual void drawText(int x, int y, const std::string &text) = 0;
};