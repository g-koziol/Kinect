#pragma once


// KinectMover dialog

class KinectMover : public CDialogEx
{
	DECLARE_DYNAMIC(KinectMover)

public:
	KinectMover(CWnd* pParent = NULL);   // standard constructor
	virtual ~KinectMover();

// Dialog Data
	enum { IDD = IDD_DIALOG1 };

protected:	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	int jj;
};
