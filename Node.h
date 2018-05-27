//
// Created by Robert Hartings on 23.05.18.
//

#ifndef OOA3_NODE_H
#define OOA3_NODE_H

#include <string>
#include "Edge.h"
#include "List.h"

using namespace std;

class Node {
private:
    string _key;
    int _posX, _posY;
    List<Edge *> *_edgeList;
public: //todo: Only C-Lion mistake or my?
    Node(string key, int posX, int PosY);
    string getKey(void);
    int getPosX(void);
    int getPosY(void);
    List<Edge *> getEdges(void);
    void setKey(string newKey);
    void setPosX(int pos);
    void setPosY(int pos);
    void setNewEdge(Edge * edge);
};
#endif //OOA3_NODE_H
