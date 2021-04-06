//
// Copyright (c) 2015-2021 CNRS INRIA
// Copyright (c) 2015 Wandercraft, 86 rue de Paris 91400 Orsay, France.
//

#ifndef __pinocchio_python_python_hpp__
#define __pinocchio_python_python_hpp__

#include "pinocchio/fwd.hpp"
#include <eigenpy/eigenpy.hpp>

namespace pinocchio
{
  namespace python
  {
    // Expose spatial classes
    void exposeSE3();
    void exposeForce();
    void exposeMotion();
    void exposeInertia();
    void exposeExplog();
    void exposeSkew();
    void exposeLieGroups();

    // Expose math module
    void exposeRpy();
    
    // Expose multibody classes
    void exposeJoints();
    void exposeModel();
    void exposeFrame();
    void exposeData();
    
    // Expose geometry module
    void exposeGeometry();
    
    // Expose parsers
    void exposeParsers();
    
    // Expose algorithms
    void exposeAlgorithms();
    
#ifdef PINOCCHIO_PYTHON_INTERFACE_WITH_HPP_FCL_PYTHON_BINDINGS
    void exposeFCL();
#endif // PINOCCHIO_PYTHON_INTERFACE_WITH_HPP_FCL_PYTHON_BINDINGS
  
#ifdef PINOCCHIO_PYTHON_INTERFACE_WITH_OPENMP
    void exposePool();
#endif

  } // namespace python
} // namespace pinocchio

#endif // ifndef __pinocchio_python_python_hpp__
