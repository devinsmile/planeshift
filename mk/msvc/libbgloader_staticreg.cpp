// This file is automatically generated.
#include "cssysdef.h"
#include "csutil/scf.h"

// Put static linking stuff into own section.
// The idea is that this allows the section to be swapped out but not
// swapped in again b/c something else in it was needed.
#if !defined(CS_DEBUG) && defined(CS_COMPILER_MSVC)
#pragma const_seg(".CSmetai")
#pragma comment(linker, "/section:.CSmetai,r")
#pragma code_seg(".CSmeta")
#pragma comment(linker, "/section:.CSmeta,er")
#pragma comment(linker, "/merge:.CSmetai=.CSmeta")
#endif

namespace csStaticPluginInit
{
static char const metainfo_bgloader[] =
"<?xml version=\"1.0\"?>"
"<plugin>"
"  <scf>"
"    <classes>"
"      <class>"
"        <name>crystalspace.bgloader</name>"
"        <implementation>BgLoader</implementation>"
"        <description>Background Loader</description>"
"        <requires>"
"          <class>crystalspace.level.threadedloader</class>"
"        </requires>"
"      </class>"
"    </classes>"
"  </scf>"
"</plugin>"
;
  #ifndef BgLoader_FACTORY_REGISTER_DEFINED 
  #define BgLoader_FACTORY_REGISTER_DEFINED 
    SCF_DEFINE_FACTORY_FUNC_REGISTRATION(BgLoader) 
  #endif

class bgloader
{
SCF_REGISTER_STATIC_LIBRARY(bgloader,metainfo_bgloader)
  #ifndef BgLoader_FACTORY_REGISTERED 
  #define BgLoader_FACTORY_REGISTERED 
    BgLoader_StaticInit BgLoader_static_init__; 
  #endif
public:
 bgloader();
};
bgloader::bgloader() {}

}
