//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Message/MFOfflineCacheOperation.h>

#import "MFDAOfflineCacheOperation.h"

@class NSString;

@interface MFDADeferredStoreDraftOperation : MFOfflineCacheOperation <MFDAOfflineCacheOperation>
{
    NSString *_messageIDHeader;
    NSString *_folderID;
}

+ (_Bool)supportsSecureCoding;
- (id)description;
- (_Bool)performWithAccount:(id)arg1 offlineCache:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithMessageIDHeader:(id)arg1 mailbox:(id)arg2;

@end

