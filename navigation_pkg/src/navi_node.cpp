#include <cstdio>

#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include <rclcpp/rclcpp.hpp>
#include "navi_interfaces/msg/coord2d.hpp"

using namespace std::chrono_literals;

class NaviPublisher : public rclcpp::Node{
  public:
    NaviPublisher() : Node("NaviPublisher"),counter(0){
      publisher = this->create_publisher<navi_interfaces::msg::Coord2d>("navi_topic",10);

      timer = this->create_wall_timer(
        500ms, std::bind(&NaviPublisher::publish_callback, this)
      );
    }

  private:
    void publish_callback(){
      auto message = navi_interfaces::msg::Coord2d();
      message.x = this->counter++;
      message.y = 0;
      RCLCPP_INFO(this->get_logger(), "Publishing: %f %f", message.x, message.y);
      publisher->publish(message);
    };

    rclcpp::TimerBase::SharedPtr timer;
    rclcpp::Publisher<navi_interfaces::msg::Coord2d>::SharedPtr publisher;
    size_t counter;



};


int main(int argc, char ** argv)
{
rclcpp::init(argc,argv);
rclcpp::spin(std::make_shared<NaviPublisher>());
rclcpp::shutdown();
}
