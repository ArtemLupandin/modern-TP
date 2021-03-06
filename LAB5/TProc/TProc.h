#pragma once

enum TOprtn {
	None,
	Add,
	Sub,
	Mul,
	Dvd
};

enum TFunc {
	Rev,
	Sqr
};

template <class T>
class TProc
{
private:
	T Lop_Res;
	T Rop;
	TOprtn Operation;
public:
	TProc() : Lop_Res(T()), Rop(T())
	{
		Operation = None;
	}
	TProc(T lop_res, T rop) : Lop_Res(T(lop_res)), Rop(T(rop))
	{
		Operation = None;
	}
	~TProc()
	{

	}
	void ReSet()
	{
		Lop_Res = T();
		Rop = T();
		Operation = None;
	}
	void OprtnClear()
	{
		Operation = None;
	}
	void OprtnRun()
	{
		switch (Operation)
		{
		case Add:
			Lop_Res = Lop_Res + Rop;
			break;
		case Sub:
			Lop_Res = Lop_Res - Rop;
			break;
		case Mul:
			Lop_Res = Lop_Res * Rop;
			break;
		case Dvd:
			Lop_Res = Lop_Res / Rop;
			break;
		default:
			break;
		}
	}
	void FuncRun(enum TFunc func)
	{
		switch (func) {
		case Rev:
			Rop = Rop.reroll();
			break;
		case Sqr:
			Rop = Rop.square();
			break;
		default:
			break;
		}
	}
	T Lop_Res_Get() const
	{
		return Lop_Res;
	}
	void Lop_Res_Set(const T set)
	{
		Lop_Res = set;
	}
	void Rop_Set(const T set)
	{
		Rop = set;
	}
	T Rop_Get() const
	{
		return Rop;
	}
	TOprtn OprtnGet() const
	{
		return Operation;
	}
	void OprtnSet(TOprtn set)
	{
		Operation = set;
	}
};

