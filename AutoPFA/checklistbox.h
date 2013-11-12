// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class COleFont;
class CPicture;

/////////////////////////////////////////////////////////////////////////////
// CCheckListBox1 wrapper class

class CCheckListBox1 : public CWnd
{
protected:
	DECLARE_DYNCREATE(CCheckListBox1)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0x22a21987, 0x4fa2, 0x11d1, { 0xaf, 0x19, 0x44, 0x45, 0x53, 0x54, 0x0, 0x0 } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName,
		LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect,
		CWnd* pParentWnd, UINT nID,
		CCreateContext* pContext = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); }

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect, CWnd* pParentWnd, UINT nID,
		CFile* pPersist = NULL, BOOL bStorage = FALSE,
		BSTR bstrLicKey = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); }

// Attributes
public:
	short GetAppearance();
	void SetAppearance(short);
	OLE_COLOR GetBackColor();
	void SetBackColor(OLE_COLOR);
	BOOL GetEnabled();
	void SetEnabled(BOOL);
	COleFont GetFont();
	void SetFont(LPDISPATCH);
	OLE_COLOR GetForeColor();
	void SetForeColor(OLE_COLOR);
	OLE_HANDLE GetHWnd();
	void SetHWnd(OLE_HANDLE);
	CString GetText();
	CString Get_Text();
	void Set_Text(LPCTSTR);
	BOOL GetSorted();
	void SetSorted(BOOL);
	short GetNewIndex();
	BOOL GetItemHighLight();
	void SetItemHighLight(BOOL);
	long GetStyle();
	void SetStyle(long);
	short GetListCount();
	short GetListIndex();
	void SetListIndex(short);
	short GetTopIndex();
	void SetTopIndex(short);
	CPicture GetCheckImage();
	void SetCheckImage(LPDISPATCH);
	long GetToggleMode();
	void SetToggleMode(long);
	BOOL GetShowFocusRect();
	void SetShowFocusRect(BOOL);
	BOOL GetRedraw();
	void SetRedraw(BOOL);
	BOOL GetKeyFind();
	void SetKeyFind(BOOL);
	short GetSelCount();
	long GetMultiSelect();
	short GetCheckedCount();
	long GetSortMode();
	void SetSortMode(long);
	long GetCheckAlignment();
	void SetCheckAlignment(long);
	BOOL GetNoCheckmark();
	void SetNoCheckmark(BOOL);
	BOOL GetImageStretch();
	void SetImageStretch(BOOL);
	long GetItemHeight();
	void SetItemHeight(long);
	BOOL GetWordWrap();
	void SetWordWrap(BOOL);

// Operations
public:
	void RemoveItem(short nIndex);
	void Clear();
	void AddCheckedItem(LPCTSTR lpstrText, const VARIANT& vIndex);
	void AddItem(LPCTSTR lpstrText, const VARIANT& vIndex);
	void AddPicItem(LPCTSTR lpstrText, LPDISPATCH pic, const VARIANT& vIndex);
	void CheckAll();
	void UnCheckAll();
	unsigned long GetItemBackColor(short nIndex);
	void SetItemBackColor(short nIndex, unsigned long newValue);
	unsigned long GetItemForeColor(short nIndex);
	void SetItemForeColor(short nIndex, unsigned long newValue);
	COleFont GetItemFont(short nIndex);
	void SetItemFont(short nIndex, LPDISPATCH newValue);
	CPicture GetItemImage(short nIndex);
	void SetItemImage(short nIndex, LPDISPATCH newValue);
	CString GetList(short nIndex);
	void SetList(short nIndex, LPCTSTR lpszNewValue);
	BOOL GetValue(short nIndex);
	void SetValue(short nIndex, BOOL bNewValue);
	BOOL GetGrayed(short nIndex);
	void SetGrayed(short nIndex, BOOL bNewValue);
	BOOL GetSelected(short nIndex);
	void SetSelected(short nIndex, BOOL bNewValue);
	long GetItemData(short nIndex);
	void SetItemData(short nIndex, long nNewValue);
	void SelectAll();
	void UnselectAll();
	long FindString(LPCTSTR s, const VARIANT& startIndex);
	long FindStringExact(LPCTSTR s, const VARIANT& startIndex);
	void AboutBox();
};
