/**
 * Definition for Directed graph.
 * struct DirectedGraphNode {
 *     int label;
 *     vector<DirectedGraphNode *> neighbors;
 *     DirectedGraphNode(int x) : label(x) {};
 * };
 */
class Solution {
public:
    /**
     * @param graph: A list of Directed graph node
     * @param s: the starting Directed graph node
     * @param t: the terminal Directed graph node
     * @return: a boolean value
     */
    bool hasRoute(vector<DirectedGraphNode*> graph,
                  DirectedGraphNode* s, DirectedGraphNode* t) {
        // write your code here
        int target = t->label;
        if(s->label==target) return true;
       
        queue<DirectedGraphNode*> Q;
        unordered_set<int> inQ;
        inQ.insert(s->label);
        Q.push(s);
        while(!Q.empty()){
            DirectedGraphNode* tmp = Q.front();
            Q.pop();
            for(auto neighbour:tmp->neighbors){
                if(inQ.find(neighbour->label)!=inQ.end()) continue;
                else {
                    if(neighbour->label == target) return true;
                    else{
                      Q.push(neighbour);
                      inQ.insert(neighbour->label);
                    } 
                }
            }
        }
        return false;
    }
};


