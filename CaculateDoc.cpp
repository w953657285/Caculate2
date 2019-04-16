// CaculateDoc.cpp : implementation of the CCaculateDoc class
//

#include "stdafx.h"
#include "Caculate.h"

#include "CaculateDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCaculateDoc

IMPLEMENT_DYNCREATE(CCaculateDoc, CDocument)

BEGIN_MESSAGE_MAP(CCaculateDoc, CDocument)
	//{{AFX_MSG_MAP(CCaculateDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCaculateDoc construction/destruction

CCaculateDoc::CCaculateDoc()
{
	// TODO: add one-time construction code here

}

CCaculateDoc::~CCaculateDoc()
{
}

BOOL CCaculateDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CCaculateDoc serialization

void CCaculateDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CCaculateDoc diagnostics

#ifdef _DEBUG
void CCaculateDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCaculateDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CCaculateDoc commands
