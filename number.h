#if !defined(AFX_NUMBER_H__04C15F9A_0898_4B69_8C76_228369734210__INCLUDED_)
#define AFX_NUMBER_H__04C15F9A_0898_4B69_8C76_228369734210__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// number.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Cnumber dialog

class Cnumber : public CDialog
{
// Construction
public:
	Cnumber(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Cnumber)
	enum { IDD = caculate1 };
	int		m_number;
	CString	m_put;
	int		m_answer;
	CString	m_output1;
	CString	m_output2;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Cnumber)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Cnumber)
	afx_msg void OnChangeEdit1();
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	afx_msg void OnChangeEdit4();
	afx_msg void OnChangeEdit3();
	afx_msg void OnButton4();
	afx_msg void OnButton3();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NUMBER_H__04C15F9A_0898_4B69_8C76_228369734210__INCLUDED_)
