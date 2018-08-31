// Generated by zsLibEventingTool

#pragma once

#include "types.h"
#include "generated/org_webRtc_RTCRtpStreamStats.h"


namespace wrapper {
  namespace impl {
    namespace org {
      namespace webRtc {

        struct RTCRtpStreamStats : public wrapper::org::webRtc::RTCRtpStreamStats
        {
          ZS_DECLARE_TYPEDEF_PTR(wrapper::org::webRtc::RTCRtpStreamStats, WrapperType);
          ZS_DECLARE_TYPEDEF_PTR(wrapper::impl::org::webRtc::RTCRtpStreamStats, WrapperImplType);
          RTCRtpStreamStatsWeakPtr thisWeak_;

          RTCRtpStreamStats() noexcept;
          virtual ~RTCRtpStreamStats() noexcept;


          // properties RTCStats
          ::zsLib::Time get_timestamp() noexcept override;
          Optional< wrapper::org::webRtc::RTCStatsType > get_statsType() noexcept override;
          String get_statsTypeOther() noexcept override;
          String get_id() noexcept override;

          // properties RTCRtpStreamStats
          Optional< uint32_t > get_ssrc() noexcept override;
          String get_kind() noexcept override;
          String get_transportId() noexcept override;
          String get_codecId() noexcept override;
          unsigned long get_firCount() noexcept override;
          unsigned long get_pliCount() noexcept override;
          unsigned long get_nackCount() noexcept override;
          unsigned long get_sliCount() noexcept override;
          unsigned long long get_qpSum() noexcept override;
        };

      } // webRtc
    } // org
  } // namespace impl
} // namespace wrapper
