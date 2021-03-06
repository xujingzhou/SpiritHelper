/////////////////////////////////////////////////////////////////////////
//类名：CDIBitmap
//功能：DIB位图文件操作类(具有透明及半透明显示效果)
//修改：徐景周(Johnny Xu, xujingzhou2016@gmail.com)
//组织：未来工作室(Future Studio)
//日期：2002.1.8
////////////////////////////////////////////////////////////////////////
#ifndef DIB256_h
#define DIB256_h

class CDIBitmap
{
	class CBmpPalette : public CPalette
	{
	public:
		CBmpPalette( CDIBitmap* pBmp );
	};

	CBitmap			m_bmpTransparent;	// 透明位图
	BITMAPINFO *	m_pInfo;
	BYTE *			m_pPixels;
	CBmpPalette *	m_pPal;
	BOOL			m_bIsPadded;

	public:		//constructors
		CDIBitmap();
		virtual ~CDIBitmap();

	private:
		CDIBitmap( const CDIBitmap& dbmp );

	public:		// attributes
		BITMAPINFO *	GetHeaderPtr() const;
		BYTE *			GetPixelPtr() const;
		RGBQUAD *		GetColorTablePtr() const;
		int				GetWidth() const;
		int				GetHeight() const;
		CBmpPalette *	GetPalette() { return m_pPal; }

	public:		// operations
		BOOL			CreatePalette();	// auto. made by "Load()" and "CreateFromBitmap()"
		void			ClearPalette();		// destroy the palette associated with this image
		BOOL			CreateFromBitmap( CDC *, CBitmap * );
		BOOL			LoadResource(LPCTSTR ID);
		BOOL			LoadResource(UINT ID) { return LoadResource(MAKEINTRESOURCE(ID)); }
		BOOL			LoadBitmap(UINT ID) { return LoadResource(ID); }
		BOOL			LoadBitmap(LPCTSTR ID) { return LoadResource(ID); }
		void			DestroyBitmap();
		BOOL			DeleteObject() { DestroyBitmap(); return TRUE; }
		
	public:		// overridables
			// draw the bitmap at the specified location
		virtual void	DrawDIB( CDC * pDC, int x=0, int y=0 );

			// draw the bitmap and stretch/compress it to the desired size
		virtual void	DrawDIB( CDC * pDC, int x, int y, int width, int height );

			// draw parts of the dib into a given area of the DC
		virtual int		DrawDIB( CDC * pDC, CRect & rectDC, CRect & rectDIB );

		// 绘制一个半透明位图,jingzhou xu
		void DrawHalfTransparentBitmap(CDC * pDC, CRect & rectDC);
		// 绘制全透明位图显示(默认透明显示色为黑),jingzhou xu
		void DrawTransparentBitmap(CDC* pDC,int x, int y, CBitmap *bmpTransparent = NULL, COLORREF clrTrans=RGB(0,0,0));

			// load a bitmap from disk
		virtual BOOL	Load( CFile * pFile );
		virtual BOOL	Load( const CString & );
		BOOL			Load( BYTE* pFile, int nFileLength );

			// save the bitmap to disk
		virtual BOOL	Save( CFile * pFile );
		virtual BOOL	Save( const CString & );

		int				GetPalEntries() const;

	protected:
		int				GetPalEntries( BITMAPINFOHEADER& infoHeader ) const;
		DWORD			GetBitsPerPixel() const;
		DWORD			LastByte( DWORD BitsPerPixel, DWORD PixelCount ) const;
		DWORD			GetBytesPerLine( DWORD BitsPerPixel, DWORD Width ) const;
		BOOL			PadBits();
		BOOL			UnPadBits();
		WORD			GetColorCount() const;
};

#endif	// DIB256_h