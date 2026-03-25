/*
** EPITECH PROJECT, 2025
** G-OOP-400-NCE-4-1-arcade-5
** File description:
** IGame.hpp
*/

// IGame.hpp
#pragma once
class IGraphical;

class IGame {
public:
    virtual ~IGame() = default;

    virtual void init() = 0;
    virtual void update(int input) = 0;
    virtual void render(IGraphical *gfx) = 0;

    virtual int getScore() const = 0;
    virtual bool isGameOver() const = 0;
};