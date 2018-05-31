// Copyright 2018 EAP

#ifndef LIB_COMMUNICATION_RAW_REQUEST_PACKET_H_
#define LIB_COMMUNICATION_RAW_REQUEST_PACKET_H_

#include <stdint.h>
#include <array>
#include <string>

namespace communication {
namespace raw {

static const size_t packet_length = 64;

class RequestPacket {
 public:
  RequestPacket() = delete;
  RequestPacket(std::array<uint8_t, packet_length> data, int max_retries);
  ~RequestPacket();
  int MaxRetries() const;
  std::array<uint8_t, packet_length> GetData() const;
 private:
  std::array<uint8_t, packet_length> m_data;
  int m_max_retries;
};

}  // namespace raw
}  // namespace communication

#endif  // LIB_COMMUNICATION_RAW_REQUEST_PACKET_H_
