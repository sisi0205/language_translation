#include <iostream>
#include <typeinfo>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <vector> 
#include "ast.h"
//#include "symbolTable.h"
#include "tableManager.h"



const Literal* IdentNode::eval() const { 
  const Literal* val = TableManager::getInstance().getEntry(ident);
  return val;
}


AsgBinaryNode::AsgBinaryNode(Node* left, Node* right) : 
  BinaryNode(left, right) { 
  //const Literal* res = right->eval();
  //const std::string n = static_cast<IdentNode*>(left)->getIdent();
  //TableManager::getInstance().insert(n, res);

}


const Literal* AsgBinaryNode::eval() const { 
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* res = right->eval();
  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  TableManager::getInstance().insert(n, res);
  //SymbolTable::getInstance().setValue(n, res);
  return res;
}

const Literal* AddBinaryNode::eval() const { 
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  //return (*x+*y);
  return (*x).operator+(*y);
}

const Literal* SubBinaryNode::eval() const { 
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)-(*y));
}

const Literal* MulBinaryNode::eval() const { 
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)*(*y));
}

const Literal* DivBinaryNode::eval() const { 
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)/(*y));
}



const Literal* PctBinaryNode::eval() const { 
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)%(*y));
}


const Literal* DbStarBinaryNode::eval() const { 
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)^(*y));
}


const Literal* DbSlashBinaryNode::eval() const { 
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return (*x).DbSlash(*y);
}


const Literal* EqEqBinaryNode::eval() const {
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  const Literal* number=(*x==*y);
  return number;
}


const Literal* LessBinaryNode::eval() const {
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  const Literal* number=(*x<*y);
  return number;
}


const Literal* GreaterBinaryNode::eval() const {
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  const Literal* number=(*x>*y);
  return number;
}


const Literal* GreaterEqBinaryNode::eval() const {
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  const Literal* number=(*x>=*y);
  return number;
}

const Literal* LessEqBinaryNode::eval() const {
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  const Literal* number=(*x<=*y);
  return number;
}

const Literal* NotEqBinaryNode::eval() const {
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  const Literal* number=(*x!=*y);
  return number;
}



////////////////Unary Node/////////////////

const Literal* SuiteNode::eval() const {
  TableManager & tm=TableManager::getInstance();
  
  for (const Node * n:stmts)  /// check if it is NULL
  {
    if(!n)
    {
      throw std::string("Null");

    }
    n->eval();
    if(tm.checkCurrentName("__RETURN__"))
    {
      return tm.getEntry("__RETURN__");
    }
  }
  
  return nullptr;
}


void SuiteNode::Insert( Node* node) { stmts.push_back(node);}






const Literal* CallNode::eval() const {
  TableManager & tm=TableManager::getInstance();
  if(!tm.checkFunc(ident))
  {
    std::cout<<"Function"<<ident<<" Not Found"<<std::endl;
    std::exception up=std::exception();
    throw up;
  }
  
  //std::cout<<"here is the pushScope "<<std::endl;
  tm.pushScope(ident);
  const Literal* res=tm.getSuite(ident)->eval();  
  tm.popScope();
  if(!res) {
    //std::cout<<"none "<<std::endl;
    res=new NoneLiteral();
    PoolOfNodes::getInstance().add(res);
  }
  return res;
}



const Literal* ReturnNode::eval() const{

  if(!node){
    const Literal* res=new NoneLiteral();
    PoolOfNodes::getInstance().add(res);
    TableManager::getInstance().insert(rname, res);
    return 0;
  }
  const Literal* res=node->eval();
  TableManager::getInstance().insert(rname, res);
  return res;
}







const Literal* IfNode::eval() const{
  if(!test){
    return 0;
  }

  bool flag= test->eval()->eval()->getbool();
  //std::cout<<"bool "<<std::endl;
  //test->eval()->print();

  if(flag)
  {
    if(!thenSuite) throw std::string("No thenSuite");
    thenSuite->eval();
    
  
  }

  else if(!flag){
    if(!elseSuite) {
      return 0;
    }
    elseSuite->eval();

  }
else throw std::string("Neither true or false");
return 0;

}







