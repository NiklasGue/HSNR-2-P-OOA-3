#include <iostream>
#include "SFMLGraphVisualizer.h"

#define MAX 10

using namespace std;

char *randomString(int size);

int main() {
    char *strings[MAX];
    for (int i = 0; i < MAX; i++) {
        strings[i] = randomString(8);
    }

    try {
        srand(time(NULL));
        DiGraph graph;
        SFMLGraphVisualizer help;

        for(int i = 0; i < MAX;i++) {
            graph.addNode(new Node(strings[i],rand()%720 + 50 ,rand()%920 + 50));
        }
        for(int i = 0; i< (MAX * 3);i++){
            graph.addEdge(rand()%10, strings[rand()%MAX ] , strings[rand()%MAX ]);
        }
        help.visualize(graph);
    } catch (MyExecption e) {
        cout << e.getMessage() << endl;
    }

    return 0;
}

char *randomString(int size) {
    char *str = (char *) malloc((size + 1) * sizeof(char));
    for (int i = 0; i < size; i++) {
        str[i] = (char) ((rand() % 26) + 'A');
    }
    str[size] = '\0';
    return str;
}