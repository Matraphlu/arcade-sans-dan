/*
** EPITECH PROJECT, 2025
** G-OOP-400-NCE-4-1-arcade-5
** File description:
** IGraphical.hpp
*/

#pragma once
#include <string>

// Standard color palette shared between groups
enum class Color {
    DEFAULT = 0,
    BLACK,
    RED,
    GREEN,
    YELLOW,
    BLUE,
    MAGENTA,
    CYAN,
    WHITE
};

class IGraphical {
public:
    virtual ~IGraphical() = default;

    // Lifecycle
    virtual void init() = 0;
    virtual void stop() = 0;

    // Frame
    virtual void clear() = 0;
    virtual void display() = 0;

    // Input — returns a key code (see KeyCode below)
    virtual int getInput() = 0;

    // Drawing primitives
    virtual void draw(int x, int y, char c, Color color = Color::DEFAULT) = 0;
    virtual void drawText(int x, int y, const std::string &text, Color color = Color::DEFAULT) = 0;

    // Identity — used by the core to list available graphical libraries
    virtual std::string getName() const = 0;
};

// ─── Key codes returned by getInput() ──────────────────────────────────────
enum KeyCode {
    KEY_NONE      = 0,
    KEY_UP        = 1,
    KEY_DOWN      = 2,
    KEY_LEFT      = 3,
    KEY_RIGHT     = 4,
    KEY_ENTER     = 5,
    KEY_ESCAPE    = 6,
    KEY_SPACE     = 7,
    KEY_BACKSPACE = 8,
    // Platform controls
    KEY_NEXT_LIB  = 9,   // switch graphical library
    KEY_NEXT_GAME = 10,  // switch game
    KEY_RESTART   = 11,  // restart current game
    KEY_MENU      = 12,  // go back to menu
    KEY_EXIT      = 13,  // exit the program
};
