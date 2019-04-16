// CaculateView.cpp : implementation of the CCaculateView class
//

#include "stdafx.h"
#include "Caculate.h"

#include "CaculateDoc.h"
#include "CaculateView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCaculateView

IMPLEMENT_DYNCREATE(CCaculateView, CView)

BEGIN_MESSAGE_MAP(CCaculateView, CView)
	//{{AFX_MSG_MAP(CCaculateView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCaculateView construction/destruction

CCaculateView::CCaculateView()
{
	// TODO: add construction code here

}

CCaculateView::~CCaculateView()
{
}

BOOL CCaculateView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CCaculateView drawing

void CCaculateView::OnDraw(CDC* pDC)
{
	CCaculateDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CCaculateView printing

BOOL CCaculateView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CCaculateView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CCaculateView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CCaculateView diagnostics

#ifdef _DEBUG
void CCaculateView::AssertValid() const
{
	CView::AssertValid();
}

void CCaculateView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCaculateDoc* CCaculateView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCaculateDoc)));
	return (CCaculateDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CCaculateView message handlers
