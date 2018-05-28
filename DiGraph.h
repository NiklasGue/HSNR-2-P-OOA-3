//
// Created by hartings on 26.05.18.
//

#ifndef OOA3_DIGRAPH_H
#define OOA3_DIGRAPH_H

#include "List.h"
#include "Node.h"
#include "DiGraph.h"

using namespace std;

class DiGraph {
private:
    List<Node> _nodeList;
    Node *getNodeAdress(string nodeKey);

public:
    DiGraph();
    void addNode(Node *node);
    void addEdge(float weight, string startNodeKey, string endNodeKey);
    List<Node> getNeighbours(string nodeKey);
    List<Edge> getAllEdgesOfNode(string nodeKey);
    List<Node> getAllNodes(void);
};

#endif //OOA3_DIGRAPH_H
