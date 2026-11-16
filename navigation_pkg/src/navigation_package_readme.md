# Navigation Package (`navigation_pkg`)

A beginner-friendly ROS 2 C++ package demonstrating node architecture, custom message communication, timers, and object-oriented programming concepts using ROS 2 Humble.

---

## Node Components & Files

This package contains two main ROS 2 nodes utilizing a custom 2D coordinate message (`navi_interfaces::msg::Coord2d`):

1. **`navi_node` (Publisher)**
   * **Purpose:** Acts as a data producer. It uses a wall timer (triggered every 500ms) to periodically publish incrementing 2D coordinates (`x`, `y`) onto `"navi_topic"`.
   * **Key Concepts Used:** `rclcpp::Node`, `create_publisher`, `create_wall_timer`, smart pointers (`std::make_shared`), and `printf`-style logging (`RCLCPP_INFO`).

2. **`navi_subscriber` (Subscriber)**
   * **Purpose:** Acts as a data consumer. It listens to `"navi_topic"` and reads incoming `Coord2d` messages via a registered callback function.
   * **Key Concepts Used:** `create_subscription`, `std::bind`, placeholders (`_1`), `const` member functions for safe state management, and asynchronous event-driven callbacks.

---

## Quick Start

1. **Build the workspace:**
   ```bash
   cd ~/ssy236_ws
   colcon build --packages-select navigation_pkg navi_interfaces
   ```

2. **Source the workspace overlay:**
   ```bash
   source install/setup.bash
   ```

3. **Run the Publisher (`navi_node`):**
   ```bash
   ros2 run navigation_pkg navi_node
   ```

4. **Run the Subscriber (`navi_subscriber` in a separate terminal):**
   ```bash
   source install/setup.bash
   ros2 run navigation_pkg navi_subscriber
   ```

---

## References

* **ROS 2 Documentation:** [Official ROS 2 Humble Documentation](https://docs.ros.org/en/humble/)
* **C++ Standard Library:** 
  * `std::shared_ptr` & memory management (`<memory>`)
  * `std::bind` & functional adapters (`<functional>`)
  * Chrono literals for time intervals (`<chrono>`)
* **Course Materials:** SSY236 Course guidelines on ROS 2 node architecture and custom interfaces.

---

## AI Disclosure

During the development of this project, an AI assistant (Google Gemini) was utilized as a coding coach and debugging partner. Specifically, AI assistance was used for:
* **Conceptual Guidance:** Understanding advanced C++ constructs used in ROS 2, such as the role of the `this` pointer, `std::make_shared`, `std::bind` with placeholders (`_1`), and `const` member qualifiers.
* **Debugging Build & Syntax Errors:** Resolving compilation issues, including namespace typos (`rclcpp`), formatting discrepancies in logging macros (`RCLCPP_INFO`), correcting template arguments for custom messages, and configuring timer duration literals (`std::chrono_literals`).
* **Documentation Structuring:** Organizing best practices for ROS 2 node implementation.