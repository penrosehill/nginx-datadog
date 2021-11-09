#pragma once

#include <opentracing/string_view.h>
#include "ot.h"


extern "C" {
#include <nginx.h>
#include <ngx_config.h>
#include <ngx_core.h>
#include <ngx_http.h>
}

#include <string>
#include <utility>
#include <vector>

namespace datadog {
namespace nginx {
//------------------------------------------------------------------------------
// opentracing_context_variable_name
//------------------------------------------------------------------------------
extern const ot::string_view opentracing_context_variable_name;

//------------------------------------------------------------------------------
// add_variables
//------------------------------------------------------------------------------
ngx_int_t add_variables(ngx_conf_t* cf) noexcept;
}  // namespace nginx
}  // namespace datadog