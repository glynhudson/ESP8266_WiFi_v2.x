#include "web_server.config.js.h"
#include "web_server.home.htm.h"
#include "web_server.lib.js.h"
#include "web_server.style.css.h"
StaticFile staticFiles[] = {
  { "/config.js", CONTENT_CONFIG_JS, sizeof(CONTENT_CONFIG_JS) - 1, _CONTENT_TYPE_JS },
  { "/home.htm", CONTENT_HOME_HTM, sizeof(CONTENT_HOME_HTM) - 1, _CONTENT_TYPE_HTML },
  { "/lib.js", CONTENT_LIB_JS, sizeof(CONTENT_LIB_JS) - 1, _CONTENT_TYPE_JS },
  { "/style.css", CONTENT_STYLE_CSS, sizeof(CONTENT_STYLE_CSS) - 1, _CONTENT_TYPE_CSS },
};
