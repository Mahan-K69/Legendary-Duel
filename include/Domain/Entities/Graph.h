#ifndef GRAPH_H
#define GRAPH_H
#include <unordered_map>
#include <vector>
#include "Node.h"

class Graph{
    std::unordered_map<int , Node>Nodes;
    std::unordered_map<int, std::vector<int> > graph;
    public:    
    Graph();
    void SetNodes();

};

#endif /* GRAPH_H */
