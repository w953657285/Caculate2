// CaculateDoc.h : interface of the CCaculateDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CACULATEDOC_H__84B49A2B_2EB3_4999_9B0A_6FF48EE5FD21__INCLUDED_)
#define AFX_CACULATEDOC_H__84B49A2B_2EB3_4999_9B0A_6FF48EE5FD21__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CCaculateDoc : public CDocument
{
protected: // create from serialization only
	CCaculateDoc();
	DECLARE_DYNCREATE(CCaculateDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCaculateDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CCaculateDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CCaculateDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CACULATEDOC_H__84B49A2B_2EB3_4999_9B0A_6FF48EE5FD21__INCLUDED_)
