//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Catalyst/_CATRemoteConnectionSendContext-Protocol.h>

@class NSData, NSString;

@interface _CATRemoteConnectionSendDataContext : NSObject <_CATRemoteConnectionSendContext>
{
    NSData *mEncodedData;
    NSData *_data;
    id _userInfo;
    unsigned long long _bytesWritten;
}

@property(nonatomic) unsigned long long bytesWritten; // @synthesize bytesWritten=_bytesWritten;
@property(readonly, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)bufferedDataWithError:(id *)arg1;
@property(readonly, nonatomic) _Bool hasBytesRemaining;
- (id)initWithData:(id)arg1 userInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
