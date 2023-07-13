// 133. Clone Graph
// Given a reference of a node in a connected undirected graph.
// Return a deep copy (clone) of the graph.


class Solution {
 public:
  Node* cloneGraph(Node* node) {
    if (node == nullptr)
      return nullptr;
    if (const auto it = map.find(node); it != cend(map))
      return it->second;

    Node* newNode = new Node(node->val);
    map[node] = newNode;

    for (Node* neighbor : node->neighbors)
      newNode->neighbors.push_back(cloneGraph(neighbor));

    return newNode;
  }

 private:
  unordered_map<Node*, Node*> map;
};
