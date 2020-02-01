#include <iostream>
#include "server_side/Server.h"
#include "Matrix.h"
#include "BestFirstSearch.h"
#include "Solution.h"

int main() {
    Searchable<int> *m = new Matrix(3);
    Searcher<int> *best_first_search = new BestFirstSearch<int>();
    Solution<std::list<State<int>>> s = best_first_search->search(m);
    auto sol = s.getSolution();
    for (State<int> so : sol) {
      std::cout << so.GetState() << " " << so.GetCameFrom() << std::endl;
    }
}
