#pragma once

#include "Graph.h"


class ListGraph : public Graph
{

    std::vector<std::vector<std::pair<int, int>>> Adjacency;
    
    
   // void PrintGraph();
public:
    void initializeAdjacency(); //funkcja ma na celu wyczyscic vector oraz zarezerwowac miejsce na podany NumberOfVectors
    void randomConection(std::vector<std::pair<int, int>>& possibleEdges, int NumberOfEdges);
    void addVertex(int vertex, int neighbour, int pathCost);
    ListGraph(int Vertices, int start);
    ListGraph() {};
    void dijkstra();
};