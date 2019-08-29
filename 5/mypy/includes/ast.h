#pragma once

//  Declarations for a calculator that builds an AST
//  and a graphical representation of the AST.
//  by Brian Malloy

#include <iostream>
#include <string>
#include <map>
#include "literal.h"
#include "tableManager.h"


extern void yyerror(const char*);
extern void yyerror(const char*, const char);

class IdentNode : public Node {
public:
  IdentNode(const std::string id) : Node(), ident(id) { } 
  virtual ~IdentNode() {}
  const std::string getIdent() const { return ident; }
  virtual const Literal* eval() const;
private:
  std::string ident;
};



// Binary Node //////////////

class BinaryNode : public Node {
public:
  BinaryNode(Node* l, Node* r) : Node(), left(l), right(r) {}
  virtual const Literal* eval() const = 0;
  Node* getLeft()  const { return left; }
  Node* getRight() const { return right; }
  BinaryNode(const BinaryNode&) = delete;
  BinaryNode& operator=(const BinaryNode&) = delete;
protected:
  Node *left;
  Node *right;
};



class AsgBinaryNode : public BinaryNode {
public:
  AsgBinaryNode(Node* left, Node* right);
  virtual const Literal* eval() const;
};


class AddBinaryNode : public BinaryNode {
public:
  AddBinaryNode(Node* left, Node* right) : BinaryNode(left, right) { }
  virtual const Literal* eval() const;
};

class SubBinaryNode : public BinaryNode {
public:
  SubBinaryNode(Node* left, Node* right) : BinaryNode(left, right) { }
  virtual const Literal* eval() const;
};

class MulBinaryNode : public BinaryNode {
public:
  MulBinaryNode(Node* left, Node* right) : BinaryNode(left, right) {}
  virtual const Literal* eval() const;
};

class DivBinaryNode : public BinaryNode {
public:
  DivBinaryNode(Node* left, Node* right) : BinaryNode(left, right) { }
  virtual const Literal* eval() const;
};

class PctBinaryNode : public BinaryNode {
public:
  PctBinaryNode(Node* left, Node* right) : BinaryNode(left, right) { }
  virtual const Literal* eval() const;
};



class DbStarBinaryNode : public BinaryNode {
public:
  DbStarBinaryNode(Node* left, Node* right) : BinaryNode(left, right) { }
  virtual const Literal* eval() const;
};


class DbSlashBinaryNode : public BinaryNode {
public:
  DbSlashBinaryNode(Node* left, Node* right) : BinaryNode(left, right) { }
  virtual const Literal* eval() const;
};

class AmperBinaryNode : public BinaryNode {
public:
  AmperBinaryNode(Node* left, Node* right) : BinaryNode(left, right) { }
  virtual const Literal* eval() const;
};


class EqEqBinaryNode : public BinaryNode {
public:
  EqEqBinaryNode(Node* left, Node* right): BinaryNode(left, right) {}
  virtual const Literal* eval() const;

};

class LessBinaryNode : public BinaryNode {
public:
  LessBinaryNode(Node* left, Node* right): BinaryNode(left, right) {}
  virtual const Literal* eval() const;

};

class GreaterBinaryNode : public BinaryNode {
public:
  GreaterBinaryNode(Node* left, Node* right): BinaryNode(left, right) {}
  virtual const Literal* eval() const;

};

class GreaterEqBinaryNode : public BinaryNode {
public:
  GreaterEqBinaryNode(Node* left, Node* right): BinaryNode(left, right) {}
  virtual const Literal* eval() const;

};

class LessEqBinaryNode : public BinaryNode {
public:
  LessEqBinaryNode(Node* left, Node* right): BinaryNode(left, right) {}
  virtual const Literal* eval() const;

};

class NotEqBinaryNode : public BinaryNode {
public:
  NotEqBinaryNode(Node* left, Node* right): BinaryNode(left, right) {}
  virtual const Literal* eval() const;

};






// Unary Node //////////////

class UnaryNode : public Node {
public:
  UnaryNode(Node* n) :Node(), node(n) {}
  virtual const Literal* eval() const 
  {
    if (!node) {
    throw std::string("error");
    }
    const Literal* x = node->eval();
    return x->MiusOp();
  }
  Node* getnode() const { return node; }
  UnaryNode(const UnaryNode&) = delete;
  UnaryNode& operator=(const UnaryNode&) = delete;
protected:
  Node *node;

};



class TildeNode : public Node {
public:
  TildeNode(Node* n) :Node(), node(n) {}
  virtual const Literal* eval() const 
  {
    if (!node) {
    throw std::string("error");
    }
    const Literal* x = node->eval();
    return x->TidleOp();
  }
  Node* getnode() const { return node; }

  TildeNode(const TildeNode&) = delete;
  TildeNode& operator=(const TildeNode&) = delete;
protected:
  Node *node;

};










////Function node ////

class SuiteNode: public Node
{
public:
  SuiteNode():Node(),stmts(){}
  virtual void Insert( Node* );
  //void Display() {std::cout<<" Display"<<std::endl;}
  ~SuiteNode() {}
  virtual const Literal* eval() const;
  SuiteNode(const SuiteNode&) = delete;
  SuiteNode& operator=(const SuiteNode&) = delete;


private:
  std::vector<Node *> stmts;
  
};




class FuncNode : public Node {
public:
  FuncNode(const std::string fn, Node* su) :Node(), FuncName(fn), suite(su) 
  {

   //TableManager::getInstance().insert(fn,su);
  }
  virtual const Literal* eval() const 
  {
    //std::cout<<"Here should Never show up"<<std::endl;
    TableManager::getInstance().insert(FuncName,suite);
    return 0 ;
  }
  virtual ~FuncNode() {}
  const std::string getName() const { return FuncName; }
  FuncNode(const FuncNode&) = delete;
  FuncNode& operator=(const FuncNode&) = delete;
protected:
  std::string FuncName;
  Node *suite;
  int scope=0;

};


class CallNode : public Node {
public:
  CallNode(const std::string fn) :Node(), ident(fn)
  {
  //TableManager::getInstance().insert(fn,su);
  }
  virtual const Literal* eval() const; 
  virtual ~CallNode() {}
  const std::string getName() const { return ident; }
  CallNode(const CallNode&) = delete;
  CallNode& operator=(const CallNode&) = delete;
protected:
  std::string ident;
};



class PrintNode : public Node {
public:
  PrintNode(Node* n) :Node(), node(n) {}
  virtual const Literal* eval() const 
  {
    if (!node) {
    std::cout<<"none node"<<std::endl;
    return 0;
    }
    node->eval()->print();
    return 0 ;
  }
  Node* getnode() const { return node; }
  PrintNode(const PrintNode&) = delete;
  PrintNode& operator=(const PrintNode&) = delete;
protected:
  Node *node;

};



class ReturnNode:public Node
{
public:
  ReturnNode(Node* n=0, std::string rn="__RETURN__"):Node(),node(n),rname(rn){}
  virtual const Literal* eval() const;
  ReturnNode(const ReturnNode&) = delete;
  ReturnNode& operator=(const ReturnNode&) = delete;
private:
  Node *node;
  std::string rname;
  
};


/////////////if Node /////////
class IfNode:public Node {
public:
  IfNode(const Node* t, const Node* tsuite, const Node* esuite):Node(),test(t),thenSuite(tsuite),elseSuite(esuite){}
  virtual const Literal* eval() const;
  IfNode(const IfNode&) = delete;
  IfNode& operator=(const IfNode&) = delete;

private:
  const Node* test;
  const Node* thenSuite;
  const Node* elseSuite;

};


/*class NoneNode:public Node{
public:
  NoneNode():Node(),none("None"){}
  virtual const Literal* eval() const {std::cout<<"None"<<std::endl;}

private:
  std::string none;

};
*/

