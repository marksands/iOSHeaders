//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSStreamsProtocolDelegate.h"

@class MSSubscribeStreamsProtocol, NSArray, NSDictionary, NSError, NSString;

@protocol MSSubscribeStreamsProtocolDelegate <MSStreamsProtocolDelegate>
- (void)subscribeStreamsProtocol:(MSSubscribeStreamsProtocol *)arg1 didReceiveAuthenticationError:(NSError *)arg2;
- (void)subscribeStreamsProtocol:(MSSubscribeStreamsProtocol *)arg1 didFinishError:(NSError *)arg2;
- (void)subscribeStreamsProtocol:(MSSubscribeStreamsProtocol *)arg1 didFindShareState:(id)arg2;
- (void)subscribeStreamsProtocol:(MSSubscribeStreamsProtocol *)arg1 didFindTemporarilyUnavailableSubscriptionForPersonID:(NSString *)arg2;
- (void)subscribeStreamsProtocol:(MSSubscribeStreamsProtocol *)arg1 didFindDisappearedSubscriptionForPersonID:(NSString *)arg2;
- (void)subscribeStreamsProtocol:(MSSubscribeStreamsProtocol *)arg1 didFinishReceivingUpdatesForPersonID:(NSString *)arg2 ctag:(NSString *)arg3;
- (void)subscribeStreamsProtocol:(MSSubscribeStreamsProtocol *)arg1 didReceiveAssetCollections:(NSArray *)arg2 forPersonID:(NSString *)arg3;
- (void)subscribeStreamsProtocol:(MSSubscribeStreamsProtocol *)arg1 willReceiveUpdatesForPersonID:(NSString *)arg2 wasReset:(_Bool)arg3 metadata:(NSDictionary *)arg4;
@end

