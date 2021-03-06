#ifndef LEVEL_HPP
#define LEVEL_HPP

#include <iostream>

#include <SFML/Graphics.hpp>

#include "settings.hpp"

class Level {

public:

    Level(sf::RenderWindow &window, Settings &settings, std::unordered_map<const char *, sf::Texture *> &textures_map, unsigned int nb);
    ~Level();

    void draw(const float delta_time);

    void move_selector();

private:

    Settings &m_settings;
    sf::RenderWindow &m_window;

    std::unordered_map<const char *, sf::Texture *> &m_textures_map;
    std::vector<sf::Sprite *> m_sprites_vector;

    void load_level_0();
    void load_level_1();
    void load_level_2();
    void load_level_3();
    void load_level_4();

};

#endif // LEVEL_HPP
