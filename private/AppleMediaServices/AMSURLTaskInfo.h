//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AMSURLAction, AMSURLRequestProperties, NSError, NSMutableData, NSURLResponse, NSURLSession, NSURLSessionTask, NSURLSessionTaskMetrics;

__attribute__((visibility("hidden")))
@interface AMSURLTaskInfo : NSObject
{
    NSMutableData *_data;
    NSError *_error;
    NSURLSessionTaskMetrics *_metrics;
    AMSURLRequestProperties *_properties;
    AMSURLAction *_receivedAction;
    NSURLResponse *_response;
    NSURLSession *_session;
    NSURLSessionTask *_task;
    CDUnknownBlockType _completionBlock;
}

+ (id)sharedTaskQueue;
+ (id)sharedTaskStore;
+ (void)removeTaskInfoForTask:(id)arg1;
+ (id)createTaskInfoForTask:(id)arg1;
+ (id)taskInfoForTask:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) NSURLSessionTask *task; // @synthesize task=_task;
@property(nonatomic) __weak NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) AMSURLAction *receivedAction; // @synthesize receivedAction=_receivedAction;
@property(retain, nonatomic) AMSURLRequestProperties *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) NSURLSessionTaskMetrics *metrics; // @synthesize metrics=_metrics;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)initWithTask:(id)arg1;

@end

