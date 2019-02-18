// Generated by zsLibEventingTool

#pragma once

#include "types.h"
#include "generated/org_webRtc_WebRtcFactoryConfiguration.h"


namespace wrapper {
  namespace impl {
    namespace org {
      namespace webRtc {

        struct WebRtcFactoryConfiguration : public wrapper::org::webRtc::WebRtcFactoryConfiguration
        {
          ZS_DECLARE_TYPEDEF_PTR(wrapper::org::webRtc::WebRtcFactoryConfiguration, WrapperType);
          ZS_DECLARE_TYPEDEF_PTR(wrapper::impl::org::webRtc::WebRtcFactoryConfiguration, WrapperImplType);
          WebRtcFactoryConfigurationWeakPtr thisWeak_;

          WebRtcFactoryConfiguration() noexcept;
          virtual ~WebRtcFactoryConfiguration() noexcept;

          void wrapper_init_org_webRtc_WebRtcFactoryConfiguration() noexcept override;
        };

      } // webRtc
    } // org
  } // namespace impl
} // namespace wrapper

