//
// Created by hartings on 26.05.18.
//


#include "Node.h"
#include "Execption.h"


Node::Node(string key, int posX = 1, int posY = 1) {
    _key = key;
    _posX = posX;
    _posY = posY;
    _edgeList = new List<Edge *>();
}

string Node::getKey(void){
    return _key;
}
int Node::getPosX(void) {
    return _posX;
}

int Node::getPosY(void) {
    return _posY;
}

List<Edge *> Node::getEdges(void) {
    return *_edgeList;
}

void Node::setKey(string newKey) {
    _key = newKey;
}
void Node::setPosX(int pos) {
    _posX = pos;
}
void Node::setPosY(int pos) {
    _posY = pos;
}
void Node::setNewEdge(Edge * edge) {
    _edgeList->insertNewEntry(edge);
}