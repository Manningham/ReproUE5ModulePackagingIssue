#pragma once

#include "Containers/UnrealString.h"

FOO_API struct FFoo {
	static FString GetMessage() {
		return "Yo";
	}
};
