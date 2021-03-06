#include "level.hpp"

Level::Level(sf::RenderWindow &window, Settings &settings, std::unordered_map<const char *, sf::Texture *> &textures_map, unsigned int nb)
    : m_window(window), m_settings(settings), m_textures_map(textures_map) {
    
    switch (nb) {
    case 0:
        load_level_0();
        break;
    case 1:
        load_level_1();
        break;
    case 2:
        load_level_2();
        break;
    case 3:
        load_level_3();
        break;
    case 4:
        load_level_4();
        break;
    default:
        std::cerr << "ERROR: WRONG LEVEL ID" << std::endl;
        break;
    }
}

Level::~Level() {

    for (int i = 0; i < m_sprites_vector.size(); ++i) {
        delete m_sprites_vector[i];
    }
}

void Level::draw(const float delta_time) {
    for (int i = 0; i < m_sprites_vector.size(); ++i) {
        m_window.draw(*m_sprites_vector[i]);
    }
}

void Level::move_selector() {

}

void Level::load_level_0() {
    
    sf::Vector2f mul = sf::Vector2f((float)m_window.getSize().x / (float)m_textures_map["main_menu_background"]->getSize().x, (float)m_window.getSize().y / (float)m_textures_map["main_menu_background"]->getSize().y);

    m_sprites_vector.push_back(new sf::Sprite());
    m_sprites_vector[0]->setTexture(*m_textures_map["main_menu_background"]);
    m_sprites_vector[0]->setScale(mul);
}
void Level::load_level_1() {

}
void Level::load_level_2() {

}
void Level::load_level_3() {

}
void Level::load_level_4() {

}
