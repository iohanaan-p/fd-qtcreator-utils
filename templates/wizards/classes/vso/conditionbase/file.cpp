// ◦ Playrix ◦
#include "%{JS: Util.relativeFilePath('%{Path}/%{HdrFileName}', '%{Path}' + '/' + Util.path('%{SrcFileName}'))}"
#include <Codegen/%{JS: Util.baseName(Util.relativeFilePath('%{Path}/%{HdrFileName}', '%{Path}' + '/' + Util.path('%{SrcFileName}')))}.generated.hpp>

%{JS: Cpp.openNamespaces('%{Class}')}
bool %{ClassName}::CheckInternal() const
{
	const bool result = false;

	CONDITIONS_LOG(result ? "True" : "False");
	return result;
}
%{JS: Cpp.closeNamespaces('%{Class}')}\
