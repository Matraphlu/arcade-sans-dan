/*
** EPITECH PROJECT, 2025
** G-OOP-400-NCE-4-1-arcade-5
** File description:
** IGame.hpp
*/

#pragma once
#include <string>

class IGraphical;

class IGame {
public:
    virtual ~IGame() = default;

    // Lifecycle
    virtual void init()  = 0;  // called once when the library is loaded
    virtual void reset() = 0;  // called to restart the game without reloading

    // Game loop — input is a KeyCode value from IGraphical.hpp
    virtual void update(int input) = 0;
    virtual void render(IGraphical *gfx) = 0;

    // State
    virtual int  getScore()   const = 0;
    virtual bool isGameOver() const = 0;

    // Identity — used by the core to list available games and display scores
    virtual std::string getName() const = 0;
};

