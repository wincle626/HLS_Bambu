/*
 *                 _/_/_/    _/_/   _/    _/ _/_/_/    _/_/
 *                _/   _/ _/    _/ _/_/  _/ _/   _/ _/    _/
 *               _/_/_/  _/_/_/_/ _/  _/_/ _/   _/ _/_/_/_/
 *              _/      _/    _/ _/    _/ _/   _/ _/    _/
 *             _/      _/    _/ _/    _/ _/_/_/  _/    _/
 *
 *           ***********************************************
 *                            PandA Project
 *                   URL: http://panda.dei.polimi.it
 *                     Politecnico di Milano - DEIB
 *                      System Architectures Group
 *           ***********************************************
 *            Copyright (c) 2004-2017 Politecnico di Milano
 *
 * This file is part of the PandA framework.
 *
 * The PandA framework is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


/// @file
/// @brief This file contains the declaration of the
/// CallGraphBuiltinCall pass that will add function called through a
/// built in to the call graph.

#ifndef CALL_GRAPH_BUILTIN_CALL_HPP
#define CALL_GRAPH_BUILTIN_CALL_HPP

#include "function_frontend_flow_step.hpp"

#include <unordered_set>

#include "refcount.hpp"

REF_FORWARD_DECL(tree_node);

/// @brief Pass to add function called through pointers to the call graph.
class CallGraphBuiltinCall : public FunctionFrontendFlowStep
{
   private:
      typedef std::map<std::string, std::set<unsigned int> > TypeDeclarationMap;
      bool modified;

      /**
       * Map function types to matching declarations.
       */
      TypeDeclarationMap typeToDeclaration;

      void lookForBuiltinCall(const tree_nodeRef TN);

      void ExtendCallGraph(unsigned int callerIdx, tree_nodeRef funType,
            unsigned int stmtIdx);

   protected:
      /// @brief State relationship with other design step
      ///
      /// @param RT Type of the relationship to be considered
      const std::unordered_set<std::pair<FrontendFlowStepType, FunctionRelationship> >
         ComputeFrontendRelationships(DesignFlowStep::RelationshipType RT) const;

   public:
      /// @brief Ctor.
      ///
      /// @param AM Application Manager
      /// @param functionId Function id of the analyzed function.
      /// @param DFM Design Flow Manager
      /// @param P Set of parameters
      CallGraphBuiltinCall(const application_managerRef AM,
            unsigned int functionId,
            const DesignFlowManagerConstRef DFM,
            const ParameterConstRef P);

      virtual ~CallGraphBuiltinCall();
      void Initialize();

      DesignFlowStep_Status InternalExec();
};

#endif /* CALL_GRAPH_BUILTIN_CALL_H */
