// ATSDCOPDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "ATSSimL3.h"
#include "ATSDCOPDlg.h"


// CATSDCOPDlg �Ի���

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


// CATSDCOPDlg ��Ϣ�������

HBRUSH CATSDCOPDlg::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialog::OnCtlColor(pDC, pWnd, nCtlColor);

	// TODO:  �ڴ˸��� DC ���κ�����
	if (nCtlColor==CTLCOLOR_DLG)
	{
		HBRUSH B = CreateSolidBrush(RGB(50,200,200)); //RGB(0,135,135)
		//		//������ˢ
		return (HBRUSH) B;
	}
	if(pWnd->GetDlgCtrlID()==IDC_TITLE)
	{
		pDC->SetBkMode(TRANSPARENT); 
		//���ñ���Ϊ͸��
		pDC->SetTextColor(RGB(0,0,0)); //����������ɫ
		HBRUSH B = CreateSolidBrush(RGB(50,200,200)); 
		//������ˢ
		return (HBRUSH) B; //���ػ�ˢ���

	}
	// TODO:  ���Ĭ�ϵĲ������軭�ʣ��򷵻���һ������
	return hbr;
}
