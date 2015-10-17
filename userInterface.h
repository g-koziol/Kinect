#pragma once

namespace Kinectconsole {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for userInterface
	/// </summary>
	public ref class userInterface : public System::Windows::Forms::Form
	{
	public:
		userInterface(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~userInterface()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  widokToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ustawieniaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ustawieniaObrazuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ustawieniaG³êbiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ustawieniaDŸwiêkuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  infoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  oAutorzeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  oAutorzeToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  wyjscieToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  daneZKamerkiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  daneZGlebiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  daneZAudioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  allToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TrackBar^  trackBar1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wyjscieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->widokToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->daneZKamerkiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->daneZGlebiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->daneZAudioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->allToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ustawieniaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ustawieniaObrazuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ustawieniaG³êbiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ustawieniaDŸwiêkuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->infoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oAutorzeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oAutorzeToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->plikToolStripMenuItem,
					this->widokToolStripMenuItem, this->ustawieniaToolStripMenuItem, this->infoToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(416, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->wyjscieToolStripMenuItem });
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->plikToolStripMenuItem->Text = L"Plik";
			// 
			// wyjscieToolStripMenuItem
			// 
			this->wyjscieToolStripMenuItem->Name = L"wyjscieToolStripMenuItem";
			this->wyjscieToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->wyjscieToolStripMenuItem->Text = L"Wyjscie";
			// 
			// widokToolStripMenuItem
			// 
			this->widokToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->daneZKamerkiToolStripMenuItem,
					this->daneZGlebiToolStripMenuItem, this->daneZAudioToolStripMenuItem, this->allToolStripMenuItem
			});
			this->widokToolStripMenuItem->Name = L"widokToolStripMenuItem";
			this->widokToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->widokToolStripMenuItem->Text = L"Widok";
			// 
			// daneZKamerkiToolStripMenuItem
			// 
			this->daneZKamerkiToolStripMenuItem->Name = L"daneZKamerkiToolStripMenuItem";
			this->daneZKamerkiToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->daneZKamerkiToolStripMenuItem->Text = L"Dane z kamerki";
			// 
			// daneZGlebiToolStripMenuItem
			// 
			this->daneZGlebiToolStripMenuItem->Name = L"daneZGlebiToolStripMenuItem";
			this->daneZGlebiToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->daneZGlebiToolStripMenuItem->Text = L"Dane z glebi";
			// 
			// daneZAudioToolStripMenuItem
			// 
			this->daneZAudioToolStripMenuItem->Name = L"daneZAudioToolStripMenuItem";
			this->daneZAudioToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->daneZAudioToolStripMenuItem->Text = L"Dane z audio";
			// 
			// allToolStripMenuItem
			// 
			this->allToolStripMenuItem->Name = L"allToolStripMenuItem";
			this->allToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->allToolStripMenuItem->Text = L"All";
			// 
			// ustawieniaToolStripMenuItem
			// 
			this->ustawieniaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ustawieniaObrazuToolStripMenuItem,
					this->ustawieniaG³êbiToolStripMenuItem, this->ustawieniaDŸwiêkuToolStripMenuItem
			});
			this->ustawieniaToolStripMenuItem->Name = L"ustawieniaToolStripMenuItem";
			this->ustawieniaToolStripMenuItem->Size = System::Drawing::Size(76, 20);
			this->ustawieniaToolStripMenuItem->Text = L"Ustawienia";
			// 
			// ustawieniaObrazuToolStripMenuItem
			// 
			this->ustawieniaObrazuToolStripMenuItem->Name = L"ustawieniaObrazuToolStripMenuItem";
			this->ustawieniaObrazuToolStripMenuItem->Size = System::Drawing::Size(177, 22);
			this->ustawieniaObrazuToolStripMenuItem->Text = L"Ustawienia obrazu";
			// 
			// ustawieniaG³êbiToolStripMenuItem
			// 
			this->ustawieniaG³êbiToolStripMenuItem->Name = L"ustawieniaG³êbiToolStripMenuItem";
			this->ustawieniaG³êbiToolStripMenuItem->Size = System::Drawing::Size(177, 22);
			this->ustawieniaG³êbiToolStripMenuItem->Text = L"Ustawienia glebi";
			// 
			// ustawieniaDŸwiêkuToolStripMenuItem
			// 
			this->ustawieniaDŸwiêkuToolStripMenuItem->Name = L"ustawieniaDŸwiêkuToolStripMenuItem";
			this->ustawieniaDŸwiêkuToolStripMenuItem->Size = System::Drawing::Size(177, 22);
			this->ustawieniaDŸwiêkuToolStripMenuItem->Text = L"Ustawienia dzwieku";
			this->ustawieniaDŸwiêkuToolStripMenuItem->Click += gcnew System::EventHandler(this, &userInterface::ustawieniaDŸwiêkuToolStripMenuItem_Click);
			// 
			// infoToolStripMenuItem
			// 
			this->infoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->oAutorzeToolStripMenuItem,
					this->oAutorzeToolStripMenuItem1
			});
			this->infoToolStripMenuItem->Name = L"infoToolStripMenuItem";
			this->infoToolStripMenuItem->Size = System::Drawing::Size(40, 20);
			this->infoToolStripMenuItem->Text = L"Info";
			this->infoToolStripMenuItem->Click += gcnew System::EventHandler(this, &userInterface::infoToolStripMenuItem_Click);
			// 
			// oAutorzeToolStripMenuItem
			// 
			this->oAutorzeToolStripMenuItem->Name = L"oAutorzeToolStripMenuItem";
			this->oAutorzeToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->oAutorzeToolStripMenuItem->Text = L"O programie";
			// 
			// oAutorzeToolStripMenuItem1
			// 
			this->oAutorzeToolStripMenuItem1->Name = L"oAutorzeToolStripMenuItem1";
			this->oAutorzeToolStripMenuItem1->Size = System::Drawing::Size(152, 22);
			this->oAutorzeToolStripMenuItem1->Text = L"O autorze";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 157);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(133, 118);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &userInterface::pictureBox1_Click);
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(12, 27);
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(205, 45);
			this->trackBar1->TabIndex = 2;
			// 
			// userInterface
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(416, 287);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"userInterface";
			this->Text = L"userInterface";
			this->Load += gcnew System::EventHandler(this, &userInterface::userInterface_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
