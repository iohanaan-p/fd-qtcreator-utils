// ◦ Playrix ◦
#include "%{JS: Util.relativeFilePath('%{Path}/%{HdrFileName}', '%{Path}' + '/' + Util.path('%{SrcFileName}'))}"
#include <Codegen/%{JS: Util.baseName(Util.relativeFilePath('%{Path}/%{HdrFileName}', '%{Path}' + '/' + Util.path('%{SrcFileName}')))}.generated.hpp>

%{JS: Cpp.openNamespaces('%{Class}')}
%{BehaviourClassName}::Ptr %{ClassName}::GetBehaviour() const
{
	if (auto&& rootNode = GetRootNode()) {
		return rootNode.GetBehaviour<%{BehaviourClassName}>();
	}
	return nullptr;
}

void %{ClassName}::OnInit()
{
	Parent::OnInit();

	if (const auto popupBeh = GetBehaviour()) {
		popupBeh->InitPopup();
	}
}

void %{ClassName}::Update(float dt)
{
	Parent::Update(dt);
}
%{JS: Cpp.closeNamespaces('%{Class}')}

%{JS: Cpp.openNamespaces('%{Class}')}
void %{BehaviourClassName}::InitPopup()
{
}

void %{BehaviourClassName}::Update(float dt)
{
	Parent::Update(dt);
}
%{JS: Cpp.closeNamespaces('%{Class}')}\
