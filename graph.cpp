//
// Created by hartings on 17.05.18.
//

#include <string>
#include "graph.h"

using namespace std;

class Liste;

class Edge {
private:

public:

};

class Node {
private:
    string node_key;
    int positionX, positionY;
    Liste<Edge *> edges;
public:
    string getKey(void);
    int getPositionX(void);
    int getPositionY(void);
    Liste<Edge *> getEdges(void);
    void setKey(string newKey);
    void setPositionX(int pos);
    void setPositionY(int pos);
    void setNewEdge(Edge * edge);
};5

class DiGraph {
private:
    Node** nodes;
public:
    void addNode(Node *node);
    void addEdge(string key1, string key2, float weight);
    Liste<Node *> getNeighbours(string key);
    Liste<Edge *> getEdges(string key);
    Liste<Node *> getNodes(void);
};