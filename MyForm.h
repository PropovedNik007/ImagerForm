#pragma once
#include <opencv2/opencv.hpp>
#include "opencv2/highgui.hpp"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace cv;
//double alpha = 1; /*< Simple contrast control */
//int beta = 0;  /*< Simple brightness control */


namespace ImagerForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TrackBar^ BrightnessBar;
	private: System::Windows::Forms::TrackBar^ ContrastBar;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->BrightnessBar = (gcnew System::Windows::Forms::TrackBar());
			this->ContrastBar = (gcnew System::Windows::Forms::TrackBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BrightnessBar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ContrastBar))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(73, 328);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"ќткрыть";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(60, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(696, 290);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// BrightnessBar
			// 
			this->BrightnessBar->Location = System::Drawing::Point(359, 328);
			this->BrightnessBar->Minimum = -10;
			this->BrightnessBar->Name = L"BrightnessBar";
			this->BrightnessBar->Size = System::Drawing::Size(104, 45);
			this->BrightnessBar->TabIndex = 2;
			this->BrightnessBar->Scroll += gcnew System::EventHandler(this, &MyForm::BrightnessBar_Scroll);
			// 
			// ContrastBar
			// 
			this->ContrastBar->Location = System::Drawing::Point(581, 325);
			this->ContrastBar->Minimum = -10;
			this->ContrastBar->Name = L"ContrastBar";
			this->ContrastBar->Size = System::Drawing::Size(104, 45);
			this->ContrastBar->TabIndex = 3;
			this->ContrastBar->Scroll += gcnew System::EventHandler(this, &MyForm::ContrastBar_Scroll);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(382, 305);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"яркость";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(591, 305);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L" онтрастность";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::openFileDialog1_FileOk);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(875, 382);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ContrastBar);
			this->Controls->Add(this->BrightnessBar);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BrightnessBar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ContrastBar))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ FileName;
		openFileDialog1->Title = "Select picture ";
		openFileDialog1->Multiselect = false;
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			FileName = openFileDialog1->FileName->ToString();
			pictureBox1->Image = Image::FromFile(openFileDialog1->FileName);
			label1->Text = openFileDialog1->FileName;
		}

		pictureBox1->Refresh();
		this->Refresh();
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void BrightnessBar_Scroll(System::Object^ sender, System::EventArgs^ e) {
		//Mat image = imread(Image);
		//Mat image = imread(pictureBox1->Image);
		//Mat image = Image::FromFile(openFileDialog1->FileName);
	/*
		//Mat image = imread("E:/ProgramC/Imager/ImagerForm/Images/1.png");
		Mat new_image = Mat::zeros(image.size(), image.type());
		
		alpha = ContrastBar.value
		beta = BrightnessBar.value
		for (int y = 0; y < image.rows; y++) {
			for (int x = 0; x < image.cols; x++) {
				for (int c = 0; c < 3; c++) {
					new_image.at<Vec3b>(y, x)[c] =
						saturate_cast<uchar>(alpha * (image.at<Vec3b>(y, x)[c]) + beta);
				}
			}
		}
	
		//namedWindow("Original Image", 1);
		//namedWindow("New Image", 1);
		//imshow("Original Image", image);
		//imshow("New Image", new_image);
		*/
	}
	private: System::Void ContrastBar_Scroll(System::Object^ sender, System::EventArgs^ e) {
		/*
	//Mat image = imread("E:/ProgramC/Imager/ImagerForm/Images/1.png");
	Mat new_image = Mat::zeros(image.size(), image.type());

	alpha = ContrastBar.value
	beta = BrightnessBar.value
	for (int y = 0; y < image.rows; y++) {
		for (int x = 0; x < image.cols; x++) {
			for (int c = 0; c < 3; c++) {
				new_image.at<Vec3b>(y, x)[c] =
					saturate_cast<uchar>(alpha * (image.at<Vec3b>(y, x)[c]) + beta);
			}
		}
	}
	}
	private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
