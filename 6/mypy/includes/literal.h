
#include "node.h"
#include "poolOfNodes.h"
#include <cmath>

class Literal : public Node {
	public:
		virtual ~Literal() {}

		virtual const Literal* operator+(const Literal& rhs) const =0;
		virtual const Literal* opPlus(float) const =0;
		virtual const Literal* opPlus(int) const =0;

		virtual const Literal* operator*(const Literal& rhs) const =0;
		virtual const Literal* opMult(float) const =0;
		virtual const Literal* opMult(int) const =0;

		virtual const Literal* operator-(const Literal& rhs) const =0;
		virtual const Literal* opSubt(float) const =0;
		virtual const Literal* opSubt(int) const =0;

		virtual const Literal* operator/(const Literal& rhs) const =0;
		virtual const Literal* opDiv(float) const =0;
		virtual const Literal* opDiv(int) const =0;

		virtual const Literal* operator%(const Literal& rhs) const =0;
		virtual const Literal* opPct(float) const =0;
		virtual const Literal* opPct(int) const =0;

		virtual const Literal* operator^(const Literal& rhs) const =0; // pow()
		virtual const Literal* opDbStar(float) const =0;
		virtual const Literal* opDbStar(int) const =0;

		virtual const Literal* DbSlash(const Literal& rhs) const =0;
		virtual const Literal* opDbSlash(float) const =0;
		virtual const Literal* opDbSlash(int) const =0;


		virtual const Literal* operator==(const Literal& rhs) const =0;
		virtual const Literal* opDbEq(float) const =0;
		virtual const Literal* opDbEq(int) const =0;

		virtual const Literal* operator<(const Literal& rhs) const =0;
		virtual const Literal* opLess(float) const =0;
		virtual const Literal* opLess(int) const =0;


		virtual const Literal* operator>(const Literal& rhs) const =0;
		virtual const Literal* opGreater(float) const =0;
		virtual const Literal* opGreater(int) const =0;

		virtual const Literal* operator>=(const Literal& rhs) const =0;
		virtual const Literal* opGreaterEq(float) const =0;
		virtual const Literal* opGreaterEq(int) const =0;

		virtual const Literal* operator<=(const Literal& rhs) const =0;
		virtual const Literal* opLessEq(float) const =0;
		virtual const Literal* opLessEq(int) const =0;

		virtual const Literal* operator!=(const Literal& rhs) const =0;
		virtual const Literal* opNotEq(float) const =0;
		virtual const Literal* opNotEq(int) const =0;




		virtual const Literal* MiusOp()  const = 0;
		virtual const Literal* TidleOp()  const = 0;

		virtual bool getbool() const =0;

		virtual const Literal* eval() const = 0;
		virtual void print() const { 
			std::cout << "No Way" << std::endl; 
		}


		//Unary operator
		//virtual const Literal* PlusOp()  const = 0;
};



/////////////////////////




class NoneLiteral:public Literal {
	public:
        NoneLiteral():Literal(),none("None"){}
		virtual const Literal* operator+(const Literal& ) const {throw std::string("error");}
		virtual const Literal* opPlus(float) const {throw std::string("error");}
		virtual const Literal* opPlus(int) const {throw std::string("error");}

		virtual const Literal* operator*(const Literal& ) const {throw std::string("error");}
		virtual const Literal* opMult(float) const {throw std::string("error");}
		virtual const Literal* opMult(int) const {throw std::string("error");}

		virtual const Literal* operator-(const Literal& ) const {throw std::string("error");}
		virtual const Literal* opSubt(float) const {throw std::string("error");}
		virtual const Literal* opSubt(int) const {throw std::string("error");}

		virtual const Literal* operator/(const Literal& ) const {throw std::string("error");}
		virtual const Literal* opDiv(float) const {throw std::string("error");}
		virtual const Literal* opDiv(int) const {throw std::string("error");}

		virtual const Literal* operator%(const Literal&  ) const {throw std::string("error");}
		virtual const Literal* opPct(float) const {throw std::string("error");}
		virtual const Literal* opPct(int) const {throw std::string("error");}

		virtual const Literal* operator^(const Literal&  ) const {throw std::string("error");}
		virtual const Literal* opDbStar(float) const {throw std::string("error");}
		virtual const Literal* opDbStar(int) const {throw std::string("error");}

		virtual const Literal* DbSlash(const Literal&  ) const {throw std::string("error");}
		virtual const Literal* opDbSlash(float) const {throw std::string("error");}
		virtual const Literal* opDbSlash(int) const {throw std::string("error");}


		virtual const Literal* operator==(const Literal&  ) const {throw std::string("error");}
		virtual const Literal* opDbEq(float) const {throw std::string("error");}
		virtual const Literal* opDbEq(int) const {throw std::string("error");}

		virtual const Literal* operator<(const Literal&  ) const {throw std::string("error");}
		virtual const Literal* opLess(float) const {throw std::string("error");}
		virtual const Literal* opLess(int) const {throw std::string("error");}


		virtual const Literal* operator>(const Literal&  ) const {throw std::string("error");}
		virtual const Literal* opGreater(float) const {throw std::string("error");}
		virtual const Literal* opGreater(int) const {throw std::string("error");}

		virtual const Literal* operator>=(const Literal&  ) const {throw std::string("error");}
		virtual const Literal* opGreaterEq(float) const {throw std::string("error");}
		virtual const Literal* opGreaterEq(int) const {throw std::string("error");}

		virtual const Literal* operator<=(const Literal&  ) const {throw std::string("error");}
		virtual const Literal* opLessEq(float) const {throw std::string("error");}
		virtual const Literal* opLessEq(int) const {throw std::string("error");}

		virtual const Literal* operator!=(const Literal& ) const {throw std::string("error");}
		virtual const Literal* opNotEq(float) const {throw std::string("error");}
		virtual const Literal* opNotEq(int) const {throw std::string("error");}




		virtual const Literal* MiusOp()  const {throw std::string("error");}
		virtual const Literal* TidleOp()  const {throw std::string("error");}

		virtual bool getbool() const {return 0;}

		virtual const Literal* eval() const {throw std::string("error");}
		virtual void print() const { 
			std::cout << "None" << std::endl; 
		}
    private:
    std::string none;

};




/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////

class FloatLiteral: public Literal {
	public:
		FloatLiteral(float _val): val(_val) {}

		virtual const Literal* operator+(const Literal& rhs) const  {
			return rhs.opPlus(val);
		}

		virtual const Literal* opPlus(float lhs) const  {
			const Literal* node = new FloatLiteral(lhs + val);
			PoolOfNodes::getInstance().add(node);
			return node; 
		}

		virtual const Literal* opPlus(int lhs) const  {
			const Literal* node = new FloatLiteral(lhs + val);
			PoolOfNodes::getInstance().add(node);
			return node;
		}

		virtual const Literal* operator-(const Literal& rhs) const  {
			return rhs.opSubt(val);
		}
		virtual const Literal* opSubt(float lhs) const  {
			const Literal* node = new FloatLiteral(lhs - val);
			PoolOfNodes::getInstance().add(node);
			return node;
		}
		virtual const Literal* opSubt(int lhs) const  {
			const Literal* node = new FloatLiteral(lhs - val);
			PoolOfNodes::getInstance().add(node);
			return node;
		}

		virtual const Literal* operator*(const Literal& rhs) const  {
			return rhs.opMult(val);
		}
		virtual const Literal* opMult(float lhs) const  {
			const Literal* node = new FloatLiteral(lhs * val);
			PoolOfNodes::getInstance().add(node);
			return node;
		}
		virtual const Literal* opMult(int lhs) const  {
			const Literal* node = new FloatLiteral(static_cast<float>(lhs) * val);
			PoolOfNodes::getInstance().add(node);
			return node;
		}

		virtual const Literal* operator/(const Literal& rhs) const  {
			return rhs.opDiv(val);
		}
		virtual const Literal* opDiv(float lhs) const  {
			if ( val == 0 ) throw std::string("Zero Division Error");
			const Literal* node = new FloatLiteral(lhs / val);
			PoolOfNodes::getInstance().add(node);
			return node;
		}
		virtual const Literal* opDiv(int lhs) const  {
			if ( val == 0 ) throw std::string("Zero Division Error");
			const Literal* node = new FloatLiteral(lhs / val);
			PoolOfNodes::getInstance().add(node);

			return node;
		}


		virtual const Literal* operator%(const Literal& rhs) const  {
			return rhs.opPct(val);
		}
		virtual const Literal* opPct(float lhs) const  {
			if ( val == 0 ) throw std::string("Zero Division Error");
			float tp;
			if(lhs*val<0)
				tp=fmod(lhs,val)+val;
			else
				tp=fmod(lhs,val);
			const Literal* node = new FloatLiteral(tp);

			PoolOfNodes::getInstance().add(node);
			return node;
		}
		virtual const Literal* opPct(int lhs) const  {
			if ( val == 0 ) throw std::string("Zero Division Error");
			float tp;
			if(lhs*val<0)
				tp=fmod(static_cast<float>(lhs), val)+val;
			else
				tp=fmod(static_cast<float>(lhs), val);
			const Literal* node = new FloatLiteral(tp);
			PoolOfNodes::getInstance().add(node);
			return node;
		}



		virtual const Literal* operator^(const Literal& rhs) const  {
			return rhs.opDbStar(val);
		}
		virtual const Literal* opDbStar(float lhs) const  {
			const Literal* node = new FloatLiteral(pow(lhs,val));
			PoolOfNodes::getInstance().add(node);
			return node;
		}
		virtual const Literal* opDbStar(int lhs) const  {
			const Literal* node = new FloatLiteral(pow(static_cast<float>(lhs), val));
			PoolOfNodes::getInstance().add(node);
			return node;
		}



		virtual const Literal* DbSlash(const Literal& rhs) const  {
			return rhs.opDbSlash(val);
		}
		virtual const Literal* opDbSlash(float lhs) const  {
			if ( val == 0 ) throw std::string("Zero Division Error");
			const Literal* node = new FloatLiteral(floor(lhs / val));
			PoolOfNodes::getInstance().add(node);
			return node;
		}
		virtual const Literal* opDbSlash(int lhs) const  {
			if ( val == 0 ) throw std::string("Zero Division Error");
			const Literal* node = new FloatLiteral(floor(lhs / val));
			PoolOfNodes::getInstance().add(node);

			return node;
		}  




		const Literal* operator==(const Literal& rhs) const;
		const Literal* opDbEq(float lhs) const;
		const Literal* opDbEq(int lhs) const;



		const Literal* operator<(const Literal& rhs) const;
		const Literal* opLess(float lhs) const; 
		const Literal* opLess(int lhs) const;



		const Literal* operator>(const Literal& rhs) const;
		const Literal* opGreater(float lhs) const; 
		const Literal* opGreater(int lhs) const;


		const Literal* operator>=(const Literal& rhs) const;
		const Literal* opGreaterEq(float lhs) const; 
		const Literal* opGreaterEq(int lhs) const;


		const Literal* operator<=(const Literal& rhs) const;
		const Literal* opLessEq(float lhs) const; 
		const Literal* opLessEq(int lhs) const;

		const Literal* operator!=(const Literal& rhs) const;
		const Literal* opNotEq(float lhs) const; 
		const Literal* opNotEq(int lhs) const;








		//Unary operator
		virtual const Literal* MiusOp() const  {
			const Literal* node = new FloatLiteral(-val);
			PoolOfNodes::getInstance().add(node);
			return node; 
		}

		virtual const Literal* TidleOp() const  {
			throw std::string("invalid argument type float");
		}


		virtual const Literal* eval() const { return this; }

		virtual bool getbool() const {
			return (bool)(this->val);
		}

		virtual void print() const { 
			std::cout << "FLOAT: " << val << std::endl; 
		}
	private:
		float val;
};



//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////

class IntLiteral: public Literal {
	public:
		IntLiteral(int _val): val(_val) {}

		virtual const Literal* operator+(const Literal& rhs) const  {
			return rhs.opPlus(val);
		}
		virtual const Literal* opPlus(float lhs) const  {
			const Literal* node = new FloatLiteral(static_cast<float>(val) + lhs);
			PoolOfNodes::getInstance().add(node);
			return node;
		}
		virtual const Literal* opPlus(int lhs) const  {
			const Literal* node = new IntLiteral(lhs + val);
			PoolOfNodes::getInstance().add(node);
			return node;
		}

		virtual const Literal* operator-(const Literal& rhs) const  {
			return rhs.opSubt(val);
		}
		virtual const Literal* opSubt(float lhs) const  {
			const Literal* node = new FloatLiteral(lhs - val);
			PoolOfNodes::getInstance().add(node);
			return node;
		}
		virtual const Literal* opSubt(int lhs) const  {
			const Literal* node = new IntLiteral(lhs - val);
			PoolOfNodes::getInstance().add(node);
			return node;
		}

		virtual const Literal* operator*(const Literal& rhs) const  {
			return rhs.opMult(val);
		}
		virtual const Literal* opMult(float lhs) const  {
			const Literal* node = new FloatLiteral(lhs * val);
			PoolOfNodes::getInstance().add(node);
			return node;
		}
		virtual const Literal* opMult(int lhs) const  {
			const Literal* node = new IntLiteral(lhs * val);
			PoolOfNodes::getInstance().add(node);
			return node;
		}

		virtual const Literal* operator/(const Literal& rhs) const  {
			return rhs.opDiv(val);
		}
		virtual const Literal* opDiv(float lhs) const  {
			if ( val == 0 ) throw std::string("Zero Division Error");
			const Literal* node = new FloatLiteral(lhs / val);
			PoolOfNodes::getInstance().add(node);

			return node;
		}
		virtual const Literal* opDiv(int lhs) const  {
			if ( val == 0 ) throw std::string("Zero Division Error");
			const Literal* node = new IntLiteral(floor(static_cast<float>(lhs)/ val));

			PoolOfNodes::getInstance().add(node);
			return node;
		}



		virtual const Literal* operator%(const Literal& rhs) const  {
			return rhs.opPct(val);
		}
		virtual const Literal* opPct(float lhs) const  {
			if ( val == 0 ) throw std::string("Zero Division Error");
			float tp;
			if(val*lhs<0)
				tp=fmod(lhs, val)+val;
			else
				tp=fmod(lhs, val);

			const Literal* node = new FloatLiteral(tp);
			PoolOfNodes::getInstance().add(node);
			return node;
		}
		virtual const Literal* opPct(int lhs) const  {
			if ( val == 0 ) throw std::string("Zero Division Error");
			int tp;
			if(val*lhs<0)
				tp=lhs%val+val;
			else 
				tp=lhs%val;
			const Literal* node = new IntLiteral(tp);
			PoolOfNodes::getInstance().add(node);
			return node;
		}


		virtual const Literal* operator^(const Literal& rhs) const  {
			return rhs.opDbStar(val);
		}
		virtual const Literal* opDbStar(float lhs) const  {
			const Literal* node = new FloatLiteral(pow(static_cast<float>(lhs), val));
			PoolOfNodes::getInstance().add(node);
			return node;
		}
		virtual const Literal* opDbStar(int lhs) const  {
			const Literal* node = new IntLiteral(pow(lhs, val));
			PoolOfNodes::getInstance().add(node);
			return node;
		}



		virtual const Literal* DbSlash(const Literal& rhs) const  {
			return rhs.opDbSlash(val);
		}
		virtual const Literal* opDbSlash(float lhs) const  {
			if ( val == 0 ) throw std::string("Zero Division Error");
			const Literal* node = new FloatLiteral(floor(lhs / val));
			PoolOfNodes::getInstance().add(node);

			return node;
		}
		virtual const Literal* opDbSlash(int lhs) const  {
			if ( val == 0 ) throw std::string("Zero Division Error");
			const Literal* node = new IntLiteral(floor(static_cast<float>(lhs)/ val));
			PoolOfNodes::getInstance().add(node);
			return node;
		}




		virtual const Literal* operator==(const Literal& rhs) const;
		virtual const Literal* opDbEq(float lhs) const;
		virtual const Literal* opDbEq(int lhs) const; 

		const Literal* operator<(const Literal& rhs) const; 
		const Literal* opLess(float lhs) const; 
		const Literal* opLess(int lhs) const; 

		const Literal* operator>(const Literal& rhs) const; 
		const Literal* opGreater(float lhs) const; 
		const Literal* opGreater(int lhs) const; 


		const Literal* operator>=(const Literal& rhs) const;
		const Literal* opGreaterEq(float lhs) const;
		const Literal* opGreaterEq(int lhs) const; 


		const Literal* operator<=(const Literal& rhs) const; 
		const Literal* opLessEq(float lhs) const; 
		const Literal* opLessEq(int lhs) const;  


		const Literal* operator!=(const Literal& rhs) const;
		const Literal* opNotEq(float lhs) const; 
		const Literal* opNotEq(int lhs) const;





		virtual bool getbool() const {
			return (bool)(this->val);
		}


		//Unary operator
		virtual const Literal* MiusOp() const  {
			const Literal* node = new IntLiteral(-val);
			PoolOfNodes::getInstance().add(node);
			return node; 
		}

		virtual const Literal* TidleOp() const  {
			const Literal* node = new IntLiteral(~val);
			PoolOfNodes::getInstance().add(node);
			return node; 
		}


		virtual const Literal* eval() const { return this; }
		virtual void print() const { 
			std::cout << "INT: " << val << std::endl; 
		}
	protected:
		int val;
};




class BoolLiteral: public IntLiteral
{
	public:
		BoolLiteral(int _val): IntLiteral(_val){}

		virtual bool getbool() const {return (bool)(this->val);}

		virtual const Literal* eval() const {return this;}
		virtual void print() const { 
			if(val==1)
				std::cout << "True" << std::endl;
			else
				std::cout<<"False"<<std::endl;
		}
};







