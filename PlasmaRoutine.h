/////////////////////////////////////////////////////////////////////////
//类名：CPlasmaRoutine
//功能：熔浆效果
//修改：徐景周(Johnny Xu, xujingzhou2016@gmail.com)
//组织：未来工作室(Future Studio)
//日期：2002.1.8
////////////////////////////////////////////////////////////////////////
#if !defined(AFX_PLASMAROUTINE_H__29FFEFB6_A053_483E_8CB6_676A1B6F6DAC__INCLUDED_)
#define AFX_PLASMAROUTINE_H__29FFEFB6_A053_483E_8CB6_676A1B6F6DAC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include <Windows.h>

class CPlasmaRoutine  
{
public:
	CPlasmaRoutine();
	virtual ~CPlasmaRoutine();
	
	// 利用VARIANT参数设置和初始化溶浆数据
	void		SetDefaultValues(VARIANT* pExtParms);
	void		InitializePlasma(VARIANT* pExtParms);

	// 初始化溶浆效果所需数据
	void		Create(int iWidth,int iHeight);

	// 溶浆效果数据处理
	void		Render(DWORD* pBits, 
		                 int iwidth, 
						 int iheight,
						 int iLineLength);
	// 设置指定位置颜色值
	void		SetRGB(int iIndex,int R,int G,int B);

	// 初始化余弦角度表和颜色调色板
	void		InitCostBLTable();
	void		InitPallette();

	// 溶浆效果处理
	void		CalcPlasma();

	// 创建渐变色调色板数据
	void		CreateGradient(COLORREF clrStart,COLORREF clrEnd,long lSteps,COLORREF* pBuffer);


	int			m_iWidth;				// 位图宽度
	int			m_iHeight;				// 位图高度
	int			m_iAlpha;				// 透明度

	BYTE*		m_pPlasmaBits;			// 存放溶浆数据指针数组
	DWORD		m_pPalletteBuffer[256];	// 颜色调色板数组
	int			m_icostbl[256];			// 余弦角度值数组
	COLORREF	m_PlasmaColors[16];		// 16种基本变化色

	unsigned char	m_a1,m_a2,m_a3,m_a4,m_b1,m_b2,m_b3,m_b4;

	int			m_iModifier1;
	int			m_iModifier2;
	int			m_iModifier3;
	int			m_iModifier4;

	int			m_iXModifier1;
	int			m_iXModifier2;
	int			m_iYModifier1;
	int			m_iYModifier2;

};

#endif // !defined(AFX_PLASMAROUTINE_H__29FFEFB6_A053_483E_8CB6_676A1B6F6DAC__INCLUDED_)
