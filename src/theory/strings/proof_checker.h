/*********************                                                        */
/*! \file proof_checker.h
 ** \verbatim
 ** Top contributors (to current version):
 **   Andrew Reynolds
 ** This file is part of the CVC4 project.
 ** Copyright (c) 2009-2019 by the authors listed in the file AUTHORS
 ** in the top-level source directory) and their institutional affiliations.
 ** All rights reserved.  See the file COPYING in the top-level source
 ** directory for licensing information.\endverbatim
 **
 ** \brief Strings proof utility
 **/

#include "cvc4_private.h"

#ifndef CVC4__THEORY__STRINGS__PROOF_CHECKER_H
#define CVC4__THEORY__STRINGS__PROOF_CHECKER_H

#include "expr/node.h"
#include "expr/proof_checker.h"
#include "expr/proof_node.h"

namespace CVC4 {
namespace theory {
namespace strings {

/** A checker for strings proofs */
class StringProofChecker : public ProofStepChecker
{
 public:
  StringProofChecker() {}
  ~StringProofChecker() {}
  /** Return the conclusion of the given proof step, or null if it is invalid */
  Node check(ProofStep id,
             const std::vector<std::shared_ptr<ProofNode>>& children,
             const std::vector<Node>& args) override;
};

}  // namespace strings
}  // namespace theory
}  // namespace CVC4

#endif /* CVC4__THEORY__STRINGS__PROOF_CHECKER_H */