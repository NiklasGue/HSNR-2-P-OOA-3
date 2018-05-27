//
// Created by hartings on 23.05.18.
//

#ifndef OOA3_SFMLGRAPHVISUALIZER_H
#define OOA3_SFMLGRAPHVISUALIZER_H

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "DiGraph.h"

class SFMLGraphVisualizer {
private:
    sf::RenderWindow window;
    sf::Font font;
public:
    SFMLGraphVisualizer();
    void visualize(DiGraph &graph);
    void drawNode(Node &node, sf::Color nodeColor);
    void drawEdge(Edge &edge, sf::Color color, double weight, int thickness = 1, int arrowMagnitude = 20);
};
#endif //OOA3_SFMLGRAPHVISUALIZER_H
