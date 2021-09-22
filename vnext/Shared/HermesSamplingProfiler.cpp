// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

#include "pch.h"

#include <hermes/hermes.h>
#include <chrono>
#include <future>

#include "HermesSamplingProfiler.h"
#include "Utils.h"

namespace Microsoft::ReactNative {

namespace {
std::future<std::string> getTraceFilePath() noexcept {
  auto hermesDataPath = co_await Microsoft::React::getApplicationDataPath(L"Hermes");
  std::ostringstream os;
  auto now = std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::system_clock::now().time_since_epoch())
                 .count();

  os << hermesDataPath << "\\cpu_" << now << ".cpuprofile";
  co_return os.str();
}
} // namespace

bool HermesSamplingProfiler::s_isStarted = false;
std::string HermesSamplingProfiler::s_lastTraceFilePath;

std::string HermesSamplingProfiler::GetLastTraceFilePath() noexcept {
  return s_lastTraceFilePath;
}

winrt::fire_and_forget HermesSamplingProfiler::Start() noexcept {
#ifdef INCLUDE_HERMES
  if (!s_isStarted) {
    s_isStarted = true;
    co_await winrt::resume_background();
    facebook::hermes::HermesRuntime::enableSamplingProfiler();
  }
#endif
  co_return;
}

std::future<std::string> HermesSamplingProfiler::Stop() noexcept {
#ifdef INCLUDE_HERMES
  if (s_isStarted) {
    s_isStarted = false;
    co_await winrt::resume_background();
    facebook::hermes::HermesRuntime::disableSamplingProfiler();
    s_lastTraceFilePath = co_await getTraceFilePath();
    facebook::hermes::HermesRuntime::dumpSampledTraceToFile(s_lastTraceFilePath);
  }
#endif
  co_return s_lastTraceFilePath;
}

bool HermesSamplingProfiler::IsStarted() noexcept {
  return s_isStarted;
}

} // namespace Microsoft::ReactNative
