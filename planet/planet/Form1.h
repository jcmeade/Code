#pragma once


namespace planet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Timer^  timer3;
	private: System::Windows::Forms::Timer^  timer4;
	private: System::Windows::Forms::Timer^  timer5;
	private: System::Windows::Forms::Label^  label1;


	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer4 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer5 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1028, 477);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &Form1::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Tick += gcnew System::EventHandler(this, &Form1::timer3_Tick);
			// 
			// timer4
			// 
			this->timer4->Tick += gcnew System::EventHandler(this, &Form1::timer4_Tick);
			// 
			// timer5
			// 
			this->timer5->Tick += gcnew System::EventHandler(this, &Form1::timer5_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(413, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(150, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Press Enter to Start the Game!";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1028, 477);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::Form1_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		static const int xcenter = 0;
		static const int ycenter = 0;
		static const int smajor = 150;
		static const int sminor = 50;
		int pX;
		int pY;

		double angle_degrees;

		Drawing::Graphics^ g;
		Drawing::Brush^ yellowBrush;
		Drawing::Brush^ cyanBrush;
		Drawing::Brush^ redBrush;
		Drawing::Pen^ myPen;
		
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 timer1->Enabled = true;

			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 timer1->Enabled = false;
				 timer2->Enabled = false;
				 timer3->Enabled = false;
				 timer4->Enabled = false;
				 timer5->Enabled = false;
			 }
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				System::Drawing::Rectangle
				sunRect(1012, 411, 16, 16);
				g->FillEllipse(redBrush, sunRect);
			 }
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 g = pictureBox1->CreateGraphics();
				 yellowBrush = gcnew Drawing::SolidBrush(Color::Yellow);
				 cyanBrush = gcnew Drawing::SolidBrush(Color::Cyan);
				 redBrush = gcnew Drawing::SolidBrush(Color::Red);
				 myPen = gcnew Pen(Brushes::Black);
				 System::Drawing::Rectangle
				 sunRect(1012, 411, 16, 16);
				 g->FillEllipse(redBrush, sunRect);
			 }
private: System::Void Form1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

			 if (e->KeyCode == Keys::Enter)
			 {
				 timer1->Enabled = true;
				 label1->Text = " ";
				 timer2->Enabled = true;
			 }


			if (e->KeyCode == Keys::Right)
			{
				timer2->Enabled = true;
				timer3->Enabled = false;
				timer4->Enabled = false;
				timer5->Enabled = false;
			}

			if (e->KeyCode == Keys::Left)
			{
				timer3->Enabled = true;
				timer2->Enabled = false;
				timer4->Enabled = false;
				timer5->Enabled = false;

			}
			if (e->KeyCode == Keys::Down)
			{
				timer4->Enabled = true;
				timer2->Enabled = false;
				timer3->Enabled = false;
				timer5->Enabled = false;
			}
			if (e->KeyCode == Keys::Up)
			{
				timer5->Enabled = true;
				timer2->Enabled = false;
				timer3->Enabled = false;
				timer4->Enabled = false;
			}
			}

private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {

			 timer2->Interval = 1;
			 pictureBox1->Refresh();
			 System::Drawing::Rectangle
			 sunRect(pX + 1 , pY + 1, 16, 16);
			 g->FillEllipse(yellowBrush, sunRect);

			 System::Drawing::Rectangle
			 winRect(1012, 411, 16, 16);
			 g->FillEllipse(redBrush, winRect);

			 System::Drawing::Rectangle
			 wall1(50, 50, 150, 50);
			 g->DrawRectangle(myPen, wall1);

             //Left Wall
			 System::Drawing::Rectangle
			 border1(0, 0, 1, 477);
			 g->DrawRectangle(myPen, border1);
			 //Top Wall
			 System::Drawing::Rectangle
			 border2(0, 0, 1028, 1);
			 g->DrawRectangle(myPen, border2);
		     //Bottom Wall
			 System::Drawing::Rectangle
			 border3(0, 475, 1028, 1);
			 g->DrawRectangle(myPen, border3);
			 //Right Wall
			 System::Drawing::Rectangle
			 border4(1026 ,0 , 1, 477);
			 g->DrawRectangle(myPen, border4);
			 


			 if(sunRect.IntersectsWith(winRect))
			 {
				 timer1->Enabled = false;
				 timer2->Enabled = false;
				 timer3->Enabled = false;
				 timer4->Enabled = false;
				 timer5->Enabled = false;
				 pX = 0;
				 pY = 0;
				 MessageBox::Show("YOU WIN!! Press Enter to restart game!");

			 }
			 if (sunRect.IntersectsWith(border4))
			 {
				 timer1->Enabled = false;
				 timer2->Enabled = false;
				 timer3->Enabled = false;
				 timer4->Enabled = false;
				 timer5->Enabled = false;
			     pX -= 1;
			 }

			 if (sunRect.IntersectsWith(wall1))
			 {
				 timer1->Enabled = false;
				 timer2->Enabled = false;
				 timer3->Enabled = false;
				 timer4->Enabled = false;
				 timer5->Enabled = false;
			     pX -= 1;
			 }
			  else
				  pX += 1;
		

		 }
private: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e) {
			 timer3->Interval = 1;

			 pictureBox1->Refresh();
			 System::Drawing::Rectangle
			 sunRect(pX, pY, 16, 16);
			 g->FillEllipse(yellowBrush, sunRect);

			 System::Drawing::Rectangle
			 winRect(1012, 411, 16, 16);
			 g->FillEllipse(redBrush, winRect);

			 System::Drawing::Rectangle
			 wall1(50, 50, 150, 50);
			 g->DrawRectangle(myPen, wall1);

			 //Left Wall
			 System::Drawing::Rectangle
			 border1(0, 0, 1, 477);
			 g->DrawRectangle(myPen, border1);
			 //Top Wall
			 System::Drawing::Rectangle
			 border2(0, 0, 1028, 1);
			 g->DrawRectangle(myPen, border2);
		     //Bottom Wall
			 System::Drawing::Rectangle
			 border3(0, 475, 1028, 1);
			 g->DrawRectangle(myPen, border3);
			 //Right Wall
			 System::Drawing::Rectangle
			 border4(1026 ,0 , 1, 477);
			 g->DrawRectangle(myPen, border4);

			  if(sunRect.IntersectsWith(winRect))
			 {
				 timer1->Enabled = false;
				 timer2->Enabled = false;
				 timer3->Enabled = false;
				 timer4->Enabled = false;
				 timer5->Enabled = false;
				 pX = 0;
				 pY = 0;
				 MessageBox::Show("YOU WIN!! Press Enter to restart game!");
				 
			 }
			  if (sunRect.IntersectsWith(border1))
			 {
				 timer1->Enabled = false;
				 timer2->Enabled = false;
				 timer3->Enabled = false;
				 timer4->Enabled = false;
				 timer5->Enabled = false;
			     pX -= 1;
			 }

			  if (sunRect.IntersectsWith(wall1))
			 {
				 timer1->Enabled = false;
				 timer2->Enabled = false;
				 timer3->Enabled = false;
				 timer4->Enabled = false;
				 timer5->Enabled = false;
			  pX += 1;
			 }
			  else
				  pX -= 1;

		 }
private: System::Void timer4_Tick(System::Object^  sender, System::EventArgs^  e) {
			 timer4->Interval = 1;

			 pictureBox1->Refresh();
			 System::Drawing::Rectangle
			 sunRect(pX, pY, 16, 16);
			 g->FillEllipse(yellowBrush, sunRect);

			 System::Drawing::Rectangle
			 winRect(1012, 411, 16, 16);
			 g->FillEllipse(redBrush, winRect);

			 System::Drawing::Rectangle
			 wall1(50, 50, 150, 50);
			 g->DrawRectangle(myPen, wall1);

			 //Left Wall
			 System::Drawing::Rectangle
			 border1(0, 0, 1, 477);
			 g->DrawRectangle(myPen, border1);
			 //Top Wall
			 System::Drawing::Rectangle
			 border2(0, 0, 1028, 1);
			 g->DrawRectangle(myPen, border2);
		     //Bottom Wall
			 System::Drawing::Rectangle
			 border3(0, 475, 1028, 1);
			 g->DrawRectangle(myPen, border3);
			 //Right Wall
			 System::Drawing::Rectangle
			 border4(1026 ,0 , 1, 477);
			 g->DrawRectangle(myPen, border4);

			  if(sunRect.IntersectsWith(winRect))
			 {
				 delete sunRect;
				 timer1->Enabled = false;
				 timer2->Enabled = false;
				 timer3->Enabled = false;
				 timer4->Enabled = false;
				 timer5->Enabled = false;
				 pX = 0;
				 pY = 0;
				 MessageBox::Show("YOU WIN!! Press Enter to restart game!");
				 
			 }
			  if (sunRect.IntersectsWith(border3))
			 {
				 timer1->Enabled = false;
				 timer2->Enabled = false;
				 timer3->Enabled = false;
				 timer4->Enabled = false;
				 timer5->Enabled = false;
			     pX -= 1;
			 }
			  if (sunRect.IntersectsWith(wall1))
			 {
				 timer1->Enabled = false;
				 timer2->Enabled = false;
				 timer3->Enabled = false;
				 timer4->Enabled = false;
				 timer5->Enabled = false;
				 pY -= 1;
			 }
			  else
				  pY += 1;


		 }
private: System::Void timer5_Tick(System::Object^  sender, System::EventArgs^  e) {
			 timer5->Interval = 1;
			 pictureBox1->Refresh();
			 System::Drawing::Rectangle
			 sunRect(pX, pY, 16, 16);
			 g->FillEllipse(yellowBrush, sunRect);

			 System::Drawing::Rectangle
			 winRect(1012, 411, 16, 16);
			 g->FillEllipse(redBrush, winRect);

			 System::Drawing::Rectangle
			 wall1(50, 50, 150, 50);
			 g->DrawRectangle(myPen, wall1);

			 //Left Wall
			 System::Drawing::Rectangle
			 border1(0, 0, 1, 477);
			 g->DrawRectangle(myPen, border1);
			 //Top Wall
			 System::Drawing::Rectangle
			 border2(0, 0, 1028, 1);
			 g->DrawRectangle(myPen, border2);
		     //Bottom Wall
			 System::Drawing::Rectangle
			 border3(0, 475, 1028, 1);
			 g->DrawRectangle(myPen, border3);
			 //Right Wall
			 System::Drawing::Rectangle
			 border4(1026 ,0 , 1, 477);
			 g->DrawRectangle(myPen, border4);


			  if(sunRect.IntersectsWith(winRect))
			 {
				 delete sunRect;
				 timer1->Enabled = false;
				 timer2->Enabled = false;
				 timer3->Enabled = false;
				 timer4->Enabled = false;
				 timer5->Enabled = false;
				 pX = 0;
				 pY = 0;
				 MessageBox::Show("YOU WIN!! Press Enter to restart game!");
			 }
			  if (sunRect.IntersectsWith(border2))
			 {
				 timer1->Enabled = false;
				 timer2->Enabled = false;
				 timer3->Enabled = false;
				 timer4->Enabled = false;
				 timer5->Enabled = false;
			     pX -= 1;
			 }
			  if (sunRect.IntersectsWith(wall1))
			 {
				 timer1->Enabled = false;
				 timer2->Enabled = false;
				 timer3->Enabled = false;
				 timer4->Enabled = false;
				 timer5->Enabled = false;
				 pY += 1;
			 }
			  else
				  pY -= 1;
		 }

			 
};
}

