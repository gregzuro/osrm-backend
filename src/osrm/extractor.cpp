#include "osrm/extractor.hpp"
#include "extractor/extractor.hpp"
#include "extractor/extractor_config.hpp"
#include "extractor/scripting_environment_lua.hpp"

namespace osrm
{

// Pimpl-like facade

void extract(const extractor::ExtractorConfig &config)
{
    extractor::Sol2ScriptingEnvironment scripting_environment(config.profile_path.string().c_str());
    extractor::Extractor(config).run(scripting_environment);
}

} // ns osrm
