//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKDatabaseOperation.h>

@class NSData, NSError, NSString;

@interface CKCodeFunctionInvokeOperation : CKDatabaseOperation
{
    CDUnknownBlockType _functionInvokeCompletionBlock;
    NSString *_serviceName;
    NSString *_functionName;
    NSData *_serializedParameters;
    NSData *_serializedResponse;
    NSError *_reponseError;
}

@property(retain, nonatomic) NSError *reponseError; // @synthesize reponseError=_reponseError;
@property(copy, nonatomic) NSData *serializedResponse; // @synthesize serializedResponse=_serializedResponse;
@property(copy, nonatomic) NSData *serializedParameters; // @synthesize serializedParameters=_serializedParameters;
@property(copy, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(copy, nonatomic) CDUnknownBlockType functionInvokeCompletionBlock; // @synthesize functionInvokeCompletionBlock=_functionInvokeCompletionBlock;
- (void).cxx_destruct;
- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (id)initWithServiceName:(id)arg1 functionName:(id)arg2 serializedParameters:(id)arg3;

@end

