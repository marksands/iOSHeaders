//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData, NSObject<OS_dispatch_queue>, NSString, NSURL, NSURLRequest, NSURLResponse, NSUUID, NWPathEvaluator;

@interface NEFilterSource : NSObject
{
    _Bool _registered;
    _Bool _expectRemediation;
    int _sourceAppPid;
    unsigned int _controlUnit;
    long long _status;
    NSURL *_url;
    long long _direction;
    unsigned long long _socketIdentifier;
    NSString *_sourceAppIdentifier;
    NSMutableData *_pendingData;
    NWPathEvaluator *_evaluator;
    NSUUID *_flowUUID;
    unsigned long long _lastPendingDataStartIndex;
    unsigned long long _lastSendDataLength;
    unsigned long long _pendingDataStartIndex;
    unsigned long long _peekIndex;
    unsigned long long _passLength;
    NSURLResponse *_currentResponse;
    NSURLRequest *_currentRequest;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_urlAppendString;
    NSString *_remediationURL;
    NSString *_remediationButtonText;
    NSString *_organization;
    NSURL *_parentURL;
}

+ (_Bool)filterRequired;
+ (void)connectToFilterUnit:(unsigned int)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
@property unsigned int controlUnit; // @synthesize controlUnit=_controlUnit;
@property(retain) NSURL *parentURL; // @synthesize parentURL=_parentURL;
@property _Bool expectRemediation; // @synthesize expectRemediation=_expectRemediation;
@property(retain) NSString *organization; // @synthesize organization=_organization;
@property(retain) NSString *remediationButtonText; // @synthesize remediationButtonText=_remediationButtonText;
@property(retain) NSString *remediationURL; // @synthesize remediationURL=_remediationURL;
@property(retain) NSString *urlAppendString; // @synthesize urlAppendString=_urlAppendString;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSURLRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(retain) NSURLResponse *currentResponse; // @synthesize currentResponse=_currentResponse;
@property unsigned long long passLength; // @synthesize passLength=_passLength;
@property unsigned long long peekIndex; // @synthesize peekIndex=_peekIndex;
@property unsigned long long pendingDataStartIndex; // @synthesize pendingDataStartIndex=_pendingDataStartIndex;
@property unsigned long long lastSendDataLength; // @synthesize lastSendDataLength=_lastSendDataLength;
@property unsigned long long lastPendingDataStartIndex; // @synthesize lastPendingDataStartIndex=_lastPendingDataStartIndex;
@property(retain) NSUUID *flowUUID; // @synthesize flowUUID=_flowUUID;
@property(retain) NWPathEvaluator *evaluator; // @synthesize evaluator=_evaluator;
@property(retain) NSMutableData *pendingData; // @synthesize pendingData=_pendingData;
@property _Bool registered; // @synthesize registered=_registered;
@property int sourceAppPid; // @synthesize sourceAppPid=_sourceAppPid;
@property(copy) NSString *sourceAppIdentifier; // @synthesize sourceAppIdentifier=_sourceAppIdentifier;
@property(readonly) unsigned long long socketIdentifier; // @synthesize socketIdentifier=_socketIdentifier;
@property(readonly) long long direction; // @synthesize direction=_direction;
@property(retain) NSURL *url; // @synthesize url=_url;
@property(readonly) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)remediateWithDecisionHandler:(CDUnknownBlockType)arg1;
- (void)finishedLoadingWithDecisionHandler:(CDUnknownBlockType)arg1;
- (void)receivedData:(id)arg1 decisionHandler:(CDUnknownBlockType)arg2;
- (void)receivedResponse:(id)arg1 decisionHandler:(CDUnknownBlockType)arg2;
- (void)willSendRequest:(id)arg1 decisionHandler:(CDUnknownBlockType)arg2;
- (id)initWithDecisionQueue:(id)arg1;
- (id)initWithParentURL:(id)arg1 decisionQueue:(id)arg2;
- (void)dataCompleteWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addData:(id)arg1 withCompletionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)replacementData;
- (id)filterOptions;
- (id)mergeURLString:(id)arg1 withAppendString:(id)arg2;
- (_Bool)sendDataToPluginWithConnection:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithURL:(id)arg1 direction:(long long)arg2 socketIdentifier:(unsigned long long)arg3;
- (void)prepareAgentForResponse:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)prepareAgentForRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)prepareAgentWithHandler:(CDUnknownBlockType)arg1;
- (void)prepareAgentForURL:(id)arg1 urlRequest:(id)arg2 urlResponse:(id)arg3 parentURL:(id)arg4 direction:(long long)arg5 flowUUID:(id)arg6 handler:(CDUnknownBlockType)arg7;

@end

