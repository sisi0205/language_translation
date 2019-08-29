#include "literal.h"


class BoolLiteral;


  const Literal* FloatLiteral::operator==(const Literal& rhs) const{
    return rhs.opDbEq(val);
  }
  const Literal* FloatLiteral::opDbEq(float lhs) const{
    std::cout<<int(lhs==val)<<std::endl;
    const Literal* node = new BoolLiteral(int(lhs==val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  const Literal* FloatLiteral::opDbEq(int lhs) const {
    const Literal* node = new BoolLiteral(lhs==val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }



  const Literal* FloatLiteral::operator<(const Literal& rhs) const{
    return rhs.opLess(val);
  }
  const Literal* FloatLiteral::opLess(float lhs) const {
    const Literal* node = new BoolLiteral(lhs<val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  const Literal* FloatLiteral::opLess(int lhs) const{
    const Literal* node = new BoolLiteral(lhs<val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }




  const Literal* FloatLiteral::operator>(const Literal& rhs) const{
    return rhs.opGreater(val);
  }
  const Literal* FloatLiteral::opGreater(float lhs) const {
    const Literal* node = new BoolLiteral(lhs>val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  const Literal* FloatLiteral::opGreater(int lhs) const{
    const Literal* node = new BoolLiteral(lhs>val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }


  const Literal* FloatLiteral::operator>=(const Literal& rhs) const{
    return rhs.opGreaterEq(val);
  }
  const Literal* FloatLiteral::opGreaterEq(float lhs) const {
    const Literal* node = new BoolLiteral(lhs>=val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  const Literal* FloatLiteral::opGreaterEq(int lhs) const{
    const Literal* node = new BoolLiteral(lhs>=val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }


  const Literal* FloatLiteral::operator<=(const Literal& rhs) const{
    return rhs.opLessEq(val);
  }
  const Literal* FloatLiteral::opLessEq(float lhs) const {
    const Literal* node = new BoolLiteral(lhs<=val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  const Literal* FloatLiteral::opLessEq(int lhs) const{
    const Literal* node = new BoolLiteral(lhs<=val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }


  const Literal* FloatLiteral::operator!=(const Literal& rhs) const{
    return rhs.opGreater(val);
  }
  const Literal* FloatLiteral::opNotEq(float lhs) const {
    const Literal* node = new BoolLiteral(lhs!=val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  const Literal* FloatLiteral::opNotEq(int lhs) const{
    const Literal* node = new BoolLiteral(lhs!=val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }






const Literal* IntLiteral::operator==(const Literal& rhs) const{
  return rhs.opDbEq(val);
}
const Literal* IntLiteral::opDbEq(float lhs) const{

const Literal* node = new BoolLiteral(lhs==val);
  PoolOfNodes::getInstance().add(node);
  return node;
}
const Literal* IntLiteral::opDbEq(int lhs) const {
  const Literal* node = new BoolLiteral(lhs==val);
  PoolOfNodes::getInstance().add(node);
  return node;
}


const Literal* IntLiteral::operator<(const Literal& rhs) const{
  return rhs.opLess(val);
}
const Literal* IntLiteral::opLess(float lhs) const {
  const Literal* node = new BoolLiteral(lhs<val);
  PoolOfNodes::getInstance().add(node);
  return node;
}
const Literal* IntLiteral::opLess(int lhs) const{
  const Literal* node = new BoolLiteral(lhs<val);
  PoolOfNodes::getInstance().add(node);
  return node;
}



const Literal* IntLiteral::operator>(const Literal& rhs) const{
  return rhs.opGreater(val);
}
const Literal* IntLiteral::opGreater(float lhs) const {
  const Literal* node = new BoolLiteral(lhs>val);
  PoolOfNodes::getInstance().add(node);
  return node;
}
const Literal* IntLiteral::opGreater(int lhs) const{
  const Literal* node = new BoolLiteral(lhs>val);
  PoolOfNodes::getInstance().add(node);
  return node;
}



const Literal* IntLiteral::operator>=(const Literal& rhs) const{
  return rhs.opGreaterEq(val);
}
const Literal* IntLiteral::opGreaterEq(float lhs) const {
  const Literal* node = new BoolLiteral(lhs>=val);
  PoolOfNodes::getInstance().add(node);
  return node;
}
const Literal* IntLiteral::opGreaterEq(int lhs) const{
  const Literal* node = new BoolLiteral(lhs>=val);
  PoolOfNodes::getInstance().add(node);
  return node;
}


const Literal* IntLiteral::operator<=(const Literal& rhs) const{
  return rhs.opLessEq(val);
}
const Literal* IntLiteral::opLessEq(float lhs) const {
  const Literal* node = new BoolLiteral(lhs<=val);
  PoolOfNodes::getInstance().add(node);
  return node;
}
const Literal* IntLiteral::opLessEq(int lhs) const{
  const Literal* node = new BoolLiteral(lhs<=val);
  PoolOfNodes::getInstance().add(node);
  return node;
}


const Literal* IntLiteral::operator!=(const Literal& rhs) const{
  return rhs.opGreater(val);
}
const Literal* IntLiteral::opNotEq(float lhs) const {
  const Literal* node = new BoolLiteral(lhs!=val);
  PoolOfNodes::getInstance().add(node);
  return node;
}
const Literal* IntLiteral::opNotEq(int lhs) const{
  const Literal* node = new BoolLiteral(lhs!=val);
  PoolOfNodes::getInstance().add(node);
  return node;
}


