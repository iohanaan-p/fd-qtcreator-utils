// ◦ Playrix ◦
#include "%{JS: Util.relativeFilePath('%{Path}/%{HdrFileName}', '%{Path}' + '/' + Util.path('%{SrcFileName}'))}"
#include <Codegen/%{JS: Util.baseName(Util.relativeFilePath('%{Path}/%{HdrFileName}', '%{Path}' + '/' + Util.path('%{SrcFileName}')))}.generated.hpp>

%{JS: Cpp.openNamespaces('%{Class}')}
void %{ClassName}::Update(float dt)
{
	Parent::Update(dt);
}
%{JS: Cpp.closeNamespaces('%{Class}')}\
