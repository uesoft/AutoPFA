// TripFourquadInerialModel.cpp: implementation of the TripFourquadInerialModel class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "autopfa.h"
#include "TripFourquadInerialModel.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

TripFourquadInerialModel::TripFourquadInerialModel(DlgInerailTrans &ref)
:m_dlgTrans(ref)
{

}

TripFourquadInerialModel::~TripFourquadInerialModel()
{

}

BOOL TripFourquadInerialModel::UpData(PumpTransient &ref)
{
	m_dlgTrans.UpData(ref);
	return TRUE;
}

void TripFourquadInerialModel::Init(PumpTransient &ref)
{
	m_dlgTrans.Init(ref);
	m_dlgTrans.TimeEvent(FALSE);
	m_dlgTrans.SetInitCurSel(0);
	m_dlgTrans.SetDataCurSel(0);
}
