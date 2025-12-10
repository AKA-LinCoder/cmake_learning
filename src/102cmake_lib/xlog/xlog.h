//xlog.h
#ifndef XLOG_H
#define XLOG_H
//__declspec(dllexport) 导出xlog类的函数到lib文件中
//xlog库文件调用使用dllexport
//test_xlog可执行文件调用使用dllimport
#ifndef _WIN32
	#define XCPP_API
#else
	#ifdef xlog_EXPORTS
		#define XCPP_API __declspec(dllexport)
	#else
		#define XCPP_API __declspec(dllimport)
	#endif // xlog_EXPORTS
#endif

class XCPP_API XLog
{
public:
	XLog();
};
#endif
