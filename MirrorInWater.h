//////////////////////////////////////////////////
//类名：CMirrorInWater
//功能：水中倒影特效对话框实现
//作者：徐景周(Johnny Xu, xujingzhou2016@gmail.com)
//组织：未来工作室(Future Studio)
//日期：2004.12.1
//////////////////////////////////////////////////
#if !defined(AFX_MIRRORINWATER_H__51ACBF4C_FAEC_47B4_A53E_A4A794B4BDA1__INCLUDED_)
#define AFX_MIRRORINWATER_H__51ACBF4C_FAEC_47B4_A53E_A4A794B4BDA1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// MirrorInWater.h : header file
//

#include <memory>			// 导入auto_ptr<>智能指针所需头文件
/////////////////////////////////////////////////////////////////////////////
// CMirrorInWater dialog

class CMirrorInWater : public CDialog
{
// Construction
public:
	CMirrorInWater(CWnd* pParent = NULL);   // standard constructor
	
// ----------------------------------------------------
	virtual ~CMirrorInWater() throw();
	
	// 拷贝构造及拷贝赋值涵数
	CMirrorInWater(CMirrorInWater& other);
	CMirrorInWater& operator=(CMirrorInWater& other);
	void Swap(CMirrorInWater& other) throw();
// ----------------------------------------------------

// Dialog Data
	//{{AFX_DATA(CMirrorInWater)
	enum { IDD = IDD_MIRROR_IN_WATER };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMirrorInWater)
	public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

private:
	class CMirrorInWaterImpl;					// 镶套类前置声明
    std::auto_ptr<CMirrorInWaterImpl> pImpl;	// 编译器防火墙，智能指针

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CMirrorInWater)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg void OnTimer(UINT nIDEvent);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MIRRORINWATER_H__51ACBF4C_FAEC_47B4_A53E_A4A794B4BDA1__INCLUDED_)
