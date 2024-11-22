#include <string>
#include <fstream>
#include <iostream>

typedef const std::string& t_const_str;
typedef std::string::size_type t_str_size;

bool read_file(t_const_str filename, std::string& content) {
	std::ifstream infile(filename.c_str());

	if (!infile.is_open()) {
		std::cout << "Error: file `" << filename << "` could not be opened" << std::endl;
		return false;
	}

	char c;
	while (infile.get(c))
		content += c;
	infile.close();
	return true;
}

bool write_to_file(t_const_str filename, t_const_str content) {
	std::ofstream outfile;

	outfile.open(filename.c_str());
	if (!outfile) {
		std::cout << "Error: file `" << filename << "` could not be opened" << std::endl;
		return false;
	}

	outfile << content;
	outfile.close();
	return true;
}

bool find_substr(t_const_str str, t_str_size& position, t_str_size from_index, t_const_str find_rule) {
	position = str.find(find_rule, from_index);
	return position != std::string::npos;
}

void find_and_replace(t_const_str str, std::string& into, t_const_str find_rule, t_const_str replace_rule) {
	t_str_size current_pos = 0;
	t_str_size last_pos = 0;

	while (find_substr(str, current_pos, last_pos, find_rule)) {
		into += str.substr(last_pos, current_pos - last_pos);
		into += replace_rule;
		last_pos = current_pos + replace_rule.size();
	}
	into += str.substr(last_pos);
}

int main(int argc, char** argv) {
	if (argc != 4) {
		std::cout << "Wrong input, expected: ";
		std::cout << argv[0] << " <filename> <find_rule> <replace_rule>";
		std::cout << std::endl;
		return 1;
	}

	const std::string filename = argv[1];
	const std::string replacement_filename = filename + ".replace";
	const std::string find_rule = argv[2];
	const std::string replace_rule = argv[3];

	std::string file_content;
	std::string replacement;

	if (!read_file(filename, file_content))
		return 1;
	find_and_replace(file_content, replacement, find_rule, replace_rule);
	write_to_file(replacement_filename, replacement);

	return 0;
}
