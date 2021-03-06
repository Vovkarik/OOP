#include "stdafx.h"
#include "HttpUrl.h"
#include "UrlParsingError.h"

void PrintInfo(CHttpUrl const& url)
{

	std::cout << "Protocol " << url.ProtocolToString(url.GetProtocol()) << "\n"
		<< "Domain " << url.GetDomain() << "\n"
		<< "Port " << url.GetPort() << "\n"
		<< "Document " << url.GetDocument() << std::endl;
}

int main()
{
	std::string url;
	while (std::getline(std::cin, url))
	{
		try
		{
			CHttpUrl httpUrl(url);
			PrintInfo(url);
		}
		catch (CUrlParsingError const& error)
		{
			std::cout << error.what() << std::endl;
		}
	}
	return 0;
}