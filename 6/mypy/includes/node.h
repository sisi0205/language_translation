#pragma once

#include <iostream>
#include <string>

class Literal;

class Node {
public:
  Node() {}
  virtual ~Node() {}
  //virtual void Insert(const Node *) {}
  virtual const Literal* eval() const = 0;
  virtual void print() const { 
    std::cout << "NODE" << std::endl; 
  }
  virtual const std::string getIdent() const {return 0;}
};

