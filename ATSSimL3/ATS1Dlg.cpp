//// ATS1Dlg.cpp : ʵ���ļ�
////
//
#include "stdafx.h"
//#include "ATS1Dlg.h"
//
////#include "ATSDlg.h"
//#include "ATSSimL3.h"
//
//#include "DLG_MENU.h"
//// CATS1Dlg �Ի���
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
//// CATS1Dlg ��Ϣ�������
//
//BOOL CATS1Dlg::OnInitDialog()
//{
//	//CDialog::OnInitDialog();
//
//	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
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
//	//m_title.SetWindowText(_T("�Ϻ�����������"));
//	//m_btn.SetBackColor(RGB(0,135,135));
//	
//	//return TRUE;  // return TRUE unless you set the focus to a control
//	// �쳣: OCX ����ҳӦ���� FALSE
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
//// TODO: �ڴ���ӿؼ�֪ͨ����������
//}
//
//HBRUSH CATS1Dlg::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
//{
//	HBRUSH hbr = CDialog::OnCtlColor(pDC, pWnd, nCtlColor);
//
//	// TODO:  �ڴ˸��� DC ���κ�����
//	if (nCtlColor==CTLCOLOR_DLG)
//	{
//		HBRUSH B = CreateSolidBrush(RGB(0,135,135)); 
//		//		//������ˢ
//		return (HBRUSH) B;
//	}
//	if(pWnd->GetDlgCtrlID()==IDC_STATICTITLE)
//	{
//		pDC->SetBkMode(TRANSPARENT); 
//				//���ñ���Ϊ͸��
//		pDC->SetTextColor(RGB(0,0,0)); //����������ɫ
//		HBRUSH B = CreateSolidBrush(RGB(0,135,135)); 
//			//������ˢ
//		return (HBRUSH) B; //���ػ�ˢ���
//			
//	}
//	// TODO:  ���Ĭ�ϵĲ������軭�ʣ��򷵻���һ������
//	return hbr;
//}
//
//void CATS1Dlg::OnLButtonDown(UINT nFlags, CPoint point)
//{
//	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
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
//	// TODO: �ڴ����ר�ô����/����û���
//	
//	return CDialog::PreCreateWindow(cs);
//}
//
//void CATS1Dlg::OnRButtonDown(UINT nFlags, CPoint point)
//{
//	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
//    pm = new CMenu();
//	pm->LoadMenu(IDR_RMENU);
//	pm=pm->GetSubMenu(0);
//	ClientToScreen(&point);
//	CDialog::OnRButtonDown(nFlags, point);
//}
//
//void CATS1Dlg::OnStnClickedStatictitle()
//{
//	// TODO: �ڴ���ӿؼ�֪ͨ����������
//}
