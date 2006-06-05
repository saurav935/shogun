#ifdef SVMCPLEX
/*
 * MATLAB Compiler: 2.1
 * Date: Sun Nov 11 18:41:15 2001
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-m" "-W" "main" "-L"
 * "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-O" "all" "-O"
 * "fold_scalar_mxarrays:on" "-O" "fold_non_scalar_mxarrays:on" "-O"
 * "optimize_integer_for_loops:on" "-O" "array_indexing:on" "-O"
 * "optimize_conditionals:on" "train_svm" 
 */
#include "cplex_quit_mex_interface.h"

void InitializeModule_cplex_quit_mex_interface(void) {
}

void TerminateModule_cplex_quit_mex_interface(void) {
}

static mxArray * Mcplex_quit(int nargout_, mxArray * varargin);

_mexLocalFunctionTable _local_function_table_cplex_quit
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNCplex_quit" contains the nargout interface for the
 * "cplex_quit" M-function from file
 * "/opt/home/raetsch/CANDY/matlab/cplex/cplex_quit.mexglx" (lines 0-0). This
 * interface is only produced if the M-function uses the special variable
 * "nargout". The nargout interface allows the number of requested outputs to
 * be specified via the nargout argument, as opposed to the normal interface
 * which dynamically calculates the number of outputs based on the number of
 * non-NULL inputs it receives. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
mxArray * mlfNCplex_quit(int nargout, mlfVarargoutList * varargout, ...) {
    mxArray * varargin = NULL;
    mlfVarargin(&varargin, varargout, 0);
    mlfEnterNewContext(0, -1, varargin);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout) = Mcplex_quit(nargout, varargin);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlfCplex_quit" contains the normal interface for the
 * "cplex_quit" M-function from file
 * "/opt/home/raetsch/CANDY/matlab/cplex/cplex_quit.mexglx" (lines 0-0). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfCplex_quit(mlfVarargoutList * varargout, ...) {
    mxArray * varargin = NULL;
    int nargout = 0;
    mlfVarargin(&varargin, varargout, 0);
    mlfEnterNewContext(0, -1, varargin);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout) = Mcplex_quit(nargout, varargin);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlfVCplex_quit" contains the void interface for the
 * "cplex_quit" M-function from file
 * "/opt/home/raetsch/CANDY/matlab/cplex/cplex_quit.mexglx" (lines 0-0). The
 * void interface is only produced if the M-function uses the special variable
 * "nargout", and has at least one output. The void interface function
 * specifies zero output arguments to the implementation version of the
 * function, and in the event that the implementation version still returns an
 * output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVCplex_quit(mxArray * synthetic_varargin_argument, ...) {
    mxArray * varargin = NULL;
    mxArray * varargout = NULL;
    mlfVarargin(&varargin, synthetic_varargin_argument, 1);
    mlfEnterNewContext(0, -1, varargin);
    varargout = Mcplex_quit(0, synthetic_varargin_argument);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
}

/*
 * The function "mlxCplex_quit" contains the feval interface for the
 * "cplex_quit" M-function from file
 * "/opt/home/raetsch/CANDY/matlab/cplex/cplex_quit.mexglx" (lines 0-0). The
 * feval function calls the implementation version of cplex_quit through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxCplex_quit(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[1];
    int i;
    for (i = 0; i < 1; ++i) {
        mplhs[i] = mclGetUninitializedArray();
    }
    mlfEnterNewContext(0, 0);
    mprhs[0] = NULL;
    mlfAssign(&mprhs[0], mclCreateVararginCell(nrhs, prhs));
    mplhs[0] = Mcplex_quit(nlhs, mprhs[0]);
    mclAssignVarargoutCell(0, nlhs, plhs, mplhs[0]);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(mprhs[0]);
}

/*
 * The function "Mcplex_quit" is the implementation version of the "cplex_quit"
 * M-function from file
 * "/opt/home/raetsch/CANDY/matlab/cplex/cplex_quit.mexglx" (lines 1-1). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
static mxArray * Mcplex_quit(int nargout_, mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_ = mclSetCurrentLocalFunctionTable(
                                                         &_local_function_table_cplex_quit);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return mclCExecMexFunction("cplex_quit", nargout_, varargin);
}
#endif 

