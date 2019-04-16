// number.cpp : implementation file
//

#include "stdafx.h"
#include "Caculate.h"
#include "number.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
#include "windows.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Cnumber dialog


Cnumber::Cnumber(CWnd* pParent /*=NULL*/)
	: CDialog(Cnumber::IDD, pParent)
{
	//{{AFX_DATA_INIT(Cnumber)
	m_number = 0;
	m_output1 = _T("");
	m_output2 = _T("");
	//}}AFX_DATA_INIT
}


void Cnumber::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Cnumber)
	DDX_Text(pDX, IDC_EDIT1, m_number);
	DDX_Text(pDX, IDC_EDIT3, m_output1);
	DDX_Text(pDX, IDC_EDIT4, m_output2);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Cnumber, CDialog)
	//{{AFX_MSG_MAP(Cnumber)
	ON_EN_CHANGE(IDC_EDIT1, OnChangeEdit1)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_EN_CHANGE(IDC_EDIT4, OnChangeEdit4)
	ON_EN_CHANGE(IDC_EDIT3, OnChangeEdit3)
	ON_BN_CLICKED(IDC_BUTTON4, OnButton4)
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Cnumber message handlers

void Cnumber::OnChangeEdit1() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}
int Calculation(int k,int a,int b)
{
	
	if(k==0)
	return a+b;
	if(k==1)
	return a-b;
	if(k==2)
	return a*b;
	if(k==3)
	{
		if(b!=0)
		return a/b;
	}
}
int ans[10000],Num;
void Cnumber::OnButton1() 
{
	int a;
	UpdateData(TRUE);
	CString strValue1 = _T("");
	int i=0,j,q,n,a1,b1,c1,temans=0;
	if(m_number!=0)
	{
	int temp[5];
	char Symbol[]={'+','-','X','/','=','(',')','\0'};
	srand((unsigned)time(NULL));
	for(i=1;i<=m_number;i++)
	{
		char s[20];
	
flg1:	temp[0]=rand()%100;
		temp[1]=rand()%100;
		temp[2]=rand()%100;
		temp[3]=rand()%4;
		temp[4]=rand()%4;
		if(temp[3]==0||temp[3]==1)
		{
			if(temp[3]==1)
			{
				if(temp[0]<temp[1])
				{
					goto flg1;
				}
				ans[i]=Calculation(temp[3],temp[0],temp[1]);
				if(ans[i]>100)
				{
					goto flg1;
				}
			}
			if(temp[3]==0)
			{
				ans[i]=Calculation(temp[3],temp[0],temp[1]);
				if(ans[i]>100)
				{
					goto flg1;
				}
			}
			if(temp[4]==0||temp[4]==1)
			{
				if(temp[4]==1)
				{
					j=1;
					while(ans[i]<temp[2])
					{
						temp[2]=rand()%100;
						j++;
						if(j==20)
						{
							goto flg1;
						}
					}
					ans[i]=Calculation(temp[4],ans[i],temp[2]);
					if(ans[i]>100)
					{
						goto flg1;
					}
					else
					{
						sprintf(s,"%d%c%d%c%d%c",temp[0],Symbol[temp[3]],temp[1],Symbol[temp[4]],temp[2],Symbol[4]);
						temans++;
						if(temans%2==0)
						{
							m_output1.Format("%s\r\n",s);
						}
						else
						{
							m_output1.Format("%s              ",s);
						}
						strValue1 += m_output1;
						continue;
					}
				}
				if(temp[4]==0)
				{
					ans[i]=Calculation(temp[4],ans[i],temp[2]);
					if(ans[i]>100)
					{
						goto flg1;
					}
					else
					{
						sprintf(s,"%d%c%d%c%d%c",temp[0],Symbol[temp[3]],temp[1],Symbol[temp[4]],temp[2],Symbol[4]);
						temans++;
						if(temans%2==0)
						{
							m_output1.Format("%s\r\n",s);
						}
						else
						{
							m_output1.Format("%s              ",s);
						}
						strValue1 += m_output1;
						continue;
					}
				}
				
			}
			else
			{
				if(temp[4]==2)
				{
					ans[i]=Calculation(temp[4],ans[i],temp[2]);
					if(ans[i]>100)
					{
						goto flg1;
					}
					else
					{
						sprintf(s,"%c%d%c%d%c%c%d%c",Symbol[5],temp[0],Symbol[temp[3]],temp[1],Symbol[6],Symbol[temp[4]],temp[2],Symbol[4]);
						temans++;
						if(temans%2==0)
						{
							m_output1.Format("%s\r\n",s);
						}
						else
						{
							m_output1.Format("%s              ",s);
						}
						strValue1 += m_output1;
						continue;
					}
				}
				if(temp[4]==3)
				{
					if(temp[2]!=0&&(ans[i]%temp[2]==0))
					{
						ans[i]=Calculation(temp[4],ans[i],temp[2]);
						sprintf(s,"%c%d%c%d%c÷%d%c",Symbol[5],temp[0],Symbol[temp[3]],temp[1],Symbol[6],temp[2],Symbol[4]);
						temans++;
						if(temans%2==0)
						{
							m_output1.Format("%s\r\n",s);
						}
						else
						{
							m_output1.Format("%s              ",s);
						}
						strValue1 += m_output1;
						continue;
//						printf("%c%d%c%d%c%c%d%c\n",Symbol[5],temp[0],Symbol[temp[3]],temp[1],Symbol[6],Symbol[temp[4]],temp[2],Symbol[4]);
					}
					else
					{
						goto flg1;
					}
				}
				
			}
		}
		if(temp[3]==2||temp[3]==3)
		{
			if(temp[3]==2)
			{
				ans[i]=Calculation(temp[3],temp[0],temp[1]);
				if(ans[i]>100)
				{
					goto flg1;
				}
			}
			if(temp[3]==3)
			{
				if(temp[1]!=0&&(temp[0]%temp[1]==0))
				{
					ans[i]=Calculation(temp[3],temp[0],temp[1]);
					if(ans[i]>100)
					{
						goto flg1;
					}
				}
				else
				{
					goto flg1;
				}
			}
			if(temp[4]==0||temp[4]==1)
			{
				if(temp[4]==0)
				{
					ans[i]=Calculation(temp[4],ans[i],temp[2]);
					if(ans[i]>100)
					{
						goto flg1;
					}
					else
					{
						if(temp[3]==2)
						{
							sprintf(s,"%d%c%d%c%d%c",temp[0],Symbol[temp[3]],temp[1],Symbol[temp[4]],temp[2],Symbol[4]);
							temans++;
							if(temans%2==0)
						{
							m_output1.Format("%s\r\n",s);
						}
						else
						{
							m_output1.Format("%s              ",s);
						}
							strValue1 += m_output1;
							continue;							
						}

						else
						{
							sprintf(s,"%d÷%d%c%d%c",temp[0],temp[1],Symbol[temp[4]],temp[2],Symbol[4]);
							temans++;
							if(temans%2==0)
						{
							m_output1.Format("%s\r\n",s);
						}
						else
						{
							m_output1.Format("%s              ",s);
						}
							strValue1 += m_output1;
							continue;
						}
					}
				}
				if(temp[4]==1)
				{
					j=1;
					while(ans[i]<temp[2])
					{
						temp[2]=rand()%100;
						j++;
						if(j==20)
						{
							goto flg1;
						}
					}
					ans[i]=Calculation(temp[4],ans[i],temp[2]);
					if(ans[i]>100)
					{
						goto flg1;
					}
					else
					{
//						printf("%d%c%d%c%d%c\n",temp[0],Symbol[temp[3]],temp[1],Symbol[temp[4]],temp[2],Symbol[4]);
						if(temp[3]==2)
						{
							sprintf(s,"%d%c%d%c%d%c",temp[0],Symbol[temp[3]],temp[1],Symbol[temp[4]],temp[2],Symbol[4]);
							temans++;
							if(temans%2==0)
						{
							m_output1.Format("%s\r\n",s);
						}
						else
						{
							m_output1.Format("%s              ",s);
						}
							strValue1 += m_output1;
							continue;
						}
						else
						{
							sprintf(s,"%d÷%d%c%d%c",temp[0],temp[1],Symbol[temp[4]],temp[2],Symbol[4]);
							temans++;
							if(temans%2==0)
						{
							m_output1.Format("%s\r\n",s);
						}
						else
						{
							m_output1.Format("%s              ",s);
						}
							strValue1 += m_output1;
							continue;
						}
					}
				}
				
			}
			if(temp[4]==2)
			{
				ans[i]=Calculation(temp[4],ans[i],temp[2]);
				if(ans[i]>100)
				{
					goto flg1;
				}
				else
				{
//					printf("%d%c%d%c%d%c\n",temp[0],Symbol[temp[3]],temp[1],Symbol[temp[4]],temp[2],Symbol[4]);
					if(temp[3]==2)
					{
						sprintf(s,"%d%c%d%c%d%c",temp[0],Symbol[temp[3]],temp[1],Symbol[temp[4]],temp[2],Symbol[4]);
						temans++;
						if(temans%2==0)
						{
							m_output1.Format("%s\r\n",s);
						}
						else
						{
							m_output1.Format("%s              ",s);
						}
						strValue1 += m_output1;
						continue;
					}
					
					else
					{
						sprintf(s,"%d÷%d%c%d%c",temp[0],temp[1],Symbol[temp[4]],temp[2],Symbol[4]);
						temans++;
						if(temans%2==0)
						{
							m_output1.Format("%s\r\n",s);
						}
						else
						{
							m_output1.Format("%s              ",s);
						}
						strValue1 += m_output1;
						continue;
					}
					
				}
			}
			if(temp[4]==3)
			{
				if(temp[2]!=0&&(ans[i]%temp[2]==0))
				{
					ans[i]=Calculation(temp[4],ans[i],temp[2]);
					if(ans[i]>100)
					{
						goto flg1;
					}
					else
					{
//						printf("%d%c%d%c%d%c\n",temp[0],Symbol[temp[3]],temp[1],Symbol[temp[4]],temp[2],Symbol[4]);
						if(temp[3]==2)
						{
							sprintf(s,"%d%c%d÷%d%c",temp[0],Symbol[temp[3]],temp[1],temp[2],Symbol[4]);
							temans++;
							if(temans%2==0)
						{
							m_output1.Format("%s\r\n",s);
						}
						else
						{
							m_output1.Format("%s              ",s);
						}
							strValue1 += m_output1;
							continue;
						}
						
						else
						{
							sprintf(s,"%d÷%d÷%d%c",temp[0],temp[1],temp[2],Symbol[4]);
							temans++;
							if(temans%2==0)
						{
							m_output1.Format("%s\r\n",s);
						}
						else
						{
							m_output1.Format("%s              ",s);
						}
							strValue1 += m_output1;
							continue;
						}
						
					}
				}
				else
				{
					goto flg1;
				}
			}
			
		}
		
	}
	Num=i;
	SetDlgItemText(IDC_EDIT3,strValue1);
	}
	else
	{
		AfxMessageBox("请输入算式数量");
	}
		
	// TODO: Add your control notification handler code here
	
}

void Cnumber::OnButton2() 
{
	
	// TODO: Add your control notification handler code here
	int j,temans=0;
	CString strValue = _T("");
	if(Num!=0)
	{
	for ( j = 1;j<Num;j++)
	{
		temans++;
		if(temans%2==0)
		{
			m_output2.Format("%d\r\n",ans[j]);
			strValue += m_output2;
		}
		else
		{
			m_output2.Format("%d\t",ans[j]);
			strValue += m_output2;
		}
	}
	SetDlgItemText(IDC_EDIT4,strValue);
	}
	else
	{
		AfxMessageBox("算式数不能为空");
	}

	//s=s + "\r\n";
	//SetDlgItemText(IDC_EDIT4,s);
	//b = b + "\r\n";
	//SetDlgItemText(IDC_EDIT4,b);
	//for(i=0;i<=6;i++)
	//{
		//c=s[i];
	//m_output2=m_output2+"c"+"\r\n";
	//}

	//m_output2="";
	//m_output2="3\r\n";
	//UpdateData(false);
}

void Cnumber::OnChangeEdit4() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}

void Cnumber::OnChangeEdit3() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}

void Cnumber::OnButton4() 
{
	SetDlgItemText(IDC_EDIT4,"");
	SetDlgItemText(IDC_EDIT3,"");
	SetDlgItemText(IDC_EDIT1,"");
	// TODO: Add your control notification handler code here
	
}

void Cnumber::OnButton3() 
{
	int flag=1;
	CString strText(_T(""));
	GetDlgItemText(IDC_EDIT3,strText); 
	if(flag==1)
	{
	CStdioFile file;
	file.Open(_T("E:\\abc.txt"), CFile::modeCreate |CFile::modeWrite | CFile::typeText);
	file.WriteString(strText); 
	file.Close();
	flag=0;
	}
	if(flag==0&&!strText.IsEmpty())
	{
		AfxMessageBox("导出成功！");
	}
	else
	{
		AfxMessageBox("导出失败！");
	}
	
	// TODO: Add your control notification handler code here
	
}
