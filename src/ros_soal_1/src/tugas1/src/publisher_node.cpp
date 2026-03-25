#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

int main(int argc, char * argv[]) {
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("node_publisher");
  auto publisher = node->create_publisher<std_msgs::msg::String>("topik", 10);
  
  rclcpp::WallRate loop_rate(1); // 1 Hz (1 detik sekali)
  while (rclcpp::ok()) {
    auto pesan = std_msgs::msg::String();
    pesan.data = "URO URO URO";
    RCLCPP_INFO(node->get_logger(), "Mengirim: '%s'", pesan.data.c_str());
    publisher->publish(pesan);
    rclcpp::spin_some(node);
    loop_rate.sleep();
  }
  rclcpp::shutdown();
  return 0;
}