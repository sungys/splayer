#pragma once

#include "SUIButton.h"

// CSVPSliderCtrl

class CSVPSliderCtrl : public CSliderCtrl
{
	DECLARE_DYNAMIC(CSVPSliderCtrl)

public:
	CSVPSliderCtrl();
	virtual ~CSVPSliderCtrl();
	CString imgTM;
	CString imgTBG;
	DWORD colorBackGround;
	DWORD m_style;

	BOOL m_bVertical ;
	CSUIButton* m_btnVolTm;
	CSUIButton* m_btnVolBG;
	CSUIBtnList m_btnList;

protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
};


