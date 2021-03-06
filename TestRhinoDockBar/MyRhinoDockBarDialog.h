/////////////////////////////////////////////////////////////////////////////
// MyRhinoDockBarDialog.h : the dialog to show in our dockbar
//


#pragma once

#include "Resource.h"


class CMyRhinoDockBarDialog : public CRhinoUiDockBarDialog
{

	DECLARE_SERIAL(CMyRhinoDockBarDialog)


public:

////////////////////////////////////////////////////////////////////////////////////
// constructor/destructor 
//
	CMyRhinoDockBarDialog(CWnd* pParent = NULL);
	~CMyRhinoDockBarDialog();
//
//end constructor/destructor
////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////
// dialog resources
//
	enum {IDD = IDD_DIALOGUI};
//
// end dialog resources
////////////////////////////////////////////////////////////////////////////////////


protected:

////////////////////////////////////////////////////////////////////////////////////
// required overrides
//
	virtual BOOL OnInitDialog();
//
//end required overrides
////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////
// event handling
//
protected:

	virtual void DoDataExchange(CDataExchange* pDX);
	DECLARE_MESSAGE_MAP()


public:

	afx_msg void OnBnClickedBtnok();
//
//end event handling
////////////////////////////////////////////////////////////////////////////////////

};



//
// end MyRhinoDockBarDialog.h
////////////////////////////////////////////////////////////////////////////////////
