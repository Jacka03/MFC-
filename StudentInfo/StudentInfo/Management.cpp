#include"stdafx.h"
/*
m_ID.GetWindowText(m_id);
	m_NAME.GetWindowText(m_name);
	m_AGE.GetWindowText(m_age);
	m_MATH.GetWindowText(m_math);
	m_CPULSPULS.GetWindowText(m_cpulspuls);
	m_ADDRESS.GetWindowText(m_address);
	UpdateData(TRUE);
	//΢С�쳣����


	if (m_id == "")
	{
		MessageBox(_T("ѧ�Ų���Ϊ��!"));
		return;
	}
	if (m_name == "")
	{
		MessageBox(_T("��������Ϊ��!"));
		return;
	}
	if (m_age == "")
	{
		MessageBox(_T("���䲻��Ϊ��!"));
		return;
	}
	if (m_math == "")
	{
		MessageBox(_T("��ѧ�ɼ�����Ϊ��!"));
		return;
	}
	if (m_cpulspuls == "")
	{
		MessageBox(_T("����ɼ�����Ϊ��!"));
		return;
	}
	if (m_address == "")
	{
		MessageBox(_T("��ַ����Ϊ��!"));
		return;
	}
	if (m_Sex == -1)
	{
		MessageBox(_T("��ѡ���Ա�"));
		return;
	}

	m_ListControl.InsertItem(0, m_id);  //���ؼ����ݸ���List Control��Ӧλ��
	m_ListControl.SetItemText(0, 1, m_name);
	UpdateData(TRUE);
	if (m_Sex == 1)
		m_ListControl.SetItemText(0, 2, _T("Ů"));
	else if (m_Sex == 0)
		m_ListControl.SetItemText(0, 2, _T("��"));

	m_ListControl.SetItemText(0, 3, m_age);
	m_ListControl.SetItemText(0, 4, m_math);
	m_ListControl.SetItemText(0, 5, m_cpulspuls);
	m_ListControl.SetItemText(0, 6, m_address);

	UpdateData(TRUE);   //�ؼ������ÿ�
	m_id = "";
	m_name = "";
	m_Sex = -1;
	m_age = "";
	m_address = "";
	m_math = "";
	m_cpulspuls = "";
	UpdateData(FALSE);
	num++;
*/