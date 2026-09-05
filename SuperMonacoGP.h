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

#pragma once
#include <Windows.h>
#include "Helper.h"

namespace FFBPluginGUI {

	public ref class SuperMonacoGP : Helper
	{
	public:
		SuperMonacoGP(MetroForm^ obj1)
		{
			this->obj = obj1;
			this->EnsureDefaults();
			this->InitializeComponent();
		}

	private:
		void EnsureDefault(LPCTSTR key, LPCTSTR value)
		{
			TCHAR buffer[32] = {};
			GetPrivateProfileString(TEXT("Settings"), key, TEXT(""), buffer, _countof(buffer), TEXT(".\\FFBPlugin.ini"));
			if (buffer[0] == 0)
				WritePrivateProfileString(TEXT("Settings"), key, value, TEXT(".\\FFBPlugin.ini"));
		}

		void EnsureDefaults(void)
		{
			EnsureDefault(TEXT("FeedbackLengthSuperMonacoGP"), TEXT("500"));
			EnsureDefault(TEXT("MinForceSuperMonacoGP"), TEXT("0"));
			EnsureDefault(TEXT("MaxForceSuperMonacoGP"), TEXT("100"));
			EnsureDefault(TEXT("AlternativeMinForceLeftSuperMonacoGP"), TEXT("0"));
			EnsureDefault(TEXT("AlternativeMaxForceLeftSuperMonacoGP"), TEXT("-100"));
			EnsureDefault(TEXT("AlternativeMinForceRightSuperMonacoGP"), TEXT("0"));
			EnsureDefault(TEXT("AlternativeMaxForceRightSuperMonacoGP"), TEXT("100"));
			EnsureDefault(TEXT("SinePeriodSuperMonacoGP"), TEXT("100"));
			EnsureDefault(TEXT("SineFadePeriodSuperMonacoGP"), TEXT("0"));
			EnsureDefault(TEXT("SineStrengthSuperMonacoGP"), TEXT("100"));
			EnsureDefault(TEXT("EnableForceSpringEffectSuperMonacoGP"), TEXT("0"));
			EnsureDefault(TEXT("ForceSpringStrengthSuperMonacoGP"), TEXT("80"));
		}

		void InitializeComponent(void)
		{
			this->SuspendLayout();

			this->AutoAddLongTrackBarBlock("FeedbackLengthSuperMonacoGP", L"Feedback Length", 16, 10000, L"Length of a feedback command");

			this->AutoAddLongTextBox(L"Force Spring Effect", L"Force Spring effect over using default game spring");

			this->AutoAddShortCheckBox("EnableForceSpringEffectSuperMonacoGP", L"Force Spring Effect", L"Forces spring effect to work all the time");
			this->AutoAddShortTrackBarBlock("ForceSpringStrengthSuperMonacoGP", L"Forced Spring Strength", 0, 100, L"How strong the spring effect is when forced on");

			this->AutoAddLongTextBox(L"Modify how sine effect works", L"You can modify how you want effect");

			this->AutoAddShortTrackBarBlock("SinePeriodSuperMonacoGP", L"Sine Period", 0, 100, L"Period of Sine Effect");
			this->AutoAddShortTrackBarBlock("SineFadePeriodSuperMonacoGP", L"Sine Fade Period", 0, 100, L"Fade Period of Sine Effect");
			this->AutoAddShortTrackBarBlock("SineStrengthSuperMonacoGP", L"Sine Strength", 0, 100, L"Strength of Sine Effect");

			this->New2ColsPage();

			this->AutoAddComponent("GlobalForceHeader");
			this->AutoAddShortTrackBarBlock("MinForceSuperMonacoGP", L"Min Force", 0, 100, L"Minimum overrall force strength that will be applied to device");
			this->AutoAddShortTrackBarBlock("MaxForceSuperMonacoGP", L"Max Force", 0, 100, L"Maximum overrall force strength that will be applied to device");

			this->AutoAddComponent("AltGlobalForceHeader");
			this->AutoAddShortTrackBarBlock("AlternativeMinForceLeftSuperMonacoGP", L"Min Force Left", -100, 100, L"Minimum overrall left force strength that will be applied to device");
			this->AutoAddShortTrackBarBlock("AlternativeMaxForceLeftSuperMonacoGP", L"Max Force Left", -100, 100, L"Maximum overrall left force strength that will be applied to device");
			this->AutoAddShortTrackBarBlock("AlternativeMinForceRightSuperMonacoGP", L"Min Force Right", -100, 100, L"Minimum overrall right force strength that will be applied to device");
			this->AutoAddShortTrackBarBlock("AlternativeMaxForceRightSuperMonacoGP", L"Max Force Right", -100, 100, L"Maximum overrall right force strength that will be applied to device");

			this->Init();
		}
	};
}
