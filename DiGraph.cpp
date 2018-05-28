//
// Created by hartings on 26.05.18.
//

#include <iostream>
#include "List.h"
#include "Node.h"
#include "DiGraph.h"
#include "Execption.h"


DiGraph::DiGraph() {
    _nodeList = List<Node>();
}

void DiGraph::addNode(Node * node) {
    _nodeList.insertNewEntry(node);
}
void DiGraph::addEdge(float weight, string startNodeKey, string endNodeKey) {
    Node *startNode = getNodeAdress(startNodeKey);
    Node *endNode = getNodeAdress(endNodeKey);
    if (startNode != endNode)
        startNode->setNewEdge(new Edge(weight, startNode, endNode));
}

List<Node> DiGraph::getNeighbours(string nodeKey) {
    List<Node> resultList;
    List<Edge> neighboursList;
    neighboursList = getNodeAdress(nodeKey)->getEdges();

    for (int i = 0; i < neighboursList.getListSize(); i++) {
        resultList.insertNewEntry(neighboursList.getValueAtPos(i)->getEndNode());
    }

    return resultList;
}


List <Edge> DiGraph::getAllEdgesOfNode(string nodeKey) {
    for (int i = 0; i < _nodeList.getListSize() ; i++) {
        if (nodeKey == _nodeList.getValueAtPos(i)->getKey()) {
            return _nodeList.getValueAtPos(i)->getEdges();
        }
    }
}

List <Node> DiGraph::getAllNodes(void) {
    return _nodeList;
}

Node* DiGraph::getNodeAdress(string nodeKey) {
    for (int i = 0; i < _nodeList.getListSize(); i++) {
        if(nodeKey == _nodeList.getValueAtPos(i)->getKey()) {
            return _nodeList.getValueAtPos(i);
        }
    }
    throw MyExecption("Error: Can not get the node adress - IN: DiGraph");
}