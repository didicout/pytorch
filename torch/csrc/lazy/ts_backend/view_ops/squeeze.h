#pragma once

#include <torch/csrc/lazy/ts_backend/ts_node.h>

namespace torch {
namespace lazy {

class TORCH_API Squeeze : public TsNode {
 public:
  // Squeeze out the specified dimension index, -1 for all trivial dimensions.
  Squeeze(const torch::lazy::Value& input, int dim);

  std::string ToString() const override;

  int dim() const { return dim_; }

 private:
  int dim_;
};

}  // namespace lazy
}  // namespace torch
