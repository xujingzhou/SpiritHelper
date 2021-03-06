//////////////////////////////////////////////////
//类名：CHelpTipApp
//功能：应用类
//作者：徐景周(Johnny Xu, xujingzhou2016@gmail.com)
//组织：未来工作室(Future Studio)
//日期：2001.12.1
//////////////////////////////////////////////////
#include "stdafx.h"
#include "HelpTip.h"
#include "HelpTipDlg.h"
#include "transparentWnd.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

#include "Splash.h"					// 加入动态屝屏显示
/////////////////////////////////////////////////////////////////////////////
// CHelpTipApp

BEGIN_MESSAGE_MAP(CHelpTipApp, CWinApp)
	//{{AFX_MSG_MAP(CHelpTipApp)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CHelpTipApp construction

CHelpTipApp::CHelpTipApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}

/////////////////////////////////////////////////////////////////////////////
// The one and only CHelpTipApp object

CHelpTipApp theApp;

/////////////////////////////////////////////////////////////////////////////
//********************************************************************************
//* 名称：InitInstance
//* 作者：徐景周(Johnny Xu, xujingzhou2016@gmail.com)
//* 功能：程序初始化实例
//********************************************************************************
BOOL CHelpTipApp::InitInstance()
{
	AfxEnableControlContainer();

	// Standard initialization
	// If you are not using these features and wish to reduce the size
	//  of your final executable, you should remove from the following
	//  the specific initialization routines you do not need.

#ifdef _AFXDLL
	Enable3dControls();			// Call this when using MFC in a shared DLL
#else
	Enable3dControlsStatic();	// Call this when linking to MFC statically
#endif

	srand(time(NULL));					// 初始化随机涵数

	// 限定此程序只能运行一次，用互斥量来判断程序是否已运行
    m_hMutex=CreateMutex(NULL,TRUE, m_pszAppName); 
    if(GetLastError()==ERROR_ALREADY_EXISTS) { return FALSE; }

	// 设置对话框背景和文本颜色
	SetDialogBkColor(RGB(160,180,220),RGB(0,0,0));

	// 显示菲屏，jingzhou xu
	CSplashThread* pSplashThread = (CSplashThread*) AfxBeginThread(RUNTIME_CLASS(CSplashThread), THREAD_PRIORITY_NORMAL, 0, CREATE_SUSPENDED);
	if (NULL == pSplashThread )
	{
		AfxMessageBox(_T("扉屏显示线程创建失败!"), MB_OK | MB_ICONSTOP);
		return FALSE;
	}
	_ASSERTE(pSplashThread->IsKindOf(RUNTIME_CLASS(CSplashThread))&&"扉屏显示线程创建失败!");
	pSplashThread->SetBitmapToUse(IDB_SPLASH);  

	// 设置动态菲屏显示效果，具有下面属性:
	//	(-1	-- 随机显示,		0	-- 水平交错效果,		1	-- 垂直交错效果,
	//	2	-- 水平百叶窗效果,	3	-- 垂直百叶窗效果,		4	-- 随机积木效果,
	//	5	-- 滤镜效果,		6	-- 垂直平分扫描,		7	-- 水平平分扫描,
	//	8	-- 水平交叉移动,	9	-- 垂直交叉移动,		10	-- 垂直栅条效果,
	//	11	-- 水平栅条效果,	12	-- 环形扫锚效果,		13	-- 缩放效果,
	//	14	-- 矩形扩张效果,	15	-- 椭圆扩张效果,		16	-- 圆角矩形扩张,
	//	17	-- 渐显效果,		18	-- 渐隐效果,			19	-- 正常显示)
	pSplashThread->SetShowMode(-1);		// 随机显示效果
	pSplashThread->ResumeThread();		// 激活菲屏显示线程

	// 延时3秒
	Sleep(3000);   

	// 建立透明窗体
	m_pFrame = new CTransparentWnd;
	m_pMainWnd = m_pFrame;

	// 隐藏显示的菲屏
	if (NULL!= pSplashThread )
	{
		pSplashThread->HideSplash();
	}

	CRect rect(0, 0, 60, 60);
	m_pFrame->CreateTransparent("精灵特效窗体", rect);
	m_pFrame->CenterWindow();
	m_pFrame->ShowWindow(SW_SHOW);

	return TRUE;
}

//********************************************************************************
//* 名称：ExitInstance
//* 作者：徐景周(Johnny Xu, xujingzhou2016@gmail.com)
//* 功能：退出清除工作
//********************************************************************************
int CHelpTipApp::ExitInstance() 
{
	// 关闭互斥量
	VERIFY(CloseHandle(m_hMutex));

	// 清扫透明窗体
	delete m_pFrame;
	m_pFrame = NULL;
	
	return CWinApp::ExitInstance();
}
