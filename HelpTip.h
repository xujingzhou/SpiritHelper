//////////////////////////////////////////////////
//类名：CHelpTipApp
//功能：应用类
//作者：徐景周(Johnny Xu, xujingzhou2016@gmail.com)
//组织：未来工作室(Future Studio)
//日期：2001.12.1
//////////////////////////////////////////////////
#if !defined(AFX_HELPTIP_H__D2C483D8_1F1D_4AE0_81C2_6623FC1FD1A6__INCLUDED_)
#define AFX_HELPTIP_H__D2C483D8_1F1D_4AE0_81C2_6623FC1FD1A6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CHelpTipApp:
// See HelpTip.cpp for the implementation of this class
//
class CTransparentWnd;

class CHelpTipApp : public CWinApp
{
public:
	CHelpTipApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CHelpTipApp)
	public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();
	//}}AFX_VIRTUAL

private:
	CTransparentWnd* m_pFrame;        // 透明窗体指针，退出时删除它
	
	HANDLE m_hMutex;				  // 互斥量

// Implementation

	//{{AFX_MSG(CHelpTipApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_HELPTIP_H__D2C483D8_1F1D_4AE0_81C2_6623FC1FD1A6__INCLUDED_)
