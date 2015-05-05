#ifndef RGBDSLAM_RENDERABLE_H
#define RGBDSLAM_RENDERABLE_H

namespace rgbdslam{
class Renderable {
  public:
  virtual void render() = 0;
};
} // namespace rgbdslam
#endif
