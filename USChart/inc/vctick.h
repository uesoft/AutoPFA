#if !defined(AFX_VCTICK_H__433869C9_9805_49E8_84D0_61943C1EB8AD__INCLUDED_)
#define AFX_VCTICK_H__433869C9_9805_49E8_84D0_61943C1EB8AD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CVcTick wrapper class

class CVcTick : public COleDispatchDriver
{
public:
	CVcTick() {}		// Calls COleDispatchDriver default constructor
	CVcTick(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CVcTick(const CVcTick& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	float GetLength();
	void SetLength(float newValue);
	long GetStyle();
	void SetStyle(long nNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VCTICK_H__433869C9_9805_49E8_84D0_61943C1EB8AD__INCLUDED_)
