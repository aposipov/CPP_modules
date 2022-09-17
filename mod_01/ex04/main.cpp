
#include <iostream>
#include <fstream>

void write_file (std::string out_file, std::string text, std::string s1,
				 std::string s2)
{
	size_t	pos = 0;

	while (pos != std::string::npos)
	{
		pos = text.find(s1, pos);
		if (pos != std::string::npos)
		{
			text.erase(pos, s1.length());
			text.insert(pos, s2);
		}
	}
	std::ofstream	ofs;
	ofs.open(out_file.c_str(), std::ios::trunc);
	if (!ofs.is_open())
		std::cout << "ERROR: infile is not open!" << std::endl;
	ofs << text;
	ofs.close();
}

std::string read_file(std::string f_name)
{
	std::ifstream ifs;

	ifs.open(f_name.c_str());
	if (!ifs.is_open())
		std::cout << "ERROR: infile is not open!" << std::endl;
	std::string text;
	text.assign(std::istreambuf_iterator<char>(ifs),
	        std::istreambuf_iterator<char>());
	ifs.close();
	return text;
}

int main(int argc, char** argv)
{
	if (argc != 4)
	{
		std::cout << "ERROR: Need more arguments!" << std::endl;
		return 1;
	}
	std::string in_file(argv[1]);
//	std::cout << in_file << std::endl;//
	std::string s1(argv[2]);
//	std::cout << s1 << std::endl;//
	std::string s2(argv[3]);
//	std::cout << s2 << std::endl;//

	if (in_file.empty() || s1.empty() || s2.empty())
	{
		std::cout << "ERROR: String is empty!" << std::endl;
		return 1;
	}
	std::string text = read_file(in_file);
	std::cout << text << std::endl;

	std::string out_file = in_file + ".replace";
//	std::cout << out_file << std::endl;//
	write_file(out_file, text, s1, s2);
	return 0;
}