//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSProgress, WFLActionImplementation, WFLWorkflow;

@interface WFLWorkflowController : NSObject
{
    _Bool _running;
    id <WFLWorkflowControllerDelegate> _delegate;
    WFLWorkflow *_workflow;
    NSProgress *_progress;
    long long _executionContext;
    unsigned long long _currentActionIndex;
    WFLActionImplementation *_currentActionImplementation;
}

+ (void)initialize;
@property(retain, nonatomic) WFLActionImplementation *currentActionImplementation; // @synthesize currentActionImplementation=_currentActionImplementation;
@property(nonatomic) unsigned long long currentActionIndex; // @synthesize currentActionIndex=_currentActionIndex;
@property(nonatomic) long long executionContext; // @synthesize executionContext=_executionContext;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
@property(readonly, nonatomic) WFLWorkflow *workflow; // @synthesize workflow=_workflow;
@property(nonatomic) __weak id <WFLWorkflowControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)userInterfaceForRunningAction:(id)arg1;
- (void)workflowControllerDidFinishRunningAction:(id)arg1;
- (void)workflowControllerWillRunAction:(id)arg1 withInput:(id)arg2 proceedHandler:(CDUnknownBlockType)arg3;
- (void)workflowControllerDidStopWithError:(id)arg1;
- (void)workflowControllerDidFinishRunningWithOutput:(id)arg1;
- (void)workflowControllerWillRun;
- (id)createImplementationForAction:(id)arg1;
- (void)stepWithInput:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)launchAppWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stop;
- (void)runWithInput:(id)arg1;
- (void)dealloc;
- (id)initWithWorkflow:(id)arg1;

@end

