/////////////////////////////////////////////////////////////////////////
//类名：CWaterRoutine
//功能：水纹效果
//修改：徐景周(Johnny Xu, xujingzhou2016@gmail.com)
//组织：未来工作室(Future Studio)
//日期：2002.1.8
////////////////////////////////////////////////////////////////////////
#if !defined(AFX_WATERROUTINE_H__4B4865CD_75CD_4BDE_9D2F_475BEED8FDAA__INCLUDED_)
#define AFX_WATERROUTINE_H__4B4865CD_75CD_4BDE_9D2F_475BEED8FDAA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include <windows.h>

class CWaterRoutine  
{
public:
	CWaterRoutine();
	virtual ~CWaterRoutine();

	// 初始化水纹效果所需数据
	void Create(int iWidth,int iHeight);
	// 处理水纹效果
	void Render(DWORD* pSrcImage,DWORD* pTargetImage);

	// 水纹效果字段处理
	void CalcWater(int npage, int density);
	// 水纹平滑效果字段处理
	void SmoothWater(int npage);
	// 清空水纹效果字段数据
	void FlattenWater();

	// 正弦角度效果水痕
	void SineBlob(int x, int y, int radius, int height, int page);
	// 波浪形水纹效果
	void WarpBlob(int x, int y, int radius, int height, int page);
	// 圆角矩形效果涟漪
	void HeightBox (int x, int y, int radius, int height, int page);
	// 环形效果涟漪
	void HeightBlob(int x, int y, int radius, int height, int page);
	// 大波纹处理
	void CalcWaterBigFilter(int npage, int density);

	// 暗色水纹数据处理
	void DrawWaterNoLight(int page,DWORD* pSrcImage,DWORD* pTargetImage);
	// 亮色水纹数据处理
	void DrawWaterWithLight(int page, int LightModifier,DWORD* pSrcImage,DWORD* pTargetImage);
	// 差值色
	COLORREF GetShiftedColor(COLORREF color,int shift);
	// 油画扩散效果
	void DrawDiffuse(DWORD* pSrcImage,DWORD* pTargetImage);

	int			m_iWidth;				// 位图宽度
	int			m_iHeight;				// 位图高度
	BOOL		m_bDrawWithLight;		// 带亮度绘制
	int			m_iLightModifier;		// 亮度系数
	int			m_iHpage;				// 当前高度字段所在页
	int			m_density;				// 水密度
	
	int*		m_iHeightField1;		// 效果高度字段
	int*		m_iHeightField2;

};

#endif // !defined(AFX_WATERROUTINE_H__4B4865CD_75CD_4BDE_9D2F_475BEED8FDAA__INCLUDED_)
