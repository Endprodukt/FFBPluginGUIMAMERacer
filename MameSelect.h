/*This file is part of FFB Arcade Plugin GUI.
FFB Arcade Plugin GUI is free software : you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
FFB Arcade Plugin GUI is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with FFB Arcade Plugin GUI.If not, see < https://www.gnu.org/licenses/>.
*/

#include <Windows.h>
#include <string>
#include "SDL.h"
#include "Helper.h"

#include "AceDriver.h"
#include "AceDriverVictoryLap.h"
#include "CaliforniaSpeed.h"
#include "ChaseBombers.h"
#include "CiscoHeat.h"
#include "CrusnUSA.h"
#include "CrusnWorld.h"
#include "DaytonaUSA.h"
#include "DirtDash.h"
#include "DoubleAxle.h"
#include "GTIClubMame.h"
#include "F1GrandPrixStar.h"
#include "F1GrandPrixStar2.h"
#include "HardDrivin.h"
#include "Hyperdrive.h"
#include "Indy500.h"
#include "MidnightRun.h"
#include "OffRoadChallenge.h"
#include "OutRun.h"
#include "OutRunners.h"
#include "OverRev.h"
#include "PowerDrift.h"
#include "RacingJam.h"
#include "RacingJam2.h"
#include "RaveRacer.h"
#include "RoadsEdge.h"
#include "SanFranciscoRush.h"
#include "SanFranciscoRushTheRock.h"
#include "SanFranciscoRush2049.h"
#include "SegaRally.h"
#include "STCC.h"
#include "SuperChase.h"
#include "SuperGT.h"
#include "ThrillDrive.h"
#include "TurboOutrun.h"
#include "VaporTrx.h"
#include "VirtuaRacing.h"
#include "WindingHeat.h"
#include "XtremeRally.h"
#include "CartFury.h"


namespace FFBPluginGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MameSelect
	/// </summary>
	public ref class MameSelect : public MetroFramework::Forms::MetroForm
	{
	public:
		MameSelect(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: MetroFramework::Controls::MetroButton^ metroButton14;
	public:
	private: MetroFramework::Controls::MetroButton^ metroButton4;
	private: MetroFramework::Controls::MetroButton^ metroButton15;
	private: MetroFramework::Controls::MetroButton^ metroButton16;
	private: MetroFramework::Controls::MetroButton^ metroButton17;
	private: MetroFramework::Controls::MetroButton^ metroButton18;
	private: MetroFramework::Controls::MetroButton^ metroButton19;
	private: MetroFramework::Controls::MetroButton^ metroButton20;
	private: MetroFramework::Controls::MetroButton^ metroButton21;
	private: MetroFramework::Controls::MetroButton^ metroButton22;
	private: MetroFramework::Controls::MetroButton^ metroButton23;
	private: MetroFramework::Controls::MetroButton^ metroButton24;
	private: MetroFramework::Controls::MetroButton^ metroButton25;
	private: MetroFramework::Controls::MetroButton^ metroButton26;
	private: MetroFramework::Controls::MetroButton^ metroButton27;
	private: MetroFramework::Controls::MetroButton^ metroButton28;
	private: MetroFramework::Controls::MetroButton^ metroButton29;
	private: MetroFramework::Controls::MetroButton^ metroButton30;
	private: MetroFramework::Controls::MetroButton^ metroButton31;
	private: MetroFramework::Controls::MetroButton^ metroButton32;
	private: MetroFramework::Controls::MetroButton^ metroButton33;
	private: MetroFramework::Controls::MetroButton^ metroButton34;
	private: MetroFramework::Controls::MetroTextBox^ metroTextBox2;
	private: MetroFramework::Controls::MetroComboBox^ metroComboBox1;
	private: MetroFramework::Controls::MetroTextBox^ metroTextBox3;
	private: MetroFramework::Controls::MetroCheckBox^ metroCheckBox2;
	private: MetroFramework::Controls::MetroCheckBox^ metroCheckBox3;
	private: MetroFramework::Controls::MetroCheckBox^ metroCheckBox4;
	private: MetroFramework::Controls::MetroButton^ metroButton35;
	private: MetroFramework::Controls::MetroButton^ metroButton36;
	private: MetroFramework::Controls::MetroButton^ metroButton37;
	private: MetroFramework::Controls::MetroButton^ metroButton38;
	private: MetroFramework::Controls::MetroButton^ metroButton39;
	private: MetroFramework::Controls::MetroButton^ metroButton41;
	private: MetroFramework::Controls::MetroButton^ metroButton42;
	private: MetroFramework::Controls::MetroButton^ metroButton43;
	private: MetroFramework::Controls::MetroButton^ metroButton44;
	private: MetroFramework::Controls::MetroButton^ metroButton45;
	private: MetroFramework::Controls::MetroCheckBox^ metroCheckBox5;
	private: MetroFramework::Controls::MetroButton^ metroButton40;
	private: MetroFramework::Controls::MetroButton^ metroButton46;
	private: MetroFramework::Controls::MetroCheckBox^ metroCheckBox6;
	private: MetroFramework::Controls::MetroButton^ metroButton47;
	private: MetroFramework::Controls::MetroButton^ metroButton48;
	private: MetroFramework::Controls::MetroButton^ metroButton49;
	private: MetroFramework::Controls::MetroButton^ metroButton50;
	private: MetroFramework::Controls::MetroButton^ metroButton51;
	private: MetroFramework::Controls::MetroButton^ metroButton52;
	private: MetroFramework::Controls::MetroButton^ metroButton53;
	private: MetroFramework::Controls::MetroButton^ metroButton54;
	private: MetroFramework::Controls::MetroButton^ metroButton55;
	private: MetroFramework::Controls::MetroButton^ metroButton56;
	private: MetroFramework::Controls::MetroButton^ metroButton57;
	private: MetroFramework::Controls::MetroButton^ metroButton58;


	public:

		MetroForm^ obj;
		MameSelect(MetroForm^ obj1)
		{
			obj = obj1;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MameSelect()
		{
			if (components)
			{
				delete components;
			}
		}
	private: MetroFramework::Controls::MetroButton^ metroButton1;
	public:
	private: MetroFramework::Controls::MetroTextBox^ metroTextBox1;
	private: MetroFramework::Controls::MetroButton^ metroButton2;
	private: MetroFramework::Controls::MetroButton^ metroButton3;
	//private: MetroFramework::Controls::MetroButton^ metroButton4;
	private: MetroFramework::Controls::MetroButton^ metroButton5;
	private: MetroFramework::Controls::MetroButton^ metroButton6;
	private: MetroFramework::Controls::MetroButton^ metroButton7;
	private: MetroFramework::Controls::MetroLink^ metroLink1;
	private: MetroFramework::Controls::MetroButton^ metroButton9;
	private: MetroFramework::Controls::MetroButton^ metroButton10;
	private: MetroFramework::Controls::MetroButton^ metroButton11;
	private: MetroFramework::Controls::MetroButton^ metroButton12;
	private: MetroFramework::Controls::MetroButton^ metroButton13;
	private: MetroFramework::Controls::MetroButton^ metroButton8;
	private: MetroFramework::Controls::MetroCheckBox^ metroCheckBox1;
		   
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->metroButton1 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroTextBox1 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroButton2 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton3 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton4 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton5 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton6 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton7 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroLink1 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroButton8 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton9 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton10 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton11 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton12 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton13 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton14 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton15 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton16 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton17 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton18 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton19 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton20 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton21 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton22 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton23 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton24 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton25 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton26 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton27 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton28 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton29 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton30 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton31 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton32 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton33 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton34 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroTextBox2 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroComboBox1 = (gcnew MetroFramework::Controls::MetroComboBox());
			this->metroTextBox3 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroCheckBox1 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox2 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox3 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox4 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroButton35 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton36 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton37 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton38 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton39 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton41 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton42 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton43 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton44 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton45 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroCheckBox5 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroButton40 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton46 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroCheckBox6 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroButton47 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton48 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton49 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton50 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton51 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton52 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton53 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton54 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton55 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton56 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton57 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton58 = (gcnew MetroFramework::Controls::MetroButton());

			this->SuspendLayout();
			// 
			// metroTextBox1
			// 
			// ... (Unveränderter Code für metroTextBox1)
			// 
			this->metroTextBox1->CustomButton->Image = nullptr;
			this->metroTextBox1->CustomButton->Location = System::Drawing::Point(425, 1);
			this->metroTextBox1->CustomButton->Name = L"";
			this->metroTextBox1->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox1->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox1->CustomButton->TabIndex = 1;
			this->metroTextBox1->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox1->CustomButton->UseSelectable = true;
			this->metroTextBox1->CustomButton->Visible = false;
			this->metroTextBox1->Lines = gcnew cli::array< System::String^  >(1) { L"Press Button to load individual game settings" };
			this->metroTextBox1->Location = System::Drawing::Point(23, 250);
			this->metroTextBox1->MaxLength = 32767;
			this->metroTextBox1->Name = L"metroTextBox1";
			this->metroTextBox1->PasswordChar = '\0';
			this->metroTextBox1->ReadOnly = true;
			this->metroTextBox1->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox1->SelectedText = L"";
			this->metroTextBox1->SelectionLength = 0;
			this->metroTextBox1->SelectionStart = 0;
			this->metroTextBox1->ShortcutsEnabled = true;
			this->metroTextBox1->Size = System::Drawing::Size(447, 23);
			this->metroTextBox1->TabIndex = 1;
			this->metroTextBox1->TabStop = false;
			this->metroTextBox1->Text = L"Press Button to load individual game settings";
			this->metroTextBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox1->UseSelectable = true;
			this->metroTextBox1->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox1->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			this->metroTextBox1->Click += gcnew System::EventHandler(this, &MameSelect::metroTextBox1_Click);
			// 
			// metroTextBox2
			// 
			// ... (Unveränderter Code für metroTextBox2)
			// 
			this->metroTextBox2->CustomButton->Image = nullptr;
			this->metroTextBox2->CustomButton->Location = System::Drawing::Point(425, 1);
			this->metroTextBox2->CustomButton->Name = L"";
			this->metroTextBox2->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox2->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox2->CustomButton->TabIndex = 1;
			this->metroTextBox2->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox2->CustomButton->UseSelectable = true;
			this->metroTextBox2->CustomButton->Visible = false;
			this->metroTextBox2->Lines = gcnew cli::array< System::String^  >(1) { L"Device GUID" };
			this->metroTextBox2->Location = System::Drawing::Point(23, 35);
			this->metroTextBox2->MaxLength = 32767;
			this->metroTextBox2->Name = L"metroTextBox2";
			this->metroTextBox2->PasswordChar = '\0';
			this->metroTextBox2->ReadOnly = true;
			this->metroTextBox2->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox2->SelectedText = L"";
			this->metroTextBox2->SelectionLength = 0;
			this->metroTextBox2->SelectionStart = 0;
			this->metroTextBox2->ShortcutsEnabled = true;
			this->metroTextBox2->Size = System::Drawing::Size(447, 23);
			this->metroTextBox2->TabIndex = 39;
			this->metroTextBox2->TabStop = false;
			this->metroTextBox2->Text = L"Device GUID";
			this->metroTextBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox2->UseSelectable = true;
			this->metroTextBox2->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox2->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroComboBox1
			// 
			// ... (Unveränderter Code für metroComboBox1)
			// 
			for (int i = 0; i < SDL_NumJoysticks(); i++)
			{
				SDL_Joystick* js1 = SDL_JoystickOpen(i);
				char buff[300];
				GetPrivateProfileStringA("Settings", "DeviceGUID", "No FFBPlugin.ini found", buff, _countof(buff), ".\\FFBPlugin.ini");
				String^ str = gcnew String(buff);
				String^ bah1 = gcnew String(SDL_JoystickName(js1));
				this->metroComboBox1->Text = str;
				this->metroComboBox1->Items->Add(bah1);
			}
			if (SDL_NumJoysticks() == 0)
			{
				this->metroComboBox1->Text = "SDL2 Cannot Detect Any Joystick";
			}
			this->metroComboBox1->Items->Add("Select no device");
			this->metroComboBox1->FormattingEnabled = true;
			this->metroComboBox1->ItemHeight = 23;
			this->metroComboBox1->Location = System::Drawing::Point(23, 64);
			this->metroComboBox1->Name = L"metroComboBox1";
			this->metroComboBox1->Size = System::Drawing::Size(447, 29);
			this->metroComboBox1->TabIndex = 3;
			this->metroComboBox1->TabStop = false;
			this->metroComboBox1->UseSelectable = true;
			this->metroComboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MameSelect::metroComboBox1_SelectedIndexChanged);
			// 
			// metroTextBox3
			// 
			// ... (Unveränderter Code für metroTextBox3)
			// 
			this->metroTextBox3->CustomButton->Image = nullptr;
			this->metroTextBox3->CustomButton->Location = System::Drawing::Point(425, 1);
			this->metroTextBox3->CustomButton->Name = L"";
			this->metroTextBox3->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox3->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox3->CustomButton->TabIndex = 1;
			this->metroTextBox3->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox3->CustomButton->UseSelectable = true;
			this->metroTextBox3->CustomButton->Visible = false;
			this->metroTextBox3->Lines = gcnew cli::array< System::String^  >(1) { L"Options" };
			this->metroTextBox3->Location = System::Drawing::Point(23, 99);
			this->metroTextBox3->MaxLength = 32767;
			this->metroTextBox3->Name = L"metroTextBox3";
			this->metroTextBox3->PasswordChar = '\0';
			this->metroTextBox3->ReadOnly = true;
			this->metroTextBox3->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox3->SelectedText = L"";
			this->metroTextBox3->SelectionLength = 0;
			this->metroTextBox3->SelectionStart = 0;
			this->metroTextBox3->ShortcutsEnabled = true;
			this->metroTextBox3->Size = System::Drawing::Size(447, 23);
			this->metroTextBox3->TabIndex = 40;
			this->metroTextBox3->TabStop = false;
			this->metroTextBox3->Text = L"Options";
			this->metroTextBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox3->UseSelectable = true;
			this->metroTextBox3->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox3->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroCheckBox1
			// 
			// ... (Unveränderter Code für metroCheckBox1)
			// 
			int EnableRumbleA = GetPrivateProfileInt(TEXT("Settings"), TEXT("EnableRumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox1->AutoSize = true;
			this->metroCheckBox1->Location = System::Drawing::Point(23, 128);
			this->metroCheckBox1->Name = L"metroCheckBox1";
			this->metroCheckBox1->Size = System::Drawing::Size(102, 15);
			this->metroCheckBox1->TabIndex = 6;
			this->metroCheckBox1->TabStop = false;
			this->metroCheckBox1->Text = L"Enable Rumble";
			this->metroCheckBox1->Checked = EnableRumbleA;
			this->metroCheckBox1->UseSelectable = true;
			this->metroCheckBox1->CheckedChanged += gcnew System::EventHandler(this, &MameSelect::metroCheckBox1_CheckedChanged);
			// 
			// metroCheckBox2
			// 
			// ... (Unveränderter Code für metroCheckBox2)
			// 
			int ReverseRumbleA = GetPrivateProfileInt(TEXT("Settings"), TEXT("ReverseRumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox2->AutoSize = true;
			this->metroCheckBox2->Location = System::Drawing::Point(193, 128);
			this->metroCheckBox2->Name = L"metroCheckBox2";
			this->metroCheckBox2->Size = System::Drawing::Size(107, 15);
			this->metroCheckBox2->TabIndex = 41;
			this->metroCheckBox2->TabStop = false;
			this->metroCheckBox2->Text = L"Reverse Rumble";
			this->metroCheckBox2->Checked = ReverseRumbleA;
			this->metroCheckBox2->UseSelectable = true;
			this->metroCheckBox2->CheckedChanged += gcnew System::EventHandler(this, &MameSelect::metroCheckBox2_CheckedChanged);
			// 
			// metroCheckBox3
			// 
			// ... (Unveränderter Code für metroCheckBox3)
			// 
			int AlternativeFFBA = GetPrivateProfileInt(TEXT("Settings"), TEXT("AlternativeFFB"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox3->AutoSize = true;
			this->metroCheckBox3->Location = System::Drawing::Point(368, 128);
			this->metroCheckBox3->Name = L"metroCheckBox3";
			this->metroCheckBox3->Size = System::Drawing::Size(102, 15);
			this->metroCheckBox3->TabIndex = 42;
			this->metroCheckBox3->TabStop = false;
			this->metroCheckBox3->Text = L"Alternative FFB";
			this->metroCheckBox3->Checked = AlternativeFFBA;
			this->metroCheckBox3->UseSelectable = true;
			this->metroCheckBox3->CheckedChanged += gcnew System::EventHandler(this, &MameSelect::metroCheckBox3_CheckedChanged);
			// 
			// metroCheckBox4
			// 
			// ... (Unveränderter Code für metroCheckBox4)
			// 
			int LoggingA = GetPrivateProfileInt(TEXT("Settings"), TEXT("Logging"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox4->AutoSize = true;
			this->metroCheckBox4->Location = System::Drawing::Point(368, 149);
			this->metroCheckBox4->Name = L"metroCheckBox4";
			this->metroCheckBox4->Size = System::Drawing::Size(105, 15);
			this->metroCheckBox4->TabIndex = 43;
			this->metroCheckBox4->TabStop = false;
			this->metroCheckBox4->Text = L"Enable Logging";
			this->metroCheckBox4->Checked = LoggingA;
			this->metroCheckBox4->UseSelectable = true;
			this->metroCheckBox4->CheckedChanged += gcnew System::EventHandler(this, &MameSelect::metroCheckBox4_CheckedChanged);
			// 
			// metroButton35
			// 
			// Hyperdrive
			this->metroButton35->Location = System::Drawing::Point(23, 482);
			this->metroButton35->Name = L"metroButton35";
			this->metroButton35->Size = System::Drawing::Size(216, 23);
			this->metroButton35->TabIndex = 44;
			this->metroButton35->TabStop = false;
			this->metroButton35->Text = L"Hyperdrive";
			this->metroButton35->UseSelectable = true;
			this->metroButton35->Click += gcnew System::EventHandler(this, &MameSelect::metroButton35_Click);
			// 
			// metroButton36
			// 
			// Vapor TRX
			this->metroButton36->Location = System::Drawing::Point(254, 772);
			this->metroButton36->Name = L"metroButton36";
			this->metroButton36->Size = System::Drawing::Size(216, 23);
			this->metroButton36->TabIndex = 45;
			this->metroButton36->TabStop = false;
			this->metroButton36->Text = L"Vapor TRX";
			this->metroButton36->UseSelectable = true;
			this->metroButton36->Click += gcnew System::EventHandler(this, &MameSelect::metroButton36_Click);
			// 
			// metroButton37
			// 
			// Daytona USA
			this->metroButton37->Location = System::Drawing::Point(254, 366);
			this->metroButton37->Name = L"metroButton37";
			this->metroButton37->Size = System::Drawing::Size(216, 23);
			this->metroButton37->TabIndex = 46;
			this->metroButton37->TabStop = false;
			this->metroButton37->Text = L"Daytona USA";
			this->metroButton37->UseSelectable = true;
			this->metroButton37->Click += gcnew System::EventHandler(this, &MameSelect::metroButton37_Click);
			// 
			// metroButton38
			// 
			// Indy 500
			this->metroButton38->Location = System::Drawing::Point(254, 482);
			this->metroButton38->Name = L"metroButton38";
			this->metroButton38->Size = System::Drawing::Size(216, 23);
			this->metroButton38->TabIndex = 47;
			this->metroButton38->TabStop = false;
			this->metroButton38->Text = L"Indy 500";
			this->metroButton38->UseSelectable = true;
			this->metroButton38->Click += gcnew System::EventHandler(this, &MameSelect::metroButton38_Click);
			// 
			// metroButton39
			// 
			// Rave Racer
			this->metroButton39->Location = System::Drawing::Point(23, 627);
			this->metroButton39->Name = L"metroButton39";
			this->metroButton39->Size = System::Drawing::Size(216, 23);
			this->metroButton39->TabIndex = 48;
			this->metroButton39->TabStop = false;
			this->metroButton39->Text = L"Rave Racer";
			this->metroButton39->UseSelectable = true;
			this->metroButton39->Click += gcnew System::EventHandler(this, &MameSelect::metroButton39_Click);
			// 
			// metroButton41
			// 
			// Super GT 24hr
			this->metroButton41->Location = System::Drawing::Point(23, 743);
			this->metroButton41->Name = L"metroButton41";
			this->metroButton41->Size = System::Drawing::Size(216, 23);
			this->metroButton41->TabIndex = 50;
			this->metroButton41->TabStop = false;
			this->metroButton41->Text = L"Super GT 24hr";
			this->metroButton41->UseSelectable = true;
			this->metroButton41->Click += gcnew System::EventHandler(this, &MameSelect::metroButton41_Click);
			// 
			// metroButton42
			// 
			// Super Chase Criminal Termination
			this->metroButton42->Location = System::Drawing::Point(254, 714);
			this->metroButton42->Name = L"metroButton42";
			this->metroButton42->Size = System::Drawing::Size(216, 23);
			this->metroButton42->TabIndex = 51;
			this->metroButton42->TabStop = false;
			this->metroButton42->Text = L"Super Chase Criminal Termination";
			this->metroButton42->UseSelectable = true;
			this->metroButton42->Click += gcnew System::EventHandler(this, &MameSelect::metroButton42_Click);
			// 
			// metroButton43
			// 
			// Dirt Dash
			this->metroButton43->Location = System::Drawing::Point(23, 395);
			this->metroButton43->Name = L"metroButton43";
			this->metroButton43->Size = System::Drawing::Size(216, 23);
			this->metroButton43->TabIndex = 52;
			this->metroButton43->TabStop = false;
			this->metroButton43->Text = L"Dirt Dash";
			this->metroButton43->UseSelectable = true;
			this->metroButton43->Click += gcnew System::EventHandler(this, &MameSelect::metroButton43_Click);
			// 
			// metroButton44
			// 
			// Ace Driver
			this->metroButton44->Location = System::Drawing::Point(23, 279);
			this->metroButton44->Name = L"metroButton44";
			this->metroButton44->Size = System::Drawing::Size(216, 23);
			this->metroButton44->TabIndex = 53;
			this->metroButton44->TabStop = false;
			this->metroButton44->Text = L"Ace Driver";
			this->metroButton44->UseSelectable = true;
			this->metroButton44->Click += gcnew System::EventHandler(this, &MameSelect::metroButton44_Click);
			// 
			// metroButton45
			// 
			// Ace Driver Victory Lap
			this->metroButton45->Location = System::Drawing::Point(254, 279);
			this->metroButton45->Name = L"metroButton45";
			this->metroButton45->Size = System::Drawing::Size(216, 23);
			this->metroButton45->TabIndex = 54;
			this->metroButton45->TabStop = false;
			this->metroButton45->Text = L"Ace Driver Victory Lap";
			this->metroButton45->UseSelectable = true;
			this->metroButton45->Click += gcnew System::EventHandler(this, &MameSelect::metroButton45_Click);
			// 
			// metroCheckBox5
			// 
			// ... (Unveränderter Code für metroCheckBox5)
			// 
			int EnableConstantInfA = GetPrivateProfileInt(TEXT("Settings"), TEXT("UseConstantInf"), 1, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox5->AutoSize = true;
			this->metroCheckBox5->Location = System::Drawing::Point(193, 149);
			this->metroCheckBox5->Name = L"metroCheckBox5";
			this->metroCheckBox5->Size = System::Drawing::Size(165, 15);
			this->metroCheckBox5->TabIndex = 55;
			this->metroCheckBox5->TabStop = false;
			this->metroCheckBox5->Text = L"Enable ConstantInf Mode";
			this->metroCheckBox5->Checked = EnableConstantInfA;
			this->metroCheckBox5->UseSelectable = true;
			this->metroCheckBox5->CheckedChanged += gcnew System::EventHandler(this, &MameSelect::metroCheckBox5_CheckedChanged);
			// 
			// metroButton40
			// 
			// Double Axle
			this->metroButton40->Location = System::Drawing::Point(254, 395);
			this->metroButton40->Name = L"metroButton40";
			this->metroButton40->Size = System::Drawing::Size(216, 23);
			this->metroButton40->TabIndex = 59;
			this->metroButton40->TabStop = false;
			this->metroButton40->Text = L"Double Axle";
			this->metroButton40->UseSelectable = true;
			this->metroButton40->Click += gcnew System::EventHandler(this, &MameSelect::metroButton40_Click_1);
			// 
			// metroButton46
			// 
			// Hard/Race Drivin'
			this->metroButton46->Location = System::Drawing::Point(254, 453);
			this->metroButton46->Name = L"metroButton46";
			this->metroButton46->Size = System::Drawing::Size(216, 23);
			this->metroButton46->TabIndex = 60;
			this->metroButton46->TabStop = false;
			this->metroButton46->Text = L"Hard/Race Drivin\'";
			this->metroButton46->UseSelectable = true;
			this->metroButton46->Click += gcnew System::EventHandler(this, &MameSelect::metroButton46_Click);
			// 
			// metroCheckBox6
			// 
			// ... (Unveränderter Code für metroCheckBox6)
			// 
			int EnableRumbleTriggersA = GetPrivateProfileInt(TEXT("Settings"), TEXT("EnableRumbleTriggers"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox6->AutoSize = true;
			this->metroCheckBox6->Location = System::Drawing::Point(23, 149);
			this->metroCheckBox6->Name = L"metroCheckBox6";
			this->metroCheckBox6->Size = System::Drawing::Size(146, 15);
			this->metroCheckBox6->TabIndex = 61;
			this->metroCheckBox6->TabStop = false;
			this->metroCheckBox6->Text = L"Enable Rumble Triggers";
			this->metroCheckBox6->Checked = EnableRumbleTriggersA;
			this->metroCheckBox6->UseSelectable = true;
			this->metroCheckBox6->CheckedChanged += gcnew System::EventHandler(this, &MameSelect::metroCheckBox6_CheckedChanged);
			// metroButton47
			// 
			// GTI Club
			this->metroButton47 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton47->Location = System::Drawing::Point(23, 453);
			this->metroButton47->Name = L"metroButton47";
			this->metroButton47->Size = System::Drawing::Size(216, 23);
			this->metroButton47->TabIndex = 62;
			this->metroButton47->TabStop = false;
			this->metroButton47->Text = L"GTI Club";
			this->metroButton47->UseSelectable = true;
			this->metroButton47->Click += gcnew System::EventHandler(this, &MameSelect::metroButton47_Click);
			// 
			// metroButton48
			// 
			// Winding Heat
			this->metroButton48 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton48->Location = System::Drawing::Point(254, 801);
			this->metroButton48->Name = L"metroButton48";
			this->metroButton48->Size = System::Drawing::Size(216, 23);
			this->metroButton48->TabIndex = 63;
			this->metroButton48->TabStop = false;
			this->metroButton48->Text = L"Winding Heat";
			this->metroButton48->UseSelectable = true;
			this->metroButton48->Click += gcnew System::EventHandler(this, &MameSelect::metroButton48_Click);
			// 
			// metroButton49
			// 
			// Midnight Run
			this->metroButton49 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton49->Location = System::Drawing::Point(23, 511);
			this->metroButton49->Name = L"metroButton49";
			this->metroButton49->Size = System::Drawing::Size(216, 23);
			this->metroButton49->TabIndex = 64;
			this->metroButton49->TabStop = false;
			this->metroButton49->Text = L"Midnight Run";
			this->metroButton49->UseSelectable = true;
			this->metroButton49->Click += gcnew System::EventHandler(this, &MameSelect::metroButton49_Click);
			// 
			// metroButton50
			// 
			// Sega Rally Championship
			this->metroButton50 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton50->Location = System::Drawing::Point(254, 685);
			this->metroButton50->Name = L"metroButton50";
			this->metroButton50->Size = System::Drawing::Size(216, 23);
			this->metroButton50->TabIndex = 65;
			this->metroButton50->TabStop = false;
			this->metroButton50->Text = L"Sega Rally Championship";
			this->metroButton50->UseSelectable = true;
			this->metroButton50->Click += gcnew System::EventHandler(this, &MameSelect::metroButton50_Click);
			//
			// metroButton51
			//
			// Over Rev
			this->metroButton51 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton51->Location = System::Drawing::Point(23, 569);
			this->metroButton51->Name = L"metroButton51";
			this->metroButton51->Size = System::Drawing::Size(216, 23);
			this->metroButton51->TabIndex = 66;
			this->metroButton51->TabStop = false;
			this->metroButton51->Text = L"Over Rev";
			this->metroButton51->UseSelectable = true;
			this->metroButton51->Click += gcnew System::EventHandler(this, &MameSelect::metroButton51_Click);
			//
			// metroButton52
			//
			// Sega Touring Car Championship
			this->metroButton52 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton52->Location = System::Drawing::Point(23, 714);
			this->metroButton52->Name = L"metroButton52";
			this->metroButton52->Size = System::Drawing::Size(216, 23);
			this->metroButton52->TabIndex = 67;
			this->metroButton52->TabStop = false;
			this->metroButton52->Text = L"Sega Touring Car Championship";
			this->metroButton52->UseSelectable = true;
			this->metroButton52->Click += gcnew System::EventHandler(this, &MameSelect::metroButton52_Click);
			//
			// metroButton53
			//
			// Xtreme Rally
			this->metroButton53 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton53->Location = System::Drawing::Point(23, 830);
			this->metroButton53->Name = L"metroButton53";
			this->metroButton53->Size = System::Drawing::Size(216, 23);
			this->metroButton53->TabIndex = 68;
			this->metroButton53->TabStop = false;
			this->metroButton53->Text = L"Xtreme Rally";
			this->metroButton53->UseSelectable = true;
			//this->metroButton53->Enabled = false;
			this->metroButton53->Click += gcnew System::EventHandler(this, &MameSelect::metroButton53_Click);
			//
			// metroButton54
			//
			// Roads Edge
			this->metroButton54 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton54->Location = System::Drawing::Point(254, 627);
			this->metroButton54->Name = L"metroButton54";
			this->metroButton54->Size = System::Drawing::Size(216, 23);
			this->metroButton54->TabIndex = 69;
			this->metroButton54->TabStop = false;
			this->metroButton54->Text = L"Roads Edge";
			this->metroButton54->UseSelectable = true;
			//this->metroButton54->Enabled = false;
			this->metroButton54->Click += gcnew System::EventHandler(this, &MameSelect::metroButton54_Click);
			//
			// metroButton55
			//
			// Thrill Drive
			this->metroButton55 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton55->Location = System::Drawing::Point(254, 743);
			this->metroButton55->Name = L"metroButton55";
			this->metroButton55->Size = System::Drawing::Size(216, 23);
			this->metroButton55->TabIndex = 70;
			this->metroButton55->TabStop = false;
			this->metroButton55->Text = L"Thrill Drive";
			this->metroButton55->UseSelectable = true;
			//this->metroButton55->Enabled = false;
			this->metroButton55->Click += gcnew System::EventHandler(this, &MameSelect::metroButton55_Click);
			//
			// metroButton56
			//
			// Racing Jam
			this->metroButton56 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton56->Location = System::Drawing::Point(23, 598);
			this->metroButton56->Name = L"metroButton56";
			this->metroButton56->Size = System::Drawing::Size(216, 23);
			this->metroButton56->TabIndex = 71;
			this->metroButton56->TabStop = false;
			this->metroButton56->Text = L"Racing Jam";
			this->metroButton56->UseSelectable = true;
			//this->metroButton56->Enabled = false;
			this->metroButton56->Click += gcnew System::EventHandler(this, &MameSelect::metroButton56_Click);
			//
			// metroButton57
			//
			// Racing Jam 2
			this->metroButton57 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton57->Location = System::Drawing::Point(254, 598);
			this->metroButton57->Name = L"metroButton57";
			this->metroButton57->Size = System::Drawing::Size(216, 23);
			this->metroButton57->TabIndex = 72;
			this->metroButton57->TabStop = false;
			this->metroButton57->Text = L"Racing Jam 2";
			this->metroButton57->UseSelectable = true;
			//this->metroButton57->Enabled = false;
			this->metroButton57->Click += gcnew System::EventHandler(this, &MameSelect::metroButton57_Click);
			//
			// metroButton58
			//
			// Cart Fury
			this->metroButton58 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton58->Location = System::Drawing::Point(254, 830);
			this->metroButton58->Name = L"metroButton58";
			this->metroButton58->Size = System::Drawing::Size(216, 23);
			this->metroButton58->TabIndex = 72;
			this->metroButton58->TabStop = false;
			this->metroButton58->Text = L"Cart Fury";
			this->metroButton58->UseSelectable = true;
			//this->metroButton58->Enabled = false;
			this->metroButton58->Click += gcnew System::EventHandler(this, &MameSelect::metroButton58_Click);
			// 
			// metroButton4
			// 
			// California Speed
			this->metroButton4->Location = System::Drawing::Point(23, 308);
			this->metroButton4->Name = L"metroButton4";
			this->metroButton4->Size = System::Drawing::Size(216, 23);
			this->metroButton4->TabIndex = 7;
			this->metroButton4->TabStop = false;
			this->metroButton4->Text = L"California Speed";
			this->metroButton4->UseSelectable = true;
			this->metroButton4->Click += gcnew System::EventHandler(this, &MameSelect::metroButton4_Click);
			// 
			// metroButton18
			// 
			// Outrun
			this->metroButton18->Location = System::Drawing::Point(23, 540);
			this->metroButton18->Name = L"metroButton18";
			this->metroButton18->Size = System::Drawing::Size(216, 23);
			this->metroButton18->TabIndex = 22;
			this->metroButton18->TabStop = false;
			this->metroButton18->Text = L"Outrun";
			this->metroButton18->UseSelectable = true;
			this->metroButton18->Click += gcnew System::EventHandler(this, &MameSelect::metroButton18_Click);
			// 
			// metroButton19
			// 
			// Outrunners
			this->metroButton19->Location = System::Drawing::Point(254, 540);
			this->metroButton19->Name = L"metroButton19";
			this->metroButton19->Size = System::Drawing::Size(216, 23);
			this->metroButton19->TabIndex = 23;
			this->metroButton19->TabStop = false;
			this->metroButton19->Text = L"Outrunners";
			this->metroButton19->UseSelectable = true;
			this->metroButton19->Click += gcnew System::EventHandler(this, &MameSelect::metroButton19_Click);
			// 
			// metroButton21
			// 
			// Power Drift
			this->metroButton21->Location = System::Drawing::Point(254, 569);
			this->metroButton21->Name = L"metroButton21";
			this->metroButton21->Size = System::Drawing::Size(216, 23);
			this->metroButton21->TabIndex = 25;
			this->metroButton21->TabStop = false;
			this->metroButton21->Text = L"Power Drift";
			this->metroButton21->UseSelectable = true;
			this->metroButton21->Click += gcnew System::EventHandler(this, &MameSelect::metroButton21_Click);
			// 
			// metroButton24
			// 
			// San Francisco Rush
			this->metroButton24->Location = System::Drawing::Point(23, 656);
			this->metroButton24->Name = L"metroButton24";
			this->metroButton24->Size = System::Drawing::Size(216, 23);
			this->metroButton24->TabIndex = 28;
			this->metroButton24->TabStop = false;
			this->metroButton24->Text = L"San Francisco Rush";
			this->metroButton24->UseSelectable = true;
			this->metroButton24->Click += gcnew System::EventHandler(this, &MameSelect::metroButton24_Click);
			// 
			// metroButton25
			// 
			// San Francisco Rush: The Rock
			this->metroButton25->Location = System::Drawing::Point(254, 656);
			this->metroButton25->Name = L"metroButton25";
			this->metroButton25->Size = System::Drawing::Size(216, 23);
			this->metroButton25->TabIndex = 29;
			this->metroButton25->TabStop = false;
			this->metroButton25->Text = L"San Francisco Rush: The Rock";
			this->metroButton25->UseSelectable = true;
			this->metroButton25->Click += gcnew System::EventHandler(this, &MameSelect::metroButton25_Click);
			// 
			// metroButton26
			// 
			// San Francisco Rush 2049
			this->metroButton26->Location = System::Drawing::Point(23, 685);
			this->metroButton26->Name = L"metroButton26";
			this->metroButton26->Size = System::Drawing::Size(216, 23);
			this->metroButton26->TabIndex = 30;
			this->metroButton26->TabStop = false;
			this->metroButton26->Text = L"San Francisco Rush 2049";
			this->metroButton26->UseSelectable = true;
			this->metroButton26->Click += gcnew System::EventHandler(this, &MameSelect::metroButton26_Click);
			// 
			// metroButton30
			// 
			// Turbo Outrun
			this->metroButton30->Location = System::Drawing::Point(23, 772);
			this->metroButton30->Name = L"metroButton30";
			this->metroButton30->Size = System::Drawing::Size(216, 23);
			this->metroButton30->TabIndex = 34;
			this->metroButton30->TabStop = false;
			this->metroButton30->Text = L"Turbo Outrun";
			this->metroButton30->UseSelectable = true;
			this->metroButton30->Click += gcnew System::EventHandler(this, &MameSelect::metroButton30_Click);
			// 
			// metroButton33
			// 
			// Virtua Racing
			this->metroButton33->Location = System::Drawing::Point(23, 801);
			this->metroButton33->Name = L"metroButton33";
			this->metroButton33->Size = System::Drawing::Size(216, 23);
			this->metroButton33->TabIndex = 37;
			this->metroButton33->TabStop = false;
			this->metroButton33->Text = L"Virtua Racing";
			this->metroButton33->UseSelectable = true;
			this->metroButton33->Click += gcnew System::EventHandler(this, &MameSelect::metroButton33_Click);
			// 
			// metroButton7
			// 
			// Cruis'n USA
			this->metroButton7->Location = System::Drawing::Point(254, 337);
			this->metroButton7->Name = L"metroButton7";
			this->metroButton7->Size = System::Drawing::Size(216, 23);
			this->metroButton7->TabIndex = 10;
			this->metroButton7->TabStop = false;
			this->metroButton7->Text = L"Cruis\'n USA";
			this->metroButton7->UseSelectable = true;
			this->metroButton7->Click += gcnew System::EventHandler(this, &MameSelect::metroButton7_Click);
			// 
			// metroButton8
			// 
			// Cruis'n World
			this->metroButton8->Location = System::Drawing::Point(23, 366);
			this->metroButton8->Name = L"metroButton8";
			this->metroButton8->Size = System::Drawing::Size(216, 23);
			this->metroButton8->TabIndex = 12;
			this->metroButton8->TabStop = false;
			this->metroButton8->Text = L"Cruis\'n World";
			this->metroButton8->UseSelectable = true;
			this->metroButton8->Click += gcnew System::EventHandler(this, &MameSelect::metroButton8_Click);
			// 
			// metroButton5
			// 
			// Chase Bombers
			this->metroButton5->Location = System::Drawing::Point(254, 308);
			this->metroButton5->Name = L"metroButton5";
			this->metroButton5->Size = System::Drawing::Size(216, 23);
			this->metroButton5->TabIndex = 8;
			this->metroButton5->TabStop = false;
			this->metroButton5->Text = L"Chase Bombers";
			this->metroButton5->UseSelectable = true;
			this->metroButton5->Click += gcnew System::EventHandler(this, &MameSelect::metroButton5_Click);
			// 
			// metroButton6
			// 
			// Cisco Heat
			this->metroButton6->Location = System::Drawing::Point(23, 337);
			this->metroButton6->Name = L"metroButton6";
			this->metroButton6->Size = System::Drawing::Size(216, 23);
			this->metroButton6->TabIndex = 9;
			this->metroButton6->TabStop = false;
			this->metroButton6->Text = L"Cisco Heat";
			this->metroButton6->UseSelectable = true;
			this->metroButton6->Click += gcnew System::EventHandler(this, &MameSelect::metroButton6_Click);
			// 
			// metroButton9
			// 
			// F-1 Grand Prix Star
			this->metroButton9->Location = System::Drawing::Point(23, 424);
			this->metroButton9->Name = L"metroButton9";
			this->metroButton9->Size = System::Drawing::Size(216, 23);
			this->metroButton9->TabIndex = 13;
			this->metroButton9->TabStop = false;
			this->metroButton9->Text = L"F-1 Grand Prix Star";
			this->metroButton9->UseSelectable = true;
			this->metroButton9->Click += gcnew System::EventHandler(this, &MameSelect::metroButton9_Click);
			// 
			// metroButton10
			// 
			// F-1 Grand Prix Star II
			this->metroButton10->Location = System::Drawing::Point(254, 424);
			this->metroButton10->Name = L"metroButton10";
			this->metroButton10->Size = System::Drawing::Size(216, 23);
			this->metroButton10->TabIndex = 14;
			this->metroButton10->TabStop = false;
			this->metroButton10->Text = L"F-1 Grand Prix Star II";
			this->metroButton10->UseSelectable = true;
			this->metroButton10->Click += gcnew System::EventHandler(this, &MameSelect::metroButton10_Click);
			// 
			// metroButton15
			// 
			// Off Road Challenge
			this->metroButton15->Location = System::Drawing::Point(254, 511);
			this->metroButton15->Name = L"metroButton15";
			this->metroButton15->Size = System::Drawing::Size(216, 23);
			this->metroButton15->TabIndex = 19;
			this->metroButton15->TabStop = false;
			this->metroButton15->Text = L"Off Road Challenge";
			this->metroButton15->UseSelectable = true;
			this->metroButton15->Click += gcnew System::EventHandler(this, &MameSelect::metroButton15_Click);


			// 
			// MameSelect
			// 
			// ... (Unveränderter Code für MameSelect)
			// 
			int AutoScrollGUI = GetPrivateProfileInt(TEXT("Settings"), TEXT("AutoScrollGUI"), 0, TEXT(".\\FFBPlugin.ini"));
			if (AutoScrollGUI == 1)
			{
				this->AutoScroll = true;
			}
			this->ClientSize = System::Drawing::Size(493, 868); // Größe angepasst, um alle 39 Buttons in 2 Spalten (20 links, 19 rechts) anzuzeigen, der letzte Button ist bei Y=830+23=853, also 868 als Höhe
			this->Controls->Add(this->metroCheckBox6);
			this->Controls->Add(this->metroButton46);
			this->Controls->Add(this->metroButton40);
			this->Controls->Add(this->metroCheckBox5);
			this->Controls->Add(this->metroButton45);
			this->Controls->Add(this->metroButton44);
			this->Controls->Add(this->metroButton43);
			this->Controls->Add(this->metroButton42);
			this->Controls->Add(this->metroButton41);
			this->Controls->Add(this->metroButton39);
			this->Controls->Add(this->metroButton38);
			this->Controls->Add(this->metroButton37);
			this->Controls->Add(this->metroButton36);
			this->Controls->Add(this->metroButton35);
			this->Controls->Add(this->metroCheckBox4);
			this->Controls->Add(this->metroCheckBox3);
			this->Controls->Add(this->metroCheckBox2);
			this->Controls->Add(this->metroTextBox3);
			this->Controls->Add(this->metroTextBox2);
			// this->Controls->Add(this->metroButton34); // Nicht verwendet
			// this->Controls->Add(this->metroButton31); // Nicht verwendet
			// this->Controls->Add(this->metroButton27); // Nicht verwendet
			this->Controls->Add(this->metroButton26);
			this->Controls->Add(this->metroButton25);
			this->Controls->Add(this->metroButton24);
			// this->Controls->Add(this->metroButton22); // Nicht verwendet
			// this->Controls->Add(this->metroButton20); // Nicht verwendet
			this->Controls->Add(this->metroButton19);
			// this->Controls->Add(this->metroButton16); // Nicht verwendet
			// this->Controls->Add(this->metroButton11); // Nicht verwendet
			this->Controls->Add(this->metroButton10);
			this->Controls->Add(this->metroButton9);
			this->Controls->Add(this->metroButton8);
			this->Controls->Add(this->metroLink1);
			this->Controls->Add(this->metroButton7);
			this->Controls->Add(this->metroButton6);
			this->Controls->Add(this->metroButton5);
			this->Controls->Add(this->metroTextBox1);
			this->Controls->Add(this->metroComboBox1);
			this->Controls->Add(this->metroCheckBox1);
			this->Controls->Add(this->metroButton47);
			this->Controls->Add(this->metroButton48);
			this->Controls->Add(this->metroButton49);
			this->Controls->Add(this->metroButton50);
			this->Controls->Add(this->metroButton51);
			this->Controls->Add(this->metroButton52);
			this->Controls->Add(this->metroButton53);
			this->Controls->Add(this->metroButton54);
			this->Controls->Add(this->metroButton55);
			this->Controls->Add(this->metroButton56);
			this->Controls->Add(this->metroButton57);
			this->Controls->Add(this->metroButton58);
			this->Controls->Add(this->metroButton4);
			this->Controls->Add(this->metroButton18);
			this->Controls->Add(this->metroButton19);
			this->Controls->Add(this->metroButton21);
			this->Controls->Add(this->metroButton24);
			this->Controls->Add(this->metroButton25);
			this->Controls->Add(this->metroButton26);
			this->Controls->Add(this->metroButton30);
			this->Controls->Add(this->metroButton33);
			this->Controls->Add(this->metroButton15);



			this->MaximizeBox = false;
			this->Name = L"MameSelect";
			this->Resizable = false;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MameSelect::Form1_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
	{
		if (e->CloseReason == CloseReason::UserClosing)
		{		
			SDL_Quit();
			Application::Exit();
		}
	}
	private: System::Void metroCheckBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) //Enable Rumble
	{		
		if (metroCheckBox1->Checked)
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("EnableRumble"), TEXT("1"), TEXT(".\\FFBPlugin.ini"));
		}
		else
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("EnableRumble"), TEXT("0"), TEXT(".\\FFBPlugin.ini"));
		}
	}
	private: System::Void metroCheckBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e)//Reverse Rumble
	{
		if (metroCheckBox2->Checked)
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("ReverseRumble"), TEXT("1"), TEXT(".\\FFBPlugin.ini"));
		}
		else
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("ReverseRumble"), TEXT("0"), TEXT(".\\FFBPlugin.ini"));
		}
	}
	private: System::Void metroCheckBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e)//Alternative FFB
	{
		if (metroCheckBox3->Checked)
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("AlternativeFFB"), TEXT("1"), TEXT(".\\FFBPlugin.ini"));
		}
		else
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("AlternativeFFB"), TEXT("0"), TEXT(".\\FFBPlugin.ini"));
		}
	}
	private: System::Void metroCheckBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e)//Enable Logging
	{
		if (metroCheckBox4->Checked)
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("Logging"), TEXT("1"), TEXT(".\\FFBPlugin.ini"));
		}
		else
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("Logging"), TEXT("0"), TEXT(".\\FFBPlugin.ini"));
		}
	}
	private: System::Void metroCheckBox5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) //ConstantInf
	{
		WritePrivateProfileString(
			TEXT("Settings"),
			TEXT("UseConstantInf"),
			metroCheckBox5->Checked ? TEXT("1") : TEXT("0"),
			TEXT(".\\FFBPlugin.ini")
		);
	}
	private: System::Void metroComboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (metroComboBox1->SelectedIndex == 0)
		{
			SDL_Joystick* js = SDL_JoystickOpen(0);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox1->Text = str;
			{
				WritePrivateProfileStringA("Settings", "DeviceGUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox1->SelectedIndex == 1)
		{
			SDL_Joystick* js = SDL_JoystickOpen(1);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox1->Text = str;
			{
				WritePrivateProfileStringA("Settings", "DeviceGUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox1->SelectedIndex == 2)
		{
			SDL_Joystick* js = SDL_JoystickOpen(2);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox1->Text = str;
			{
				WritePrivateProfileStringA("Settings", "DeviceGUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox1->SelectedIndex == 3)
		{
			SDL_Joystick* js = SDL_JoystickOpen(3);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox1->Text = str;
			{
				WritePrivateProfileStringA("Settings", "DeviceGUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox1->SelectedIndex == 4)
		{
			SDL_Joystick* js = SDL_JoystickOpen(4);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox1->Text = str;
			{
				WritePrivateProfileStringA("Settings", "DeviceGUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox1->SelectedIndex == 5)
		{
			SDL_Joystick* js = SDL_JoystickOpen(5);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox1->Text = str;
			{
				WritePrivateProfileStringA("Settings", "DeviceGUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox1->SelectedIndex == 6)
		{
			SDL_Joystick* js = SDL_JoystickOpen(6);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox1->Text = str;
			{
				WritePrivateProfileStringA("Settings", "DeviceGUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox1->SelectedIndex == 7)
		{
			SDL_Joystick* js = SDL_JoystickOpen(7);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox1->Text = str;
			{
				WritePrivateProfileStringA("Settings", "DeviceGUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox1->SelectedIndex == 8)
		{
			SDL_Joystick* js = SDL_JoystickOpen(8);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox1->Text = str;
			{
				WritePrivateProfileStringA("Settings", "DeviceGUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox1->SelectedIndex == 9)
		{
			SDL_Joystick* js = SDL_JoystickOpen(9);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox1->Text = str;
			{
				WritePrivateProfileStringA("Settings", "DeviceGUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox1->SelectedIndex == 10)
		{
			SDL_Joystick* js = SDL_JoystickOpen(10);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox1->Text = str;
			{
				WritePrivateProfileStringA("Settings", "DeviceGUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox1->SelectedIndex == 11)
		{
			SDL_Joystick* js = SDL_JoystickOpen(11);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox1->Text = str;
			{
				WritePrivateProfileStringA("Settings", "DeviceGUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox1->SelectedIndex == 12)
		{
			SDL_Joystick* js = SDL_JoystickOpen(12);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox1->Text = str;
			{
				WritePrivateProfileStringA("Settings", "DeviceGUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox1->SelectedIndex == 13)
		{
			SDL_Joystick* js = SDL_JoystickOpen(13);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox1->Text = str;
			{
				WritePrivateProfileStringA("Settings", "DeviceGUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox1->SelectedIndex == 14)
		{
			SDL_Joystick* js = SDL_JoystickOpen(14);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox1->Text = str;
			{
				WritePrivateProfileStringA("Settings", "DeviceGUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox1->SelectedIndex == 15)
		{
			SDL_Joystick* js = SDL_JoystickOpen(15);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox1->Text = str;
			{
				WritePrivateProfileStringA("Settings", "DeviceGUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox1->SelectedIndex == 16)
		{
			SDL_Joystick* js = SDL_JoystickOpen(16);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox1->Text = str;
			{
				WritePrivateProfileStringA("Settings", "DeviceGUID", text, ".\\FFBPlugin.ini");
			}
		}
	}	   
	private: System::Void metroTextBox1_Click(System::Object^ sender, System::EventArgs^ e)
	{


	}
	private: System::Void metroButton4_Click(System::Object^ sender, System::EventArgs^ e) //California Speed
	{
		this->Hide();
		CaliforniaSpeed^ obj1 = gcnew CaliforniaSpeed(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton5_Click(System::Object^ sender, System::EventArgs^ e) //Chase Bombers
	{
		this->Hide();
		ChaseBombers^ obj1 = gcnew ChaseBombers(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton6_Click(System::Object^ sender, System::EventArgs^ e) //Cisco Heat
	{
		this->Hide();
		CiscoHeat^ obj1 = gcnew CiscoHeat(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton7_Click(System::Object^ sender, System::EventArgs^ e) //Crusn USA
	{
		this->Hide();
		CrusnUSA^ obj1 = gcnew CrusnUSA(this);
		obj1->ShowDialog();
	}
	private: System::Void metroLink1_Click(System::Object^ sender, System::EventArgs^ e) //Go Back To Previous Menu
	{
		this->Hide();
		obj->Show();
	}
	private: System::Void metroButton8_Click(System::Object^ sender, System::EventArgs^ e) //Crusn World
	{
		this->Hide();
		CrusnWorld^ obj1 = gcnew CrusnWorld(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton9_Click(System::Object^ sender, System::EventArgs^ e) //F1 GP Star
	{
		this->Hide();
		F1GrandPrixStar^ obj1 = gcnew F1GrandPrixStar(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton10_Click(System::Object^ sender, System::EventArgs^ e) //F1 GP Star 2
	{
		this->Hide();
		F1GrandPrixStar2^ obj1 = gcnew F1GrandPrixStar2(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton15_Click(System::Object^ sender, System::EventArgs^ e)//Off Road Challenge
	{
		this->Hide();
		OffRoadChallenge^ obj1 = gcnew OffRoadChallenge(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton18_Click(System::Object^ sender, System::EventArgs^ e)//Outrun
	{
		this->Hide();
		Outrun^ obj1 = gcnew Outrun(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton19_Click(System::Object^ sender, System::EventArgs^ e)//OutRunners 
	{
		this->Hide();
		OutRunners^ obj1 = gcnew OutRunners(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton21_Click(System::Object^ sender, System::EventArgs^ e)//Power Drift
	{
		this->Hide();
		PowerDrift^ obj1 = gcnew PowerDrift(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton24_Click(System::Object^ sender, System::EventArgs^ e)//San Francisco Rush
	{
		this->Hide();
		SanFranciscoRush^ obj1 = gcnew SanFranciscoRush(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton25_Click(System::Object^ sender, System::EventArgs^ e)//San Francisco Rush The Rock
	{
		this->Hide();
		SanFranciscoRushTheRock^ obj1 = gcnew SanFranciscoRushTheRock(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton26_Click(System::Object^ sender, System::EventArgs^ e)//San Francisco Rush 2049
	{
		this->Hide();
		SanFranciscoRush2049^ obj1 = gcnew SanFranciscoRush2049(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton30_Click(System::Object^ sender, System::EventArgs^ e)//Turbo Outrun
	{
		this->Hide();
		TurboOutrun^ obj1 = gcnew TurboOutrun(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton33_Click(System::Object^ sender, System::EventArgs^ e)//Virtua Racing
	{
		this->Hide();
		VirtuaRacing^ obj1 = gcnew VirtuaRacing(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton35_Click(System::Object^ sender, System::EventArgs^ e) //Hyperdrive
	{
		this->Hide();
		Hyperdrive^ obj1 = gcnew Hyperdrive(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton36_Click(System::Object^ sender, System::EventArgs^ e) //Vapor TRX
	{
		this->Hide();
		VaporTrx^ obj1 = gcnew VaporTrx(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton37_Click(System::Object^ sender, System::EventArgs^ e) //Daytona USA
	{
		this->Hide();
		DaytonaUSA^ obj1 = gcnew DaytonaUSA(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton38_Click(System::Object^ sender, System::EventArgs^ e) //Indy 500
	{
		this->Hide();
		Indy500^ obj1 = gcnew Indy500(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton39_Click(System::Object^ sender, System::EventArgs^ e) //Rave Racer
	{
		this->Hide();
		RaveRacer^ obj1 = gcnew RaveRacer(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton40_Click(System::Object^ sender, System::EventArgs^ e) //Sega Touring Car Championship
	{
		this->Hide();
		STCC^ obj1 = gcnew STCC(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton41_Click(System::Object^ sender, System::EventArgs^ e) //Super GT 24hr
	{
		this->Hide();
		SuperGT^ obj1 = gcnew SuperGT(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton42_Click(System::Object^ sender, System::EventArgs^ e) //Super Chase Criminal Termination
	{
		this->Hide();
		SuperChase^ obj1 = gcnew SuperChase(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton43_Click(System::Object^ sender, System::EventArgs^ e) //Dirt Dash
	{
		this->Hide();
		DirtDash^ obj1 = gcnew DirtDash(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton44_Click(System::Object^ sender, System::EventArgs^ e) //Ace Driver
	{
		this->Hide();
		AceDriver^ obj1 = gcnew AceDriver(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton45_Click(System::Object^ sender, System::EventArgs^ e) //Ace Driver Victory Lap
	{
		this->Hide();
		AceDriverVictoryLap^ obj1 = gcnew AceDriverVictoryLap(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton47_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Hide();
		GTIClubMame^ form = gcnew GTIClubMame(this);
		form->ShowDialog();
	}
	private: System::Void metroButton48_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Hide();
		WindingHeat^ form = gcnew WindingHeat(this);
		form->ShowDialog();
	}
	private: System::Void metroButton49_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Hide();
		MidnightRun^ form = gcnew MidnightRun(this);
		form->ShowDialog();
	}
	private: System::Void metroButton50_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Hide();
		SegaRally^ form = gcnew SegaRally(this);
		form->ShowDialog();
	}
	private: System::Void metroButton51_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Hide();
		OverRev^ form = gcnew OverRev(this);
		form->ShowDialog();
	}
	private: System::Void metroButton52_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Hide();
		STCC^ form = gcnew STCC(this);
		form->ShowDialog();
	}
	private: System::Void metroButton53_Click(System::Object^ sender, System::EventArgs^ e)
	{
	   this->Hide();
	   XtremeRally^ form = gcnew XtremeRally(this);
	   form->ShowDialog();
	}
	private: System::Void metroButton54_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Hide();
		RoadsEdge^ form = gcnew RoadsEdge(this);
		form->ShowDialog();
	}
	private: System::Void metroButton55_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Hide();
		ThrillDrive^ form = gcnew ThrillDrive(this);
		form->ShowDialog();
	}
	private: System::Void metroButton56_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Hide();
		RacingJam^ form = gcnew RacingJam(this);
		form->ShowDialog();
	}
	private: System::Void metroButton57_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Hide();
		RacingJam2^ form = gcnew RacingJam2(this);
		form->ShowDialog();
	}
	private: System::Void metroButton58_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Hide();
		CartFury^ form = gcnew CartFury(this);
		form->ShowDialog();
	}
	private: System::Void metroButton40_Click_1(System::Object^ sender, System::EventArgs^ e) //Double Axle
	{
		this->Hide();
		DoubleAxle^ obj1 = gcnew DoubleAxle(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton46_Click(System::Object^ sender, System::EventArgs^ e) //Hard/Race Drivin'
	{
		this->Hide();
		HardDrivin^ obj1 = gcnew HardDrivin(this);
		obj1->ShowDialog();
	}

	private: System::Void metroCheckBox6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) //Enable Rumble Triggers
	{
		if (metroCheckBox6->Checked)
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("EnableRumbleTriggers"), TEXT("1"), TEXT(".\\FFBPlugin.ini"));
		}
		else
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("EnableRumbleTriggers"), TEXT("0"), TEXT(".\\FFBPlugin.ini"));
		}
	}
};
}
