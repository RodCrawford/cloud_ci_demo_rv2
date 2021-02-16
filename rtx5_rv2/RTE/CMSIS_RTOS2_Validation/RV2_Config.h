/*-----------------------------------------------------------------------------
 *      Name:         RV2_Config.h 
 *      Purpose:      RV2 Config header
 *----------------------------------------------------------------------------
 *      Copyright(c) KEIL - An ARM Company
 *----------------------------------------------------------------------------*/
#ifndef __RV2_CONFIG_H
#define __RV2_CONFIG_H

#include "RTE_Components.h"
#include CMSIS_device_header

#define DEF_IRQHandler Interrupt0_Handler

//-------- <<< Use Configuration Wizard in Context Menu >>> --------------------

// <h> Common Test Settings
// <o> Print Output Format <0=> Plain Text <1=> XML
// <i> Set the test results output format to plain text or XML
#ifndef PRINT_XML_REPORT
#define PRINT_XML_REPORT            1 
#endif
// <o> Buffer size for assertions results
// <i> Set the buffer size for assertions results buffer
#define BUFFER_ASSERTIONS           128  
// <o> OS Timer tick interval value [us] <1-1000000>
// <i> The OS Timer tick interval value is used to calculate timeout values
#define RTOS_TICK_TIME              1000
// <o> IRQ number
// <i> IRQ number for software interrupt handler
#define DEF_IRQ_NUM                 0
// </h>

// <h> Specific Test Settings
// <o> Maximum Event Flags
// <i> Maximum number of Event Flags available per object
#define MAX_EVFLAGS_CNT             31  
// <o> Maximum Semaphore Tokens
// <i> Maximum count for osSemaphoreCreate function
#define MAX_SEMAPHORE_CNT           65535
//   <h> Measure Ticks Accuracy
//   <i> Wait accuracy in promiles
//     <o00> Accuracy osDelay                              
//     <o01> Accuracy osWait
//     <o02> Accuracy osThreadFlagsWait
//     <o03> Accuracy osEventFlagsWait
//     <o04> Accuracy osMutexWait
//     <o05> Accuracy osSemaphoreWait
//     <o06> Accuracy osMessageWait
#define ACCURACY_OS_DELAY            5   
#define ACCURACY_OS_WAIT             5   
#define ACCURACY_OS_THREADFLAGS_WAIT 5   
#define ACCURACY_OS_EVENTFLAGS_WAIT  5   
#define ACCURACY_OS_MUTEX_WAIT       5  
#define ACCURACY_OS_SEMAPHORE_WAIT   5  
#define ACCURACY_OS_MESSAGE_WAIT     5  
//   </h>
// </h>

// <h> Memory Allocation
// <i> Memory allocation tests configuration
//   <o>Main Thread Stack <128-16384>
//   <i> Stack size for test runner thread (default: 1024)
#define MAIN_THREAD_STACK            1024
//   <o>Maximum number of thread objects <1-999>
//   <i> OS_THREAD_NUM - 1
#define MAX_THREAD_NUM               9  
//   <o>Maximum number of timer objects <1-1000>
//   <i> OS_TIMER_NUM
#define MAX_TIMER_NUM               50 
//   <o>Maximum number of event flags objects <1-1000>
//   <i> OS_EVFLAGS_NUM
#define MAX_EVFLAGS_NUM             50
//   <o>Maximum number of mutex objects <1-1000>
//   <i> OS_MUTEX_NUM
#define MAX_MUTEX_NUM               50
//   <o>Maximum number of semaphore objects <1-1000>
//   <i> OS_SEMAPHORE_NUM
#define MAX_SEMAPHORE_NUM           50
//   <o>Maximum number of memory pool objects <1-1000>
//   <i> OS_MEMPOOL_NUM
#define MAX_MEMPOOL_NUM             10
//   <o>Maximum number of message queue objects <1-1000>
//   <i> OS_MSGQUEUE_NUM
#define MAX_MSGQUEUE_NUM            10
// </h>

// <h> Disable Test Cases
// <i> Uncheck to disable an individual test case
// <q00> TC_KernelBasic                              
// <q01> TC_KernelInterrupts                           
// <q02> TC_ThreadAllocation          
// <q03> TC_ThreadNew                    
// <q04> TC_ThreadMultiInstance                        
// <q05> TC_ThreadTerminate                            
// <q06> TC_ThreadRestart                              
// <q07> TC_ThreadGetId                                
// <q08> TC_ThreadPriority                             
// <q09> TC_ThreadPriorityExec                         
// <q10> TC_ThreadChainedCreate          
// <q11> TC_ThreadYield                                
// <q12> TC_ThreadSuspendResume                        
// <q13> TC_ThreadJoinDetach             
// <q14> TC_ThreadReturn
// <q15> TC_ThreadExit                   
// <q16> TC_ThreadParam                  
// <q17> TC_ThreadInterrupts             
// <q18> TC_GenWaitBasic                 
// <q19> TC_GenWaitInterrupts           
// <q20> TC_TimerAllocation           
// <q21> TC_TimerOneShot                 
// <q22> TC_TimerPeriodic                
// <q23> TC_TimerParam                   
// <q24> TC_TimerInterrupts              
// <q25> TC_ThreadFlagsMainThread        
// <q26> TC_ThreadFlagsChildThread       
// <q27> TC_ThreadFlagsChildToParent     
// <q28> TC_ThreadFlagsChildToChild      
// <q29> TC_ThreadFlagsWaitTimeout       
// <q30> TC_ThreadFlagsCheckTimeout      
// <q31> TC_ThreadFlagsParam             
// <q32> TC_ThreadFlagsInterrupts      
// <q33> TC_EventFlagsAllocation      
// <q34> TC_EventFlagsSetAll             
// <q35> TC_EventFlagsInterThreads       
// <q36> TC_EventFlagsCheckTimeout       
// <q37> TC_EventFlagsWaitTimeout        
// <q38> TC_EventFlagsDeleteWaiting      
// <q39> TC_EventFlagsParam              
// <q40> TC_EventFlagsInterrupts       
// <q41> TC_SemaphoreAllocation       
// <q42> TC_SemaphoreCreateAndDelete     
// <q43> TC_SemaphoreObtainCounting      
// <q44> TC_SemaphoreObtainBinary        
// <q45> TC_SemaphoreWaitForBinary       
// <q46> TC_SemaphoreWaitForCounting     
// <q47> TC_SemaphoreZeroCount           
// <q48> TC_SemaphoreWaitTimeout         
// <q49> TC_SemaphoreCheckTimeout        
// <q50> TC_SemaphoreParam               
// <q51> TC_SemaphoreInterrupts          
// <q52> TC_MutexAllocation           
// <q53> TC_MutexBasic                   
// <q54> TC_MutexTimeout                 
// <q55> TC_MutexCheckTimeout            
// <q56> TC_MutexRobust               
// <q57> TC_MutexPrioInherit             
// <q58> TC_MutexNestedAcquire           
// <q59> TC_MutexPriorityInversion       
// <q60> TC_MutexOwnership               
// <q61> TC_MutexParam                   
// <q62> TC_MutexInterrupts          
// <q63> TC_MemPoolAllocation          
// <q64> TC_MemPoolAllocAndFree          
// <q65> TC_MemPoolAllocAndFreeComb      
// <q66> TC_MemPoolZeroInit              
// <q67> TC_MemPoolParam                 
// <q68> TC_MemPoolInterrupts            
// <q69> TC_MsgQAllocation              
// <q70> TC_MsgQBasic                    
// <q71> TC_MsgQWait                     
// <q72> TC_MsgQCheckTimeout             
// <q73> TC_MsgQParam                    
// <q74> TC_MsgQInterrupts               
// <q75> TC_MsgFromThreadToISR           
// <q76> TC_MsgFromISRToThread           
// <q77> TC_MeasureOsDelayTicks          
// <q78> TC_MeasureOsThreadFlagsWaitTicks
// <q79> TC_MeasureOsEventFlagsWaitTicks 
// <q80> TC_MeasureOsMutexWaitTicks      
// <q81> TC_MeasureOsSemaphoreWaitTicks  
// <q82> TC_MeasureOsMessageWaitTicks 
#define TC_KERNELBASIC_EN                      1
#define TC_KERNELINTERRUPTS_EN                 1
#define TC_THREADALLOCATION_EN                 0
#define TC_THREADNEW_EN                        1
#define TC_THREADMULTIINSTANCE_EN              1
#define TC_THREADTERMINATE_EN                  1
#define TC_THREADRESTART_EN                    1
#define TC_THREADGETID_EN                      1
#define TC_THREADPRIORITY_EN                   1
#define TC_THREADPRIORITYEXEC_EN               1
#define TC_THREADCHAINEDCREATE_EN              1
#define TC_THREADYIELD_EN                      1
#define TC_THREADSUSPENDRESUME_EN              1
#define TC_THREADJOINDETACH_EN                 1
#define TC_THREADRETURN_EN                     1
#define TC_THREADEXIT_EN                       1
#define TC_THREADPARAM_EN                      1
#define TC_THREADINTERRUPTS_EN                 1
#define TC_GENWAITBASIC_EN                     1
#define TC_GENWAITINTERRUPTS_EN                1
#define TC_TIMERALLOCATION_EN                  0
#define TC_TIMERONESHOT_EN                     1
#define TC_TIMERPERIODIC_EN                    1
#define TC_TIMERPARAM_EN                       1
#define TC_TIMERINTERRUPTS_EN                  1
#define TC_THREADFLAGSMAINTHREAD_EN            1
#define TC_THREADFLAGSCHILDTHREAD_EN           1
#define TC_THREADFLAGSCHILDTOPARENT_EN         1
#define TC_THREADFLAGSCHILDTOCHILD_EN          1
#define TC_THREADFLAGSWAITTIMEOUT_EN           1
#define TC_THREADFLAGSCHECKTIMEOUT_EN          1
#define TC_THREADFLAGSPARAM_EN                 1
#define TC_THREADFLAGSINTERRUPTS_EN            1
#define TC_EVENTFLAGSALLOCATION_EN             0
#define TC_EVENTFLAGSSETALL_EN                 1
#define TC_EVENTFLAGSINTERTHREADS_EN           1
#define TC_EVENTFLAGSCHECKTIMEOUT_EN           1
#define TC_EVENTFLAGSWAITTIMEOUT_EN            1
#define TC_EVENTFLAGSDELETEWAITING_EN          1
#define TC_EVENTFLAGSPARAM_EN                  1
#define TC_EVENTFLAGSINTERRUPTS_EN             1
#define TC_SEMAPHOREALLOCATION_EN              0
#define TC_SEMAPHORECREATEANDDELETE_EN         1
#define TC_SEMAPHOREOBTAINCOUNTING_EN          1
#define TC_SEMAPHOREOBTAINBINARY_EN            1
#define TC_SEMAPHOREWAITFORBINARY_EN           1
#define TC_SEMAPHOREWAITFORCOUNTING_EN         1
#define TC_SEMAPHOREZEROCOUNT_EN               1
#define TC_SEMAPHOREWAITTIMEOUT_EN             1
#define TC_SEMAPHORECHECKTIMEOUT_EN            1
#define TC_SEMAPHOREPARAM_EN                   1
#define TC_SEMAPHOREINTERRUPTS_EN              1
#define TC_MUTEXALLOCATION_EN                  0
#define TC_MUTEXBASIC_EN                       1
#define TC_MUTEXTIMEOUT_EN                     1
#define TC_MUTEXCHECKTIMEOUT_EN                1
#define TC_MUTEXROBUST_EN                      1
#define TC_MUTEXPRIOINHERIT_EN                 1
#define TC_MUTEXNESTEDACQUIRE_EN               1
#define TC_MUTEXPRIORITYINVERSION_EN           1
#define TC_MUTEXOWNERSHIP_EN                   1
#define TC_MUTEXPARAM_EN                       1
#define TC_MUTEXINTERRUPTS_EN                  1
#define TC_MEMPOOLALLOCATION_EN                0
#define TC_MEMPOOLALLOCANDFREE_EN              1
#define TC_MEMPOOLALLOCANDFREECOMB_EN          1
#define TC_MEMPOOLZEROINIT_EN                  1
#define TC_MEMPOOLPARAM_EN                     1
#define TC_MEMPOOLINTERRUPTS_EN                1
#define TC_MSGQALLOCATION_EN                   0
#define TC_MSGQBASIC_EN                        1
#define TC_MSGQWAIT_EN                         1
#define TC_MSGQCHECKTIMEOUT_EN                 1
#define TC_MSGQPARAM_EN                        1
#define TC_MSGQINTERRUPTS_EN                   1
#define TC_MSGFROMTHREADTOISR_EN               1
#define TC_MSGFROMISRTOTHREAD_EN               1
#define TC_MEASUREOSDELAYTICKS_EN              0
#define TC_MEASUREOSTHREADFLAGSWAITTICKS_EN    0
#define TC_MEASUREOSEVENTFLAGSWAITTICKS_EN     0
#define TC_MEASUREOSMUTEXWAITTICKS_EN          0
#define TC_MEASUREOSSEMAPHOREWAITTICKS_EN      0
#define TC_MEASUREOSMESSAGEWAITTICKS_EN        0
// </h>

#endif /* __RV_CONFIG_H */
