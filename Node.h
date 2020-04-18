#ifndef __NODE_H__
#define __NODE_H__

#include <string>

using namespace std;

/* Class to be used for chain of nodes */
class Node
{
 private:
  string myData;
  Node *myNext;

 public:  
  /** 
   * Default constructor contains no data and no links to other nodes
   */
  Node(){ myData = ""; myNext = NULL; };
        
  /**
   * Creates a new node containing a reference to the specified data
   */
  Node(string o){ myData = o; myNext = NULL; };
        
  /**
   * Creates a new node containing a reference to the specified object and
   * a reference to the specified node.
   */
  Node(string o, Node *n){ myData = o; myNext = n;  };
        
  /**
   * Sets this node to refer to the specified node
   */
  void setNextNode(Node *n) { myNext = n; };
        
  /**
   * Returns the reference to the next node pointed to by this node
   */
  Node *getNextNode() { return myNext;  };
        
  /**
   * Sets the data stored in the node to the specified object
   */
  void setData(string o) { myData = o; };
        
  /**
   * Returns the data stored in the node
   */
  string getData() { return myData; };

};


#endif
