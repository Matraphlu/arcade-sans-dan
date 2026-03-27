/*
** EPITECH PROJECT, 2025
** G-OOP-400-NCE-4-1-arcade-5
** File description:
** IGame.hpp
*/

#pragma once
#include <vector>
#include "Event.hpp"
#include "Drawable.hpp"

class IGame {
public:
    virtual ~IGame() = default;
    virtual void init() = 0;
    virtual void reset() = 0;
    virtual void update(Event event) = 0;
    virtual bool isGameOver() const = 0;
    virtual int getScore() const = 0;
    virtual std::vector<Drawable> getDrawables() const = 0;zaz
};