// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#if !defined(AFX_STDAFX_H__884F1F2F_4AF8_4CFC_AF50_D6D9D0F055F4__INCLUDED_)
#define AFX_STDAFX_H__884F1F2F_4AF8_4CFC_AF50_D6D9D0F055F4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define VC_EXTRALEAN		// Exclude rarely-used stuff from Windows headers

#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensions

#ifndef _AFX_NO_OLE_SUPPORT
#include <afxole.h>         // MFC OLE classes
#include <afxodlgs.h>       // MFC OLE dialog classes
#include <afxdisp.h>        // MFC Automation classes
#endif // _AFX_NO_OLE_SUPPORT


#ifndef _AFX_NO_DB_SUPPORT
#include <afxdb.h>			// MFC ODBC database classes
#endif // _AFX_NO_DB_SUPPORT

#ifndef _AFX_NO_DAO_SUPPORT
#include <afxdao.h>			// MFC DAO database classes
#endif // _AFX_NO_DAO_SUPPORT

#include <afxdtctl.h>		// MFC support for Internet Explorer 4 Common Controls
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// MFC support for Windows Common Controls
#endif // _AFX_NO_AFXCMN_SUPPORT

#include <Afxtempl.h>
#include "UnitSysHeader.h"

template<class T> void DelMap(CMap<int,int,T*,T*>& map)
{
	POSITION pos = map.GetStartPosition();
	T *temp = NULL;
	int nKey;
	while(pos)
	{
		map.GetNextAssoc(pos,nKey,temp);
		delete temp;
	}
	map.RemoveAll();
}

template<class T> T* LookMap(CMap<int,int,T*,T*>& map,int nKey)
{
	T *temp = NULL;
	map.Lookup(nKey,temp);
	return temp;
}


//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__884F1F2F_4AF8_4CFC_AF50_D6D9D0F055F4__INCLUDED_)
