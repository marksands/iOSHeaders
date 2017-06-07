//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoMailKitServer/NSObject-Protocol.h>

@class NNMKMessagesSyncServiceServer, NNMKProtoCompactMessagesRequest, NNMKProtoMailboxSelection, NNMKProtoMessageDeletions, NNMKProtoMessageStatusUpdates, NNMKProtoMessagesFilteredOutWarning, NNMKProtoSendMessageRequest, NSString;

@protocol NNMKMessagesSyncServiceServerDelegate <NSObject>
- (void)messagesSyncServiceServer:(NNMKMessagesSyncServiceServer *)arg1 didUpdateMailboxSelection:(NNMKProtoMailboxSelection *)arg2;
- (void)messagesSyncServiceServer:(NNMKMessagesSyncServiceServer *)arg1 didRequestSendMessage:(NNMKProtoSendMessageRequest *)arg2;
- (void)messagesSyncServiceServer:(NNMKMessagesSyncServiceServer *)arg1 didRequestCompactMessages:(NNMKProtoCompactMessagesRequest *)arg2;
- (void)messagesSyncServiceServer:(NNMKMessagesSyncServiceServer *)arg1 didWarnMessagesFilteredOut:(NNMKProtoMessagesFilteredOutWarning *)arg2;
- (void)messagesSyncServiceServer:(NNMKMessagesSyncServiceServer *)arg1 didDeleteMessages:(NNMKProtoMessageDeletions *)arg2;
- (void)messagesSyncServiceServer:(NNMKMessagesSyncServiceServer *)arg1 didUpdateMessagesStatus:(NNMKProtoMessageStatusUpdates *)arg2;
- (void)messagesSyncServiceServerConnectivityChanged:(NNMKMessagesSyncServiceServer *)arg1;
- (void)messagesSyncServiceServerSpaceBecameAvailable:(NNMKMessagesSyncServiceServer *)arg1;
- (void)messagesSyncServiceServer:(NNMKMessagesSyncServiceServer *)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(NSString *)arg2;
- (void)messagesSyncServiceServer:(NNMKMessagesSyncServiceServer *)arg1 didFailSendingProtobufWithIDSIdentifier:(NSString *)arg2 errorCode:(long long)arg3;
@end

