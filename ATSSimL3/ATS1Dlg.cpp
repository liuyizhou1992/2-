//// ATS1Dlg.cpp : 实现文件
////
//
#include "stdafx.h"
//#include "ATS1Dlg.h"
//
////#include "ATSDlg.h"
//#include "ATSSimL3.h"
//
//#include "DLG_MENU.h"
//// CATS1Dlg 对话框
//
//IMPLEMENT_DYNAMIC(CATS1Dlg, CDialog)
//
//CATS1Dlg::CATS1Dlg(CWnd* pParent /*=NULL*/)
//	: CDialog(CATS1Dlg::IDD, pParent)
//{
//
//}
//
//CATS1Dlg::~CATS1Dlg()
//{
//}
//
//void CATS1Dlg::DoDataExchange(CDataExchange* pDX)
//{
//	CDialog::DoDataExchange(pDX);
//	DDX_Control(pDX, IDC_STATICTITLE, m_title);
//	DDX_Control(pDX, IDC_BUTTON1, m_btn);
//}
//
//
//BEGIN_MESSAGE_MAP(CATS1Dlg, CDialog)
//	ON_BN_CLICKED(IDC_BUTTON1, &CATS1Dlg::OnBnClickedButton1)
//	ON_WM_CTLCOLOR()
//	ON_WM_LBUTTONDOWN()
//	ON_WM_RBUTTONDOWN()
//	ON_STN_CLICKED(IDC_STATICTITLE, &CATS1Dlg::OnStnClickedStatictitle)
//END_MESSAGE_MAP()
//
//
//// CATS1Dlg 消息处理程序
//
//BOOL CATS1Dlg::OnInitDialog()
//{
//	//CDialog::OnInitDialog();
//
//	// TODO:  在此添加额外的初始化
//	//CRect rect1;
//	//GetWindowRect(rect1);
//	//MoveWindow(CRect(0,0,500,500));
//	//SetWindowPos(GetDesktopWindow(),0,0,1000,100,SWP_NOSIZE);
//
//	//dlgmenu=new CDLG_MENU;
//	//dlgmenu->Create(IDD_DLG_MENU,this);
//	//CRect rect;GetClientRect(&rect);
//	//rect.DeflateRect(100,0,400,200);
//	////dlg->SetWindowPos(&wndTopMost,0,10,0,0,SWP_NOSIZE);
//	//dlgmenu->MoveWindow(rect);
//	//dlgmenu->ShowWindow(SW_SHOW);
//	//
//	//m_title.SetWindowText(_T("Process/ATS -SCUT :Basic Signaling Window Metro NanJing"));
//	//m_title.SetWindowText(_T("上海地铁二号线"));
//	//m_btn.SetBackColor(RGB(0,135,135));
//	
//	//return TRUE;  // return TRUE unless you set the focus to a control
//	// 异常: OCX 属性页应返回 FALSE
//}
//
//void CATS1Dlg::OnBnClickedButton1()
//{
//	CRect rect;
//	GetDlgItem(IDC_BUTTON1)->GetWindowRect(&rect);
//
//	CMenu menu;
//	menu.LoadMenu(IDR_ZHUMENU);
//	CMenu *pPopup=menu.GetSubMenu(0);
//	pPopup->TrackPopupMenu(TPM_TOPALIGN, rect.left, rect.bottom,GetActiveWindow());
//// TODO: 在此添加控件通知处理程序代码
//}
//
//HBRUSH CATS1Dlg::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
//{
//	HBRUSH hbr = CDialog::OnCtlColor(pDC, pWnd, nCtlColor);
//
//	// TODO:  在此更改 DC 的任何属性
//	if (nCtlColor==CTLCOLOR_DLG)
//	{
//		HBRUSH B = CreateSolidBrush(RGB(0,135,135)); 
//		//		//创建画刷
//		return (HBRUSH) B;
//	}
//	if(pWnd->GetDlgCtrlID()==IDC_STATICTITLE)
//	{
//		pDC->SetBkMode(TRANSPARENT); 
//				//设置背景为透明
//		pDC->SetTextColor(RGB(0,0,0)); //设置字体颜色
//		HBRUSH B = CreateSolidBrush(RGB(0,135,135)); 
//			//创建画刷
//		return (HBRUSH) B; //返回画刷句柄
//			
//	}
//	// TODO:  如果默认的不是所需画笔，则返回另一个画笔
//	return hbr;
//}
//
//void CATS1Dlg::OnLButtonDown(UINT nFlags, CPoint point)
//{
//	// TODO: 在此添加消息处理程序代码和/或调用默认值
//
//	CRect rect(0,0,1000,25);
//	if (rect.PtInRect(point))
//	{
//		PostMessage(WM_NCLBUTTONDOWN,HTCAPTION,MAKELPARAM(point.x,point.y));
//	}
//	CDialog::OnLButtonDown(nFlags, point);
//}
//
//BOOL CATS1Dlg::PreCreateWindow(CREATESTRUCT& cs)
//{
//	// TODO: 在此添加专用代码和/或调用基类
//	
//	return CDialog::PreCreateWindow(cs);
//}
//
//void CATS1Dlg::OnRButtonDown(UINT nFlags, CPoint point)
//{
//	// TODO: 在此添加消息处理程序代码和/或调用默认值
//    pm = new CMenu();
//	pm->LoadMenu(IDR_RMENU);
//	pm=pm->GetSubMenu(0);
//	ClientToScreen(&point);
//	CDialog::OnRButtonDown(nFlags, point);
//}
//
//void CATS1Dlg::OnStnClickedStatictitle()
//{
//	// TODO: 在此添加控件通知处理程序代码
//}
