#ifndef GRAPH_H_
#define GRAPH_H_
#include "AdjacencyList.h"
#include "Driver.cpp"


class Graph {
protected:
    int route_distance(std::vector<AdjacencyList> sample_route);
private:
	std::vector<AdjacencyList> adjacency_lists_;
public:
	Graph();
	Graph(std::vector<AdjacencyList>& adjacency_list);
	~Graph();

	void InsertAdjacencyList(AdjacencyList& adjacency_list);
	void TravelingSalesmanReno();
};
#endif // GRAPH_H_