
// G24W04MFCView.h: CG24W04MFCView 클래스의 인터페이스
//

#pragma once


class CG24W04MFCView : public CView
{
protected: // serialization에서만 만들어집니다.
	CG24W04MFCView() noexcept;
	DECLARE_DYNCREATE(CG24W04MFCView)

// 특성입니다.
public:
	CG24W04MFCDoc* GetDocument() const;

// 작업입니다.
public:

// 재정의입니다.
public:
	virtual void OnDraw(CDC* pDC);  // 이 뷰를 그리기 위해 재정의되었습니다.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 구현입니다.
public:
	virtual ~CG24W04MFCView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // G24W04MFCView.cpp의 디버그 버전
inline CG24W04MFCDoc* CG24W04MFCView::GetDocument() const
   { return reinterpret_cast<CG24W04MFCDoc*>(m_pDocument); }
#endif

