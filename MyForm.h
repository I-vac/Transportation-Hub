#pragma once
#include <vector>
#include "Vehicle.h"
#include "Ride.h"
#include "TransportationHub.h"
#include <msclr\marshal_cppstd.h>


namespace TransporthubFINAL {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	
	
	TransportationHub* TH= new TransportationHub();
	

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button6;

	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;


	public:

	
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
		

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(89, 24);
			this->button1->TabIndex = 0;
			this->button1->Text = L"LoadFromFile";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 94);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(89, 32);
			this->button2->TabIndex = 1;
			this->button2->Text = L"ShowVehicles";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(479, 6);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(481, 215);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 60);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(89, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"SaveToFile";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 142);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(89, 37);
			this->button4->TabIndex = 5;
			this->button4->Text = L"SortByLicensePlate";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(179, 67);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(178, 118);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(177, 174);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 8;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(178, 230);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 9;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(176, 278);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 10;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(167, 319);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(112, 23);
			this->button5->TabIndex = 11;
			this->button5->Text = L"CreateNewVehicle";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(190, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 13);
			this->label1->TabIndex = 12;
			this->label1->Text = L"MakeAndModel";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(190, 102);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 13);
			this->label2->TabIndex = 13;
			this->label2->Text = L"LicensePlate";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(201, 158);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 13);
			this->label3->TabIndex = 14;
			this->label3->Text = L"GasUsage";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(196, 214);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 13);
			this->label4->TabIndex = 15;
			this->label4->Text = L"PricePerKm";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(201, 262);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 13);
			this->label5->TabIndex = 16;
			this->label5->Text = L"TotalKm";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Location = System::Drawing::Point(12, 67);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(116, 192);
			this->panel1->TabIndex = 17;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(35, 51);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(65, 13);
			this->label6->TabIndex = 18;
			this->label6->Text = L"VehicleData";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(15, 14);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(83, 23);
			this->button6->TabIndex = 19;
			this->button6->Text = L"LoadFromFile";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(15, 55);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(83, 23);
			this->button8->TabIndex = 21;
			this->button8->Text = L"SaveToFile";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(14, 94);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(84, 32);
			this->button9->TabIndex = 22;
			this->button9->Text = L"ShowRides";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->button9);
			this->panel2->Controls->Add(this->button8);
			this->panel2->Location = System::Drawing::Point(336, 67);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(110, 139);
			this->panel2->TabIndex = 23;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(361, 51);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(52, 13);
			this->label7->TabIndex = 24;
			this->label7->Text = L"RideData";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(21, 9);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(102, 13);
			this->label8->TabIndex = 25;
			this->label8->Text = L"VehiclesInMemory:0";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(972, 552);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->DoubleBuffered = true;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		Vehicle* v1 = new Vehicle();
		vector<Vehicle*> Vehicles = v1->ReadFromFile();
		TH->SetVehicles(Vehicles);
		Ride* ride = new Ride(Vehicles[0], 4, 600, 1500, 2.45, 15.12, 1621452684, 1621452954);
		vector<Ride*> rides;
		rides.push_back(ride);
		TH->SetRides(rides);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		vector<Vehicle*> Vehicles = TH->GetVehicles();
		textBox1->Text = "";
		for (Vehicle* vehicle :Vehicles) {
			string Text = vehicle->PrintVehicle();
			String^ str2 = gcnew String(Text.c_str());
			str2 += "\n";
			textBox1->Text += str2;
	
		}
		textBox1->Update();
	}

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		vector<Vehicle*> Vehicles = TH->GetVehicles();
		for (Vehicle* vehicle : Vehicles) {
			vehicle->SaveInFile();
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

		TH->SortVehicles();
	}
	   
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		string MakeAndModel = msclr::interop::marshal_as<std::string>(textBox2->Text);
		string LicensePlate = msclr::interop::marshal_as<std::string>(textBox3->Text);
		float GasUsage = stof( msclr::interop::marshal_as<std::string>(textBox4->Text));
		float PricePerKm = stof(msclr::interop::marshal_as<std::string>(textBox5->Text));
		float TotalKm = stof(msclr::interop::marshal_as<std::string>(textBox6->Text));
		Vehicle* vehicle = new Vehicle(MakeAndModel, LicensePlate, GasUsage, PricePerKm, TotalKm);
		vector<Vehicle*> Vehicles = TH->GetVehicles();
		Vehicles.push_back(vehicle);
		TH->SetVehicles (Vehicles);

	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	
		Ride* r1 = new Ride();
		vector<Ride*> Ride = r1->ReadFromFile();
		TH->SetRides(Ride);
	
	}


	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		vector<Ride*> Rides = TH->GetRides();
		for (Ride* Rides : Rides) {
			Rides->SaveInFile();
		}
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		vector<Ride*> Rides = TH->GetRides();
		textBox1->Text = "";
		for (Ride* ride : Rides) {
			string Text = ride->PrintRide();
			String^ str2 = gcnew String(Text.c_str());
			str2 += "\n";
			textBox1->Text += str2;
		}
		textBox1->Update();

	}
//button to show how many vehicles are loaded in the memory (works on click of the label)
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
		string Vehicles = "VehiclesInMemory:"+to_string(TH->GetVehicles().size());
		label8->Text = gcnew String(Vehicles.c_str());
	}
};
}
