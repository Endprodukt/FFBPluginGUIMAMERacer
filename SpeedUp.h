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

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace MetroFramework::Controls;
	using namespace MetroFramework::Forms;

	public ref class SpeedUp : Helper
	{
	public:
		SpeedUp(MetroForm^ obj1)
		{
			this->obj = obj1;
			this->InitializeComponent();
		}

	private:
		void InitializeComponent(void)
		{
			this->SuspendLayout();

			this->AutoAddLongTextBox(L"Options", L"");
			this->AutoAddShortCheckBox("PowerModeSpeedUp", L"Power Mode", L"Enable to raise strength of lower values");
			this->AutoAddShortCheckBox("EnableDamperSpeedUp", L"Enable Damper", L"Enable damper to lower wheel oscillation");
			this->AutoAddLongTrackBarBlock("DamperStrengthSpeedUp", L"Damper Strength", 0, 100, L"Strength of damper effect to lower oscillation");
			this->AutoAddLongTrackBarBlock("FeedbackLengthSpeedUp", L"Feedback Length", 16, 10000, L"Length of a feedback command");

			this->AutoAddLongTextBox(L"Force Spring Effect", L"Force Spring effect over using default game spring");
			this->AutoAddShortCheckBox("EnableForceSpringEffectSpeedUp", L"Force Spring Effect", L"Forces spring effect to work all the time");
			this->AutoAddShortTrackBarBlock("ForceSpringStrengthSpeedUp", L"Forced Spring Strength", 0, 100, L"How strong the spring effect is when forced on");

			this->New2ColsPage();

			this->AutoAddComponent("GlobalForceHeader");
			this->AutoAddShortTrackBarBlock("MinForceSpeedUp", L"Min Force", 0, 100, L"Minimum overall force strength that will be applied to device");
			this->AutoAddShortTrackBarBlock("MaxForceSpeedUp", L"Max Force", 0, 100, L"Maximum overall force strength that will be applied to device");

			this->AutoAddComponent("AltGlobalForceHeader");
			this->AutoAddShortTrackBarBlock("AlternativeMinForceLeftSpeedUp", L"Min Force Left", -100, 100, L"Minimum overall left force strength that will be applied to device");
			this->AutoAddShortTrackBarBlock("AlternativeMaxForceLeftSpeedUp", L"Max Force Left", -100, 100, L"Maximum overall left force strength that will be applied to device");
			this->AutoAddShortTrackBarBlock("AlternativeMinForceRightSpeedUp", L"Min Force Right", -100, 100, L"Minimum overall right force strength that will be applied to device");
			this->AutoAddShortTrackBarBlock("AlternativeMaxForceRightSpeedUp", L"Max Force Right", -100, 100, L"Maximum overall right force strength that will be applied to device");

			this->Init();
		}
	};

	public ref class SpeedUpGuiIntegration abstract sealed
	{
	public:
		static void Install()
		{
			Application::Idle += gcnew EventHandler(&SpeedUpGuiIntegration::Application_Idle);
		}

	private:
		static void Application_Idle(Object^ sender, EventArgs^ e)
		{
			for each (Form ^ form in Application::OpenForms)
			{
				if (!String::Equals(form->Name, L"MameSelect", StringComparison::Ordinal))
					continue;

				if (form->Controls->ContainsKey(L"metroButtonSpeedUp"))
					continue;

				MetroButton^ speedUpButton = gcnew MetroButton();
				speedUpButton->Location = System::Drawing::Point(23, 822);
				speedUpButton->Name = L"metroButtonSpeedUp";
				speedUpButton->Size = System::Drawing::Size(216, 23);
				speedUpButton->TabStop = false;
				speedUpButton->Text = L"Speed Up";
				speedUpButton->UseSelectable = true;
				speedUpButton->Click += gcnew EventHandler(&SpeedUpGuiIntegration::SpeedUp_Click);
				form->Controls->Add(speedUpButton);

				List<MetroButton^>^ gameButtons = gcnew List<MetroButton^>();
				for each (Control ^ control in form->Controls)
				{
					MetroButton^ button = dynamic_cast<MetroButton^>(control);
					if (button != nullptr && button->Width == 216 && button->Height == 23 && button->Top >= 200)
						gameButtons->Add(button);
				}

				for (int i = 0; i < gameButtons->Count - 1; i++)
				{
					for (int j = i + 1; j < gameButtons->Count; j++)
					{
						if (String::Compare(gameButtons[i]->Text, gameButtons[j]->Text, StringComparison::OrdinalIgnoreCase) > 0)
						{
							MetroButton^ temp = gameButtons[i];
							gameButtons[i] = gameButtons[j];
							gameButtons[j] = temp;
						}
					}
				}

				for (int i = 0; i < gameButtons->Count; i++)
				{
					int column = i % 2;
					int row = i / 2;
					gameButtons[i]->Location = System::Drawing::Point(column == 0 ? 23 : 254, 213 + (row * 29));
				}
			}
		}

		static void SpeedUp_Click(Object^ sender, EventArgs^ e)
		{
			Control^ control = dynamic_cast<Control^>(sender);
			if (control == nullptr)
				return;

			MetroForm^ parent = dynamic_cast<MetroForm^>(control->FindForm());
			if (parent == nullptr)
				return;

			parent->Hide();
			SpeedUp^ speedUp = gcnew SpeedUp(parent);
			speedUp->ShowDialog();
		}
	};
}
