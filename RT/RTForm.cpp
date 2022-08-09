#include "RTForm.h"
#include "ReplaceRT.h"

#include "Buttons.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	RT::RTForm form; //WinFormsTest - ��� ������ �������
	Application::Run(% form);	
}

// ������� ��� �������� ����� ����� �������� ASCII
int sumKodAscii(std::string x)
{
	int a, b(0);
	for (int i(0); i < 8; i++)
	{
		char ch = x[i];
		a = static_cast<int>(ch);
		b += a;
	}
	return b;
}

// ������� ��� ���������� ��������� �� ��������
std::string get_str_between_two_str(const std::string& s, const std::string& start_delim, const std::string& stop_delim)
{
	unsigned first_delim_pos = s.find(start_delim);
	unsigned end_pos_of_first_delim = first_delim_pos + start_delim.length();
	unsigned last_delim_pos = s.find(stop_delim);

	return s.substr(end_pos_of_first_delim, last_delim_pos - end_pos_of_first_delim);
}

std::string poisk(std::string route, int numberStrTimeSearchHead)
{
	std::string timeTextlineP;
	std::string timeP;

	std::ifstream finP(route);

	// �������� �� ������� �����
	if (!finP) {
		finP.close();
		timeP = "121";
		return timeP;
	}

	// ���� � ������� ������ �� �������� ��������
	for (int stroka(0); getline(finP, timeTextlineP); stroka++)
	{
		if (stroka == numberStrTimeSearchHead) {
			break;
		}
	}	
	// ��������� �� ������ ��������� �� ��������
	std::string sotrP = timeTextlineP;
	std::string start_delimP = ";Int=";
	std::string stop_delimP = ";i0=";
	timeP = get_str_between_two_str(sotrP, start_delimP, stop_delimP);

	finP.close();

	return timeP;
}

int poiskIzamena(std::string fileName, int numberStrTimeSearch, std::string hh, std::string mm, std::string ss, int numberStrTimeReplace)
{
	std::string textline;
	std::string timeTextline;
	int sumOldTime, sumNewTime;

	std::ifstream fin(fileName);
	// �������� �� ������� �����
	if (!fin) { fin.close(); return 0; }

		// ���� � ������� ������ �� �������� ��������
		for (int stroka(0); getline(fin, timeTextline); stroka++)
		{
			if (stroka == numberStrTimeSearch) {
				break;
			}
		}
	std::string oldTimeTextline = timeTextline;

		// ��������� �� ������ ��������� �� ��������
		std::string sotr = timeTextline;
			std::string start_delim = ";Int=";
			std::string stop_delim = ";i0=";
		std::string time = get_str_between_two_str(sotr, start_delim, stop_delim);

	// ������� ����� ����� �������� ��������� time																				
	sumOldTime = sumKodAscii(time);

	// ������ ����� �����	
		std::string new_time = hh + ":" + mm + ":" + ss;	

	// ������� ����� ����� �������� ������ ������� 
	sumNewTime = sumKodAscii(new_time);

		// �������� � ������ textline ������ ����� time �� ����� new_time
		std::string findStrTime = time;
		std::string replaceStrTime = new_time;
		std::string::size_type indexTime;
			while ((indexTime = timeTextline.find(findStrTime)) != std::string::npos)
			{
				timeTextline.replace(indexTime, findStrTime.size(), replaceStrTime);
			}
		std::string newTimeTextline = timeTextline;

	fin.close();

	// ��������� ���� ��� ��������� ������ ������
	std::fstream fon(fileName, std::ios::in | std::ios::out);
	// �������� �� ������� �����
	if (!fon) { fon.close(); return 0; }

		// ���������� ������ ���������� ����� � ������ ��������� �� ������ ������ ������
		for (int stroka(0); getline(fon, oldTimeTextline); stroka++)
		{
			if (stroka == numberStrTimeReplace) {
				break;
			}
		}
	std::fstream::pos_type posTime = fon.tellg();

		// ������ ��������� ������	
		getline(fon, oldTimeTextline);
			if (timeTextline.length() == newTimeTextline.length()) 
			{
				// ������������ � ������ ������ � ������ ��
				fon.seekp(posTime);
				fon << newTimeTextline;
			}
	fon.close();

				std::ifstream finn(fileName);
				// �������� �� ������� �����
				if (!finn) { finn.close(); return 0; }

					// ���� � ������� ������ ������
					getline(finn, textline);

					// ������� ����� "" �� ������
					std::string findstr = version;
					std::string replacestr = "";
					std::string::size_type index;
						while ((index = textline.find(findstr)) != std::string::npos)
						{
							textline.replace(index, findstr.size(), replacestr);
						}

					// ��������� ������ � int'���� ���
					std::string kod = textline;
					int k_kod(0);
					std::istringstream ist(kod);
					ist >> k_kod;

					// ���������� ����� � ������
					k_kod = (k_kod - sumOldTime) + sumNewTime;

					// ��������� ������ ������� � string
					std::stringstream str;
					str << k_kod;
					str >> textline;

					// ��������� ����� "" � ������ ������
					textline.insert(0, version);
					std::string newTextline = textline;

					finn.close();

					// ��������� ���� ��� ��������� ������ ������							
					std::fstream fonn(fileName, std::ios::in | std::ios::out);
					// �������� �� ������� �����
					if (!fonn) { fonn.close(); return 0; }

					// ���������� ������ ���������� ����� � ������ ��������� �� ������ ������ ������	
					std::fstream::pos_type pos = fonn.tellg();

					// ������ ������ ������
					getline(fonn, textline);
						if (textline.length() == newTextline.length()) {
							// ������������ � ������ ������ � ������ ��
							fonn.seekp(pos);
							fonn << newTextline;
						}
					fonn.close();
	return 0;
}