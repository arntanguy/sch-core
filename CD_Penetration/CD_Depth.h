#ifndef _CD_DEPTH
#define _CD_DEPTH

#pragma once
#include "../S_Object/S_Object.h"
#include "../CD/CD_SimplexEnhanced.h"

class CD_Depth
{
protected:
	S_Object *sObj1_;
	S_Object *sObj2_;

	Scalar precision_,epsilon_;
	
public:

	CD_Depth(S_Object *Obj1, S_Object *Obj2);
	virtual ~CD_Depth(void);

	/*!
	 *\brief sets the relative precision of the proximity queries to a given value. Default is 1e-3
	 */
	void setRelativePrecision(Scalar);

	/*
	 *\brief Sets the machine epsilon. Default is 1e-24
	 */
	void setEpsilon(Scalar);

	Scalar getPenetrationDepth(Vector3& v, Point3& p1, Point3& p2, const CD_SimplexEnhanced& s,const CD_Simplex& s1_,const CD_Simplex& s2_);
};

#endif