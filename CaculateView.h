// CaculateView.h : interface of the CCaculateView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CACULATEVIEW_H__6709D22E_98C4_4C3C_B454_C2476F183ACF__INCLUDED_)
#define AFX_CACULATEVIEW_H__6709D22E_98C4_4C3C_B454_C2476F183ACF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CCaculateView : public CView
{
protected: // create from serialization only
	CCaculateView();
	DECLARE_DYNCREATE(CCaculateView)

// Attributes
public:
	CCaculateDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCaculateView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CCaculateView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CCaculateView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in CaculateView.cpp
inline CCaculateDoc* CCaculateView::GetDocument()
   { return (CCaculateDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CACULATEVIEW_H__6709D22E_98C4_4C3C_B454_C2476F183ACF__INCLUDED_)
