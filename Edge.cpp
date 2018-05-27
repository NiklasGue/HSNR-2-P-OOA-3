#include "Edge.h"

Edge::Edge(float weight, Node *startNode, Node *endNode) {
    _weight = weight;
    _startNode = startNode;
    _endNode = endNode;
}

float Edge::getWeight(void) {
    return _weight;
}

Node *Edge::getStartNode(void) {
    return _startNode;
}

Node *Edge::getEndNode(void) {
    return _endNode;
}

void Edge::setWeight(float weight) {
    _weight = weight;
}
void Edge::setStartNode(Node *startNode) { //todo: aus Edgeliste des Elements entferenen und in neue Edgeliste einfügen....
    _startNode = startNode;
}
void Edge::setEndNode(Node * endNode) {
    _endNode = endNode;
}
