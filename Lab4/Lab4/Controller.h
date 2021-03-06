#pragma once

class IShape;

class CController 
{
public:
	CController(std::istream & input, std::ostream & output);
	bool PrintInfo(std::istream & in) const;
	bool HandleCommand() const;
private:
	bool CreateLine(std::istream & in);
	bool CreateCircle(std::istream & in);
	bool CreateRectangle(std::istream & in);
	bool CreateTriangle(std::istream & in);
	std::vector<std::shared_ptr<IShape>> m_shapes;
	std::istream & m_input;
	std::ostream & m_output;
	std::map<std::string, std::function<bool(std::istream & args)>> m_actionMap;
};

