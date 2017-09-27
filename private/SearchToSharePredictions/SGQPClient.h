//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SGQPSearchToShareInternalToolProtocol.h"
#import "SGQPSearchToShareProtocol.h"

@class NSString, NSXPCInterface, Protocol;

@interface SGQPClient : NSObject <SGQPSearchToShareProtocol, SGQPSearchToShareInternalToolProtocol>
{
    Protocol *_protocol;
    NSString *_machServiceName;
    NSXPCInterface *_interface;
}

+ (id)clientForInternalTool;
+ (id)clientForSearchToShare;
- (void).cxx_destruct;
- (void)assetInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)addMessageToConversation:(id)arg1 withContent:(id)arg2 isSent:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)sendCustomFeedback:(id)arg1;
- (void)sendCustomFeedback:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)didEngageResult:(id)arg1;
- (void)didEngageResult:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)didEngageSuggestion:(id)arg1;
- (void)didEngageSuggestion:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)didEndSearch:(id)arg1;
- (void)didEndSearch:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)didStartSearch:(id)arg1;
- (void)didStartSearch:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)searchViewDidDisappear:(id)arg1;
- (void)searchViewDidDisappear:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)searchViewDidAppear:(id)arg1;
- (void)searchViewDidAppear:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)rankedCategoriesForConversation:(id)arg1 limit:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)queryPredictionsForConversation:(id)arg1 limit:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)remoteProxyObjectWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)initWithMachServiceName:(id)arg1 protocol:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

