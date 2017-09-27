//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface MFMessageTransferResult : NSObject
{
    unsigned long long _resultCode;
    NSArray *_failedMessages;
    NSArray *_transferedMessages;
}

@property(readonly, nonatomic) NSArray *transferedMessages; // @synthesize transferedMessages=_transferedMessages;
@property(readonly, nonatomic) NSArray *failedMessages; // @synthesize failedMessages=_failedMessages;
@property(readonly, nonatomic) unsigned long long resultCode; // @synthesize resultCode=_resultCode;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithResultCode:(unsigned long long)arg1 failedMessages:(id)arg2 transferedMessage:(id)arg3;

@end

