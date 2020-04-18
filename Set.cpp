#include "Set.h"


Set::Set()
{
  myHeadNode = NULL;
}

bool Set::add(string newEntry)
{
  if(contains(newEntry)) return false;
  
  if(myHeadNode == NULL)
    {
      myHeadNode = new Node(newEntry);
    }
  else
    {
      Node *cur = myHeadNode;
      while(cur->getNextNode() != NULL)
	{
	   cur = cur->getNextNode();
	}
      cur->setNextNode(new Node(newEntry));
    }
  return true;
}


bool Set::remove(string entry)
{
  if(myHeadNode == NULL)
    return false;
  else if(myHeadNode->getData() == entry){
    myHeadNode->getNextNode();
    return true;
  }
  else{
    Node *tmp = myHeadNode->getNextNode();
    Node *prev = myHeadNode;
    
    while(tmp != NULL){
      if(tmp->getData() ==entry){
	prev->setNextNode(tmp->getNextNode());
	return true;
      }
      else{
	prev = tmp;
	tmp = tmp->getNextNode();
      }
    }
    return false;
  }
}

void Set::clear()
{
  // myHeadNode = NULL;
  // while(myHeadNode->getNextNode() != NULL)
  // myHeadNode->setNextNode(NULL);
  myHeadNode->setNextNode(NULL);
}

bool Set::contains(string entry)
{
  Node *cur = myHeadNode;
  while(cur != NULL){
    if(cur->getData() == entry){
      return true;
    }
    cur = cur->getNextNode();
  }
  return false;
}

int Set::getSize()
{
  if(myHeadNode == NULL)
  {
    return 0;
  }
  int i = 1;
  Node *cur = myHeadNode;
  while(cur->getNextNode() != NULL)
    {
      i++;
      cur = cur->getNextNode();
    }
  return i;
}


bool Set::isEmpty()
{
  if(myHeadNode == NULL)
    return true;
  return false;
}


bool Set::isFull()
{
  return false;
}

    
void Set::display()
{
  Node *cur = myHeadNode;
  while(cur != NULL)
    {
      cout << cur->getData() << endl;
      cur = cur->getNextNode();
    }
}

