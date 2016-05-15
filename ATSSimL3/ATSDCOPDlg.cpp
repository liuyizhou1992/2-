// ATSDCOPDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "ATSSimL3.h"
#include "ATSDCOPDlg.h"


// CATSDCOPDlg 对话框

IMPLEMENT_DYNAMIC(CATSDCOPDlg, CDialog)

CATSDCOPDlg::CATSDCOPDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CATSDCOPDlg::IDD, pParent)
{

}

CATSDCOPDlg::~CATSDCOPDlg()
{
}

void CATSDCOPDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CATSDCOPDlg, CDialog)
	ON_WM_CTLCOLOR()
END_MESSAGE_MAP()


// CATSDCOPDlg 消息处理程序

HBRUSH CATSDCOPDlg::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialog::OnCtlColor(pDC, pWnd, nCtlColor);

	// TODO:  在此更改 DC 的任何属性
	if (nCtlColor==CTLCOLOR_DLG)
	{
		HBRUSH B = CreateSolidBrush(RGB(50,200,200)); //RGB(0,135,135)
		//		//创建画刷
		return (HBRUSH) B;
	}
	if(pWnd->GetDlgCtrlID()==IDC_TITLE)
	{
		pDC->SetBkMode(TRANSPARENT); 
		//设置背景为透明
		pDC->SetTextColor(RGB(0,0,0)); //设置字体颜色
		HBRUSH B = CreateSolidBrush(RGB(50,200,200)); 
		//创建画刷
		return (HBRUSH) B; //返回画刷句柄

	}
	// TODO:  如果默认的不是所需画笔，则返回另一个画笔
	return hbr;
}
