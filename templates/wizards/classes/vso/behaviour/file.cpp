%{Cpp:LicenseTemplate}\
#include "%{JS: Util.relativeFilePath('%{Path}/%{HdrFileName}', '%{Path}' + '/' + Util.path('%{SrcFileName}'))}"

%{JS: Cpp.openNamespaces('%{Class}')}
void %{ClassName}::Update(float dt)
{
	::Visual::Behaviour::Update(dt);
}
%{JS: Cpp.closeNamespaces('%{Class}')}\

#include <Codegen/%{JS: Util.baseName(Util.relativeFilePath('%{Path}/%{HdrFileName}', '%{Path}' + '/' + Util.path('%{SrcFileName}')))}.generated.hpp>
