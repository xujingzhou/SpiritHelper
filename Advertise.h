//////////////////////////////////////////////////
//类名：CAdvertise
//功能：广告特效对话框实现
//作者：徐景周(Johnny Xu, xujingzhou2016@gmail.com)
//组织：未来工作室(Future Studio)
//日期：2004.12.1
//////////////////////////////////////////////////
#if !defined(AFX_ADVERTISE_H__C721CF4F_4CCD_48D9_B0E0_D73E785E7F6D__INCLUDED_)
#define AFX_ADVERTISE_H__C721CF4F_4CCD_48D9_B0E0_D73E785E7F6D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


#include <memory>			// 导入auto_ptr<>智能指针所需头文件
/////////////////////////////////////////////////////////////////////////////
// CAdvertise dialog

class CAdvertise : public CDialog
{
// Construction
public:
	CAdvertise(CWnd* pParent = NULL);   // standard constructor
	virtual ~CAdvertise();

	// 设置显示爆炸等特效
	void SetParticleRoutine(BOOL bShow);
	
	// 获取爆炸特效标志
	BOOL GetParticleRoutine()	const;
	
	// 设置显示水纹特效
	void SetWaterRoutine(BOOL bShow);
	
	// 获取水纹特效标志
	BOOL GetWaterRoutine()	const;

	// 设置显示火焰特效
	void SetFireRoutine(BOOL bShow);

	// 获取火焰特效标志
	BOOL GetFireRoutine()	const;

	// 设置显示熔浆特效
	void SetPlasmaRoutine(BOOL bShow);
	
	// 获取熔浆特效标志
	BOOL GetPlasmaRoutine()	const;

	// 设置显示屏保文字特效
	void SetShowScreenSaver(BOOL bShow);
	
	// 获取屏保文字特效标志
	BOOL GetShowScreenSaver()	const;

	// 设置雪花效果
	void SetShowSnow(BOOL bShow);

	// 获取雪花特效标志
	BOOL GetShowSnow()	const;

	// 设置仿闪电效果
	void SetShowElectricity(BOOL bShow);
	
	// 获取仿闪电特效标志
	BOOL GetShowElectricity()	const;
	
	// 是否显示背景文字
	void SetShowFont(BOOL bShow);
	
	// 获取显示背景文字特效标志
	BOOL GetShowFont()	const;

	// 设置显示动态徽标特效
	void SetShowLogo(BOOL bShow);
	
	// 获取动态徽标特效标志
	BOOL GetShowLogo()	const;

	// 设置显示烟花效果
	void SetShowAsciiAnimation(BOOL bShow);

	// 获取烟花效果特效标志
	BOOL GetShowAsciiAnimation()	const;

// Dialog Data
	//{{AFX_DATA(CAdvertise)
	enum { IDD = IDD_ADVERTISE };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAdvertise)
	public:
	virtual BOOL DestroyWindow();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

private:
	class CAdvertiseImpl;					// 防火墙镶套类前置声明
	std::auto_ptr<CAdvertiseImpl> pImpl;	// 编译器防火墙,智能指针

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CAdvertise)
	virtual BOOL OnInitDialog();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void OnPaint();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ADVERTISE_H__C721CF4F_4CCD_48D9_B0E0_D73E785E7F6D__INCLUDED_)
