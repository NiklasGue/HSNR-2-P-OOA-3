#include <iostream>
#include "SFMLGraphVisualizer.h"

#define MAX 500

using namespace std;

int main() {
    try {
        srand(time(NULL));
        DiGraph graph;
        SFMLGraphVisualizer help;

        for(int i = 0; i < MAX;i++){
            graph.addNode(new Node(to_string(i),rand()%720,rand()%920));
        }
        cout << "test" << endl;

        for(int i = 0; i<1000;i++){
            graph.addEdge(rand()%10, to_string(rand()%MAX) , to_string(rand()%MAX));
        }
        cout <<"test" << endl;
        help.visualize(graph);
    } catch (MyExecption e) {
        cout << e.getMessage() << endl;
    }

    return 0;
}