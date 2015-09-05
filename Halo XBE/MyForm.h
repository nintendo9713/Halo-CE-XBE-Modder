#pragma once

namespace HaloXBE {

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void){InitializeComponent();}

		System::IO::MemoryStream^ open_file = gcnew System::IO::MemoryStream();
		System::IO::Stream^ read_file;
		System::IO::Stream^ write_file;
	private:
		System::Windows::Forms::TextBox^  textBox1;
		System::Windows::Forms::TextBox^  textBox2;
		System::Windows::Forms::TextBox^  textBox4;
		System::Windows::Forms::Label^  label1;
		System::Windows::Forms::Label^  label2;
		System::Windows::Forms::Label^  label3;
		System::Windows::Forms::Button^  button1;
		System::Windows::Forms::Button^  button2;
		System::Windows::Forms::Button^  button3;
		System::Windows::Forms::Button^  button4;
		System::Windows::Forms::PictureBox^  pictureBox1;
		System::ComponentModel::Container ^components;
			 
	protected:
		~MyForm(){components ? delete components : 0;}

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();

			// button1
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(12, 43);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 25);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Save .xbe";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);

			// pictureBox1
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(118, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(136, 133);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;

			// button2
			this->button2->Location = System::Drawing::Point(12, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 25);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Load .xbe";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			
			// textBox1
			this->textBox1->Location = System::Drawing::Point(261, 68);
			this->textBox2->MaxLength = 20;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 5;
			
			// textBox2
			this->textBox2->Location = System::Drawing::Point(260, 26);
			this->textBox2->MaxLength = 4;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 4;
			
			// textBox4
			this->textBox4->Location = System::Drawing::Point(260, 110);
			this->textBox4->MaxLength = 5;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 6;
			
			// button3
			this->button3->Location = System::Drawing::Point(12, 74);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 25);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Close .xbe";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			
			// label1
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(261, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(30, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Title:";
			 
			// label2
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(261, 91);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Map Folder:";
			
			// label3
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(261, 7);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Version:";
			
			// button4
			this->button4->Location = System::Drawing::Point(12, 105);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 25);
			this->button4->TabIndex = 3;
			this->button4->Text = L"About";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			
			// MyForm
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(368, 137);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Halo XBE Modder";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
		//Before wasting a save dialog, make sure map is all lower case
		if (!xbeFunctions::checkMapName(textBox4)){
			System::Windows::Forms::MessageBox::Show("Alphabet characters only in map name.", "Error", \
				System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			return;
		}

		//Setup Save File Dialog
		System::Windows::Forms::SaveFileDialog^ saveFileDialog1 = gcnew System::Windows::Forms::SaveFileDialog;
		saveFileDialog1->Filter = "XBE Files|*.xbe";
		saveFileDialog1->Title = "Select a .xbe File";
		saveFileDialog1->RestoreDirectory = true;

		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			if ((write_file = saveFileDialog1->OpenFile()) != nullptr)
			{
				//Reset position
				open_file->Position = 0; 
				open_file->CopyTo(write_file);

				//Handles version #s
				xbeFunctions::editVersion(write_file, textBox2);

				//Handles map
				xbeFunctions::editMapDir(write_file, textBox4);

				//Handles title
				xbeFunctions::editTitle(write_file, textBox1);

				//Close file stream
				write_file->Close();
			}
		}
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		
		// Displays an OpenFileDialog so the user can select an XBE file
		System::Windows::Forms::OpenFileDialog ^ openFileDialog1 = gcnew System::Windows::Forms::OpenFileDialog();
		openFileDialog1->Filter = "XBE Files|*.xbe";
		openFileDialog1->Title = "Select a .xbe File";
		openFileDialog1->InitialDirectory = System::Windows::Forms::Application::StartupPath;

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			if ((read_file = openFileDialog1->OpenFile()) != nullptr)
			{
				//Check first 4 bytes are ASCII "XBEH"
				if (!xbeFunctions::checkHeader(read_file)){
					System::Windows::Forms::MessageBox::Show("Not an official .xbe file\nFirst 4 bytes != \"XBEH\"", "Error", \
						System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
					return;
				}

				//Copy opening FileStream into a MemoryStream
				read_file->Position = 0;
				open_file->SetLength(read_file->Length);
				read_file->Read(open_file->GetBuffer(), 0, (int)read_file->Length);
				read_file->Close();

				//Read XBE Title
				textBox1->Text = xbeFunctions::getTitle(open_file);

				//Read Maps Directory
				textBox4->Text = xbeFunctions::getMapsDir(open_file);

				//Version Location (the first of seven)
				textBox2->Text = xbeFunctions::getVersion(open_file);
				
				//Allow the textboxes to be modified
				this->textBox1->ReadOnly = false;
				this->textBox2->ReadOnly = false;
				this->textBox4->ReadOnly = false;

				//Allow the Save button to be used.
				this->button1->Enabled = true;
			}
		}
	}

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		//On close .xbe, reset to initial menu
		for (int i = 0; i < this->Controls->Count; i++){
			if (this->Controls[i]->GetType() == System::Windows::Forms::TextBox::typeid){
				((System::Windows::Forms::TextBox^)this->Controls[i])->Clear();
				((System::Windows::Forms::TextBox^)this->Controls[i])->ReadOnly = true;
			}
		}


		this->button1->Enabled = false;

		if (open_file != nullptr)
			open_file->SetLength(0);
	}

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Windows::Forms::MessageBox::Show("Programmed by Jesse Ardonne\n\nInstructions:\n" \
			"•Load a Halo CE default.xbe\n•Modify version #, title, and map\n" \
			"•Thanks to Halo2Brian for offsets", \
			"About", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information);
	}
	};
}
