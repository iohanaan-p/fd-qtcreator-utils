// ◦ Playrix ◦
@if '%{Cpp:PragmaOnce}'
#pragma once
@else
#ifndef %{GUARD}
#define %{GUARD}
@endif

#include <Visual/Assets/Asset.h>

%{JS: Cpp.openNamespaces('%{Class}')}
@if '%{AssetTypeName}' !== '%{ClassName}'
/// @name(%{AssetTypeName})
@endif
/// @gdb(name=%{AssetTypeName}Assets%{JS: '%{AssetPrefix}' ? ', prefix=%{AssetPrefix}' : ''})
@if '%{EditorCategory}'
/// @category(%{EditorCategory})
@endif
class %{ClassName} : public ::Visual::Asset
{
	VISUAL_CLASS()

public:
	using Ptr = ::Core::IntrusivePtr<%{ClassName}>;
	using WeakPtr = ::Core::IntrusiveWeakPtr<%{ClassName}>;

private:
};
%{JS: Cpp.closeNamespaces('%{Class}')}
@if ! '%{Cpp:PragmaOnce}'
#endif // %{GUARD}
@endif
