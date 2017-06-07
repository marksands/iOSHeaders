//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPSecureChannelApprovingProxy-Protocol.h>
#import <CoreCDPInternal/CDPSecureChannelProxy-Protocol.h>

@class CUMessageSession, NSString;

@interface CDPTTSUChannel : NSObject <CDPSecureChannelProxy, CDPSecureChannelApprovingProxy>
{
    CUMessageSession *_sharingSession;
    _Bool _hasExistingBackupRecords;
    _Bool _sentInitialResponse;
}

- (void).cxx_destruct;
- (void)setApproverHasBackupRecords:(_Bool)arg1;
- (void)listenForPayloadsWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)hasExistingBackupRecords;
- (void)sendPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

