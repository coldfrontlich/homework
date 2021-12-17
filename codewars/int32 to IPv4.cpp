std::string uint32_to_ip(uint32_t ip){
  std::string ip_str = "";
  for (int i = 0; i < 4; i++)
  {
    ip_str = std::to_string(ip % 256) + ip_str;
    ip /= 256;
    if (i != 3)
      ip_str = '.' + ip_str;
  }
  return ip_str;
}
