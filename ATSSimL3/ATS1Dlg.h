#pragma once

#include "resource.h"
#include "afxwin.h"
// CATS1Dlg �Ի���
#include "MyButton.h"
//class CATSDLG;
class CDLG_MENU;
class CATS1Dlg : public CDialog
{
	DECLARE_DYNAMIC(CATS1Dlg)

public:
	CATS1Dlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CATS1Dlg();

	CDLG_MENU *dlgmenu;
// �Ի�������
	enum { IDD = IDD_DIALOG_ATS1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton1();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	CStatic m_title;
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
public:
	CMyButton m_btn;
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
public:
	CMenu *pm;
	afx_msg void OnStnClickedStatictitle();
};
