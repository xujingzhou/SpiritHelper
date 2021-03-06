//////////////////////////////////////////////////
//类名：CParticleRoutine
//功能：粒子系统可实现仿爆炸、环形波、尾汽等效果
//修改：徐景周(Johnny Xu, xujingzhou2016@gmail.com)
//组织：未来工作室(Future Studio)
//日期：2002.1.1
//////////////////////////////////////////////////
#if !defined(AFX_PARTICLEROUTINE_H__AADEF411_8FCD_4504_917B_80D0BA894E69__INCLUDED_)
#define AFX_PARTICLEROUTINE_H__AADEF411_8FCD_4504_917B_80D0BA894E69__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

typedef struct tagPARTICLE					// 粒子结构
{
	int			state;						// 粒子状态
	int			type;						// 粒子效果类型
	int			x,y;						// 粒子所在位置
	float		xv,yv;						// 粒子初始速度
	COLORREF	current_color;				// 粒子当前颜色
	COLORREF	start_color;				// 粒子起始颜色
	COLORREF	end_color;					// 粒子终止颜色
	int			counter;					// 粒子计数器(生命周期用)
	int			max_count;					// 粒子生命周期
}PARTICLE, *PARTICLE_PTR;

// 粒子最大数
const int MAX_PARTICLES		= 256;

class CParticleRoutine  
{
public:
	CParticleRoutine();
	virtual ~CParticleRoutine();
	
	// 初始化及复位粒子系统
	void Reset_Particles(int nWidth,int nHeight);
	// 粒子运动处理
	void Process_Particles(DWORD* pTargetImage);
	// 爆炸效果
	void Set_Particle_Explosion(int type, int color, int count, int x, int y, int xv, int yv);
	// 环形波效果
	void Set_Particle_Ring(int type, int color, int count, int x, int y, int xv, int yv);
	// 尾汽效果
	void Set_Particle_Gas(int type, int color, int emit_x, int emit_y, int emit_xv, int emit_yv);

private:
	// 绘制处理后的粒子效果到目标位图中
	void Draw_Particles(DWORD* pTargetImage);
	// 处理各粒子
	void Start_Particle(int type,int color,int count,int x,int y,float xv,float yv);

	// 获取指定范围内的随机数
	inline int GetRandom(int nMin,int nMax)	const
	{
		srand((unsigned)time(NULL));
		return (rand() % ((nMax+1)-nMin))+nMin;
	}

	float		cos_value[360];		// 角度余弦值
	float		sin_value[360];		// 角度正弦值	

	int			m_bmpWidth;			// 效果位图宽度
	int			m_bmpHeight;		// 效果位图高度

									// 粒子存放数组
	PARTICLE	particles[MAX_PARTICLES];
};

#endif // !defined(AFX_PARTICLEROUTINE_H__AADEF411_8FCD_4504_917B_80D0BA894E69__INCLUDED_)
