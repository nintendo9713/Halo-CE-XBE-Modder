namespace xbeFunctions{	

	void editVersion(System::IO::Stream^ m_stream, System::Windows::Forms::TextBox^ m_textbox){
		array<int>^ version_positions = gcnew array < int > \
		{2035557, 2035673, 2035801, 2036473, 2103355, 2103455, 2279931};
		for (int i = 0; i < version_positions->Length; i++){
			m_stream->Position = version_positions[i];
			array<System::Byte>^ version_buffer = System::Text::UTF8Encoding::UTF8->GetBytes(m_textbox->Text);
			m_stream->Write(version_buffer, 0, 4);
		}
	}

	void editMapDir(System::IO::Stream^ m_stream, System::Windows::Forms::TextBox^ m_textbox){
		m_stream->Position = 2035899;
		array<System::Byte>^ version_buffer = System::Text::UTF8Encoding::UTF8->GetBytes(m_textbox->Text);
		m_stream->Write(version_buffer, 0, version_buffer->Length);
		array<System::Byte>^ aftermap_buffer = System::Text::UTF8Encoding::UTF8->GetBytes("\\\%s.map");
		m_stream->Write(aftermap_buffer, 0, aftermap_buffer->Length);
		array<System::Byte>^ zeroBuf = gcnew array < System::Byte > {0};
		while (m_stream->Position < 2035911) m_stream->Write(zeroBuf, 0, 1);
	}

	void editTitle(System::IO::Stream^ m_stream, System::Windows::Forms::TextBox^ m_textbox){
		m_stream->Position = 388;
		array<System::Byte>^ title_buffer = System::Text::UTF8Encoding::UTF8->GetBytes(m_textbox->Text);
		for (int i = 0; i < title_buffer->Length; i++){
			m_stream->Write(title_buffer, i, 1);
			m_stream->Seek(1, System::IO::SeekOrigin::Current);
		}
	}

	bool checkMapName(System::Windows::Forms::TextBox^ m_textbox){
		System::String^ map_buffer = m_textbox->Text;
		if (map_buffer->Length < 1) return false;
		for (int i = 0; i < map_buffer->Length; i++){
			System::Char c = (System::Char)map_buffer[i];
			if (!((c >= 97 && c <= 122) || (c >= 65 && c <= 90))){
				return false;
			}
		}
		return true;
	}

	bool checkHeader(System::IO::Stream^ m_stream){
		m_stream->Position = 0;
		array<System::Byte>^ header_buffer = gcnew array<System::Byte>(4);
		m_stream->Read(header_buffer, 0, header_buffer->Length);
		if (System::Text::UTF8Encoding::UTF8->GetString(header_buffer) == "XBEH")
			return true;
		else
			return false;
	}

	System::String^ getTitle(System::IO::MemoryStream^ m_stream){
		m_stream->Position = 388;
		array<System::Byte>^ title_buffer = gcnew array<System::Byte>(20);
		for (int i = 0; i < title_buffer->Length; i++){
			m_stream->Read(title_buffer, i, 1);
			m_stream->Seek(1, System::IO::SeekOrigin::Current);
		}
		return System::Text::UTF8Encoding::UTF8->GetString(title_buffer);
	}

	System::String^ getMapsDir(System::IO::MemoryStream^ m_stream){
		m_stream->Position = 2035899;
		array<System::Byte>^ mapsdir_buffer = gcnew array<System::Byte>(5);
		m_stream->Read(mapsdir_buffer, 0, 5);
		//92 is '\' to support certain Halo mappacks using 5 char directories
		int tmp_length = 0;
		for (int i = 0; i < 5; i++){
			if (mapsdir_buffer[i] == 92){
				mapsdir_buffer[i] = 0;
			}
		}
		return System::Text::UTF8Encoding::UTF8->GetString(mapsdir_buffer);
	}

	System::String^ getVersion(System::IO::MemoryStream^ m_stream){
		m_stream->Position = 2035557;
		array<System::Byte>^ version_buffer = gcnew array<System::Byte>(4);
		m_stream->Read(version_buffer, 0, 4);
		return System::Text::UTF8Encoding::UTF8->GetString(version_buffer);
	}

}