#pragma once
#include <cpprest/http_client.h>
#include <cpprest/filestream.h>

using namespace utility;                    // Common utilities like string conversions
using namespace web;                        // Common features like URIs.
using namespace web::http;                  // Common HTTP functionality
using namespace web::http::client;          // HTTP client features
using namespace concurrency::streams;       // Asynchronous streams

class HttpWorker
{
public:
	static pplx::task<http_response> Get(const std::wstring& url, bool autoRedirect = true, const std::wstring& cookies = L"");
	static pplx::task<http_response> Post(const std::wstring& url, const std::map<std::wstring, std::wstring>& params);
};
